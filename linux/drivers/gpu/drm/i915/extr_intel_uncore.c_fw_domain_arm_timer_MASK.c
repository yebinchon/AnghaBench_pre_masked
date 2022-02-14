
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore_forcewake_domain {int mask; int timer; int wake_count; TYPE_1__* uncore; } ;
struct TYPE_2__ {int fw_domains_timer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct intel_uncore_forcewake_domain *VAR_2)
{
 FUNC_0(VAR_2->uncore->fw_domains_timer & VAR_2->mask);
 VAR_2->uncore->fw_domains_timer |= VAR_2->mask;
 VAR_2->wake_count++;
 FUNC_1(&VAR_2->timer,
          VAR_1,
          VAR_1,
          VAR_0);
}
