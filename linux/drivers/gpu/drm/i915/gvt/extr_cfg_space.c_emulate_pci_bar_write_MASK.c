
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_vgpu_pci_bar {int size; } ;
struct TYPE_2__ {struct intel_vgpu_pci_bar* bar; } ;
struct intel_vgpu {TYPE_1__ cfg_space; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned int,int) ;




 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct intel_vgpu*,unsigned int,int,int) ;
 int FUNC_2 (struct intel_vgpu*,int) ;
 int FUNC_3 (struct intel_vgpu*,int) ;
 int* FUNC_4 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_5(struct intel_vgpu *VAR_4, unsigned int VAR_5,
 void *VAR_6, unsigned int VAR_7)
{
 u32 VAR_8 = *(u32 *)(VAR_6);
 bool VAR_9 = FUNC_0(VAR_5, 8);
 u64 VAR_10;
 int VAR_11 = 0;
 bool VAR_12 =
  FUNC_4(VAR_4)[VAR_2] & VAR_3;
 struct intel_vgpu_pci_bar *VAR_13 = VAR_4->cfg_space.bar;
 if (VAR_8 == 0xffffffff) {
  switch (VAR_5) {
  case 131:
  case 130:
   VAR_10 = ~(VAR_13[VAR_1].size -1);
   FUNC_1(VAR_4, VAR_5,
      VAR_10 >> (VAR_9 ? 0 : 32), VAR_9);




   VAR_11 = FUNC_3(VAR_4, 0);
   break;
  case 129:
  case 128:
   VAR_10 = ~(VAR_13[VAR_0].size -1);
   FUNC_1(VAR_4, VAR_5,
      VAR_10 >> (VAR_9 ? 0 : 32), VAR_9);
   VAR_11 = FUNC_2(VAR_4, 0);
   break;
  default:

   FUNC_1(VAR_4, VAR_5, 0x0, 0);
  }
 } else {
  switch (VAR_5) {
  case 131:
  case 130:




   FUNC_3(VAR_4, 0);
   FUNC_1(VAR_4, VAR_5, VAR_8, VAR_9);
   VAR_11 = FUNC_3(VAR_4, VAR_12);
   break;
  case 129:
  case 128:
   FUNC_2(VAR_4, 0);
   FUNC_1(VAR_4, VAR_5, VAR_8, VAR_9);
   VAR_11 = FUNC_2(VAR_4, VAR_12);
   break;
  default:
   FUNC_1(VAR_4, VAR_5, VAR_8, VAR_9);
  }
 }
 return VAR_11;
}
