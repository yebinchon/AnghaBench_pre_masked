
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wakeup_path; int lock; int ignore_children; } ;
struct device {TYPE_1__ power; struct device* parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct device *VAR_1 = VAR_0->parent;

 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->power.lock);

 if (VAR_0->power.wakeup_path && !VAR_1->power.ignore_children)
  VAR_1->power.wakeup_path = 1;

 FUNC_1(&VAR_1->power.lock);
}
