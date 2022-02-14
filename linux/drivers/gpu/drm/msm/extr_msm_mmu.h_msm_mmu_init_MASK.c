
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_mmu_funcs {int dummy; } ;
struct msm_mmu {struct msm_mmu_funcs const* funcs; struct device* dev; } ;
struct device {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct msm_mmu *VAR_0, struct device *VAR_1,
  const struct msm_mmu_funcs *VAR_2)
{
 VAR_0->dev = VAR_1;
 VAR_0->funcs = VAR_2;
}
