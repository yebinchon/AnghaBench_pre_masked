
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore_forcewake_domain {int id; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct intel_uncore_forcewake_domain const*,int ) ;

__attribute__((used)) static inline void
FUNC_4(const struct intel_uncore_forcewake_domain *VAR_2)
{
 if (FUNC_3(VAR_2, VAR_0)) {
  FUNC_0("%s: timed out waiting for forcewake ack to clear.\n",
     FUNC_2(VAR_2->id));
  FUNC_1(VAR_1);
 }
}
