
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct intel_vgpu*) ;
 scalar_t__ FUNC_2 (struct intel_vgpu*) ;
 scalar_t__ FUNC_3 (struct intel_vgpu*,scalar_t__) ;
 int FUNC_4 (struct intel_vgpu*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct intel_vgpu*) ;
 scalar_t__ FUNC_6 (struct intel_vgpu*) ;

int FUNC_7(struct intel_vgpu *VAR_1, u64 VAR_2, u64 *VAR_3)
{
 if (FUNC_0(!FUNC_4(VAR_1, VAR_2),
   "invalid guest gmadr %llx\n", VAR_2))
  return -VAR_0;

 if (FUNC_3(VAR_1, VAR_2))
  *VAR_3 = FUNC_1(VAR_1)
     + (VAR_2 - FUNC_2(VAR_1));
 else
  *VAR_3 = FUNC_5(VAR_1)
     + (VAR_2 - FUNC_6(VAR_1));
 return 0;
}
