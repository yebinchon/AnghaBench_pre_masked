
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_vgpu*) ;
 int FUNC_1 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct intel_vgpu *VAR_1,
 unsigned int VAR_2, void *VAR_3, unsigned int VAR_4)
{
 u32 *VAR_5 = (u32 *)(FUNC_0(VAR_1) + VAR_2);
 u32 VAR_6 = *(u32 *)(VAR_3);

 if ((VAR_6 & VAR_0) == VAR_0)

  *VAR_5 = 0;
 else
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 return 0;
}
