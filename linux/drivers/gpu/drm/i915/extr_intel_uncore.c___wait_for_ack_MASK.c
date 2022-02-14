
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore_forcewake_domain {int dummy; } ;


 int VAR_0 ;
 int const FUNC_0 (struct intel_uncore_forcewake_domain const*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline int
FUNC_2(const struct intel_uncore_forcewake_domain *VAR_1,
        const u32 VAR_2,
        const u32 VAR_3)
{
 return FUNC_1((FUNC_0(VAR_1) & VAR_2) == VAR_3,
          VAR_0);
}
