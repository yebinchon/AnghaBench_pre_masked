
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wakeup_source {int dummy; } ;
struct TYPE_2__ {int lock; struct wakeup_source* wakeup; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct wakeup_source *FUNC_2(struct device *VAR_0)
{
 struct wakeup_source *VAR_1;

 FUNC_0(&VAR_0->power.lock);
 VAR_1 = VAR_0->power.wakeup;
 VAR_0->power.wakeup = ((void*)0);
 FUNC_1(&VAR_0->power.lock);
 return VAR_1;
}
