
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {struct device* dev; } ;
struct TYPE_7__ {int notifier_call; } ;
struct TYPE_6__ {int constraint_changed; int effective_constraint_ns; } ;
struct generic_pm_domain_data {TYPE_4__ base; TYPE_2__ nb; TYPE_1__ td; } ;
struct TYPE_10__ {int lock; TYPE_3__* subsys_data; } ;
struct device {TYPE_5__ power; } ;
struct TYPE_8__ {TYPE_4__* domain_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct generic_pm_domain_data* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int VAR_4 ;
 int FUNC_3 (struct generic_pm_domain_data*) ;
 struct generic_pm_domain_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct generic_pm_domain_data *FUNC_7(struct device *VAR_5)
{
 struct generic_pm_domain_data *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  return FUNC_0(VAR_7);

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto err_put;
 }

 VAR_6->base.dev = VAR_5;
 VAR_6->td.constraint_changed = 1;
 VAR_6->td.effective_constraint_ns = VAR_3;
 VAR_6->nb.notifier_call = VAR_4;

 FUNC_5(&VAR_5->power.lock);

 if (VAR_5->power.subsys_data->domain_data) {
  VAR_7 = -VAR_0;
  goto err_free;
 }

 VAR_5->power.subsys_data->domain_data = &VAR_6->base;

 FUNC_6(&VAR_5->power.lock);

 return VAR_6;

 err_free:
 FUNC_6(&VAR_5->power.lock);
 FUNC_3(VAR_6);
 err_put:
 FUNC_2(VAR_5);
 return FUNC_0(VAR_7);
}
