
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int start; int stop; } ;
struct TYPE_4__ {int complete; int restore_noirq; int poweroff_noirq; int thaw_noirq; int freeze_noirq; int resume_noirq; int suspend_noirq; int prepare; int runtime_resume; int runtime_suspend; } ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct generic_pm_domain {int max_off_time_ns; int max_off_time_changed; int has_provider; int flags; int state_count; int gpd_list_node; int name; int dev; int cpus; TYPE_3__ dev_ops; TYPE_2__ domain; int accounting_time; int * provider; scalar_t__ device_count; int status; int sd_count; int power_off_work; struct dev_power_governor* gov; int dev_list; int slave_links; int master_links; } ;
struct dev_power_governor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct generic_pm_domain*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct generic_pm_domain*) ;
 scalar_t__ FUNC_8 (struct generic_pm_domain*) ;
 scalar_t__ FUNC_9 (struct generic_pm_domain*) ;
 int FUNC_10 (struct generic_pm_domain*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (struct generic_pm_domain*) ;
 int FUNC_12 (struct generic_pm_domain*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (int *,int ) ;

int FUNC_19(struct generic_pm_domain *VAR_21,
    struct dev_power_governor *VAR_22, bool VAR_23)
{
 int VAR_24;

 if (FUNC_2(VAR_21))
  return -VAR_0;

 FUNC_0(&VAR_21->master_links);
 FUNC_0(&VAR_21->slave_links);
 FUNC_0(&VAR_21->dev_list);
 FUNC_10(VAR_21);
 VAR_21->gov = VAR_22;
 FUNC_1(&VAR_21->power_off_work, VAR_8);
 FUNC_3(&VAR_21->sd_count, 0);
 VAR_21->status = VAR_23 ? VAR_5 : VAR_4;
 VAR_21->device_count = 0;
 VAR_21->max_off_time_ns = -1;
 VAR_21->max_off_time_changed = 1;
 VAR_21->provider = ((void*)0);
 VAR_21->has_provider = 0;
 VAR_21->accounting_time = FUNC_13();
 VAR_21->domain.ops.runtime_suspend = VAR_14;
 VAR_21->domain.ops.runtime_resume = VAR_13;
 VAR_21->domain.ops.prepare = VAR_10;
 VAR_21->domain.ops.suspend_noirq = VAR_15;
 VAR_21->domain.ops.resume_noirq = VAR_12;
 VAR_21->domain.ops.freeze_noirq = VAR_7;
 VAR_21->domain.ops.thaw_noirq = VAR_16;
 VAR_21->domain.ops.poweroff_noirq = VAR_9;
 VAR_21->domain.ops.restore_noirq = VAR_11;
 VAR_21->domain.ops.complete = VAR_6;

 if (VAR_21->flags & VAR_2) {
  VAR_21->dev_ops.stop = VAR_20;
  VAR_21->dev_ops.start = VAR_19;
 }


 if ((FUNC_7(VAR_21) || FUNC_9(VAR_21)) &&
   !FUNC_12(VAR_21))
  return -VAR_0;

 if (FUNC_8(VAR_21) &&
     !FUNC_18(&VAR_21->cpus, VAR_3))
  return -VAR_1;


 if (VAR_21->state_count == 0) {
  VAR_24 = FUNC_11(VAR_21);
  if (VAR_24) {
   if (FUNC_8(VAR_21))
    FUNC_6(VAR_21->cpus);
   return VAR_24;
  }
 } else if (!VAR_22 && VAR_21->state_count > 1) {
  FUNC_17("%s: no governor for states\n", VAR_21->name);
 }

 FUNC_5(&VAR_21->dev);
 FUNC_4(&VAR_21->dev, "%s", VAR_21->name);

 FUNC_15(&VAR_18);
 FUNC_14(&VAR_21->gpd_list_node, &VAR_17);
 FUNC_16(&VAR_18);

 return 0;
}
