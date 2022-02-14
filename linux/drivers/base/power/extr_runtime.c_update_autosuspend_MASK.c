
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autosuspend_delay; int usage_count; scalar_t__ use_autosuspend; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1->power.autosuspend_delay;


 if (VAR_1->power.use_autosuspend && VAR_4 < 0) {


  if (!VAR_3 || VAR_2 >= 0) {
   FUNC_1(&VAR_1->power.usage_count);
   FUNC_3(VAR_1, 0);
  }
 }


 else {


  if (VAR_3 && VAR_2 < 0)
   FUNC_0(&VAR_1->power.usage_count);


  FUNC_2(VAR_1, VAR_0);
 }
}
