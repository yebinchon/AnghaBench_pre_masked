
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct intel_vgpu {int dummy; } ;


 scalar_t__ FUNC_0 (struct intel_vgpu*) ;
 scalar_t__ FUNC_1 (struct intel_vgpu*) ;

__attribute__((used)) static inline bool FUNC_2(struct intel_vgpu *VAR_0, u64 VAR_1)
{
 return VAR_1 >= FUNC_0(VAR_0) &&
        VAR_1 < FUNC_0(VAR_0) + FUNC_1(VAR_0);
}
