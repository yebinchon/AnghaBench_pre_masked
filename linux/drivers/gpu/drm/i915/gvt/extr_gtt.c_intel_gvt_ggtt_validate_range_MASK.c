
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct intel_vgpu {int dummy; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct intel_vgpu*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct intel_vgpu*,scalar_t__) ;
 int FUNC_3 (struct intel_vgpu*,scalar_t__) ;

bool FUNC_4(struct intel_vgpu *VAR_0, u64 VAR_1, u32 VAR_2)
{
 if (VAR_2 == 0)
  return FUNC_3(VAR_0, VAR_1);

 if (FUNC_1(VAR_0, VAR_1) &&
     FUNC_1(VAR_0, VAR_1 + VAR_2 - 1))
  return 1;
 else if (FUNC_2(VAR_0, VAR_1) &&
   FUNC_2(VAR_0, VAR_1 + VAR_2 - 1))
  return 1;

 FUNC_0("Invalid ggtt range at 0x%llx, size: 0x%x\n",
       VAR_1, VAR_2);
 return 0;
}
