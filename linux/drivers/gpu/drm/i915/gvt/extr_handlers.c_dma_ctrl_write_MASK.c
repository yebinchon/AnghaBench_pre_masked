
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_vgpu {int id; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct intel_vgpu*,unsigned int) ;
 int FUNC_3 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu *VAR_1, unsigned int VAR_2,
  void *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5;

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = FUNC_2(VAR_1, VAR_2);

 if (FUNC_0(VAR_5, VAR_0)) {
  FUNC_1(1, "VM(%d): iGVT-g doesn't support GuC\n",
    VAR_1->id);
  return 0;
 }

 return 0;
}
