
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int last_busy; int autosuspend_delay; int use_autosuspend; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 () ;

u64 FUNC_2(struct device *VAR_1)
{
 int VAR_2;
 u64 VAR_3;

 if (!VAR_1->power.use_autosuspend)
  return 0;

 VAR_2 = FUNC_0(VAR_1->power.autosuspend_delay);
 if (VAR_2 < 0)
  return 0;

 VAR_3 = FUNC_0(VAR_1->power.last_busy);
 VAR_3 += (u64)VAR_2 * VAR_0;
 if (VAR_3 > FUNC_1())
  return VAR_3;

 return 0;
}
