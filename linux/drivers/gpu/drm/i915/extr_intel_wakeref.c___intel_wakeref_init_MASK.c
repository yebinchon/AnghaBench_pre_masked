
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class_key {int dummy; } ;
struct intel_wakeref_ops {int dummy; } ;
struct intel_wakeref {int work; scalar_t__ wakeref; int count; int mutex; struct intel_wakeref_ops const* ops; struct intel_runtime_pm* rpm; } ;
struct intel_runtime_pm {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,struct lock_class_key*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct intel_wakeref *VAR_1,
     struct intel_runtime_pm *VAR_2,
     const struct intel_wakeref_ops *VAR_3,
     struct lock_class_key *VAR_4)
{
 VAR_1->rpm = VAR_2;
 VAR_1->ops = VAR_3;

 FUNC_1(&VAR_1->mutex, "wakeref", VAR_4);
 FUNC_2(&VAR_1->count, 0);
 VAR_1->wakeref = 0;

 FUNC_0(&VAR_1->work, VAR_0);
}
