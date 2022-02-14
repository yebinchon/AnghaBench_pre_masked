
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct generic_pm_domain {unsigned int state_idx; int (* power_on ) (struct generic_pm_domain*) ;int max_off_time_changed; int name; TYPE_1__* states; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;
struct TYPE_2__ {scalar_t__ power_on_latency_ns; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,scalar_t__) ;
 int FUNC_4 (struct generic_pm_domain*) ;
 int FUNC_5 (struct generic_pm_domain*) ;

__attribute__((used)) static int FUNC_6(struct generic_pm_domain *VAR_0, bool VAR_1)
{
 unsigned int VAR_2 = VAR_0->state_idx;
 ktime_t VAR_3;
 s64 VAR_4;
 int VAR_5;

 if (!VAR_0->power_on)
  return 0;

 if (!VAR_1)
  return VAR_0->power_on(VAR_0);

 VAR_3 = FUNC_0();
 VAR_5 = VAR_0->power_on(VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_2(FUNC_1(FUNC_0(), VAR_3));
 if (VAR_4 <= VAR_0->states[VAR_2].power_on_latency_ns)
  return VAR_5;

 VAR_0->states[VAR_2].power_on_latency_ns = VAR_4;
 VAR_0->max_off_time_changed = 1;
 FUNC_3("%s: Power-%s latency exceeded, new value %lld ns\n",
   VAR_0->name, "on", VAR_4);

 return VAR_5;
}
