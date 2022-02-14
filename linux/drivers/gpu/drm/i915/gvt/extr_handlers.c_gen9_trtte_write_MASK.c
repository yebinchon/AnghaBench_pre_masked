
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_vgpu {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct intel_vgpu *VAR_1, unsigned int VAR_2,
  void *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5 = *(u32 *)VAR_3;

 if ((VAR_5 & 1) && (VAR_5 & (1 << 1)) == 0) {
  FUNC_0(1, "VM(%d): Use physical address for TRTT!\n",
    VAR_1->id);
  return -VAR_0;
 }
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 return 0;
}
