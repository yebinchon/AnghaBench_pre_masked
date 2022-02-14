
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disable_depth; scalar_t__ request; int lock; scalar_t__ request_pending; } ;
struct device {TYPE_1__ power; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;

void FUNC_7(struct device *VAR_1, bool VAR_2)
{
 FUNC_4(&VAR_1->power.lock);

 if (VAR_1->power.disable_depth > 0) {
  VAR_1->power.disable_depth++;
  goto out;
 }






 if (VAR_2 && VAR_1->power.request_pending
     && VAR_1->power.request == VAR_0) {




  FUNC_1(VAR_1);

  FUNC_3(VAR_1, 0);

  FUNC_2(VAR_1);
 }


 FUNC_6(VAR_1);

 if (!VAR_1->power.disable_depth++)
  FUNC_0(VAR_1);

 out:
 FUNC_5(&VAR_1->power.lock);
}
