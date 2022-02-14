
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int is_noirq_suspended; int is_late_suspended; int is_suspended; int completion; scalar_t__ direct_complete; scalar_t__ syscore; } ;
struct device {TYPE_2__ power; TYPE_1__* driver; } ;
struct TYPE_14__ {scalar_t__ event; } ;
typedef TYPE_3__ pm_message_t ;
typedef scalar_t__ pm_callback_t ;
struct TYPE_12__ {scalar_t__ pm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (scalar_t__,struct device*,TYPE_3__,char const*) ;
 scalar_t__ FUNC_6 (struct device*,TYPE_3__,char const**) ;
 int FUNC_7 (struct device*,TYPE_3__,int *) ;
 int FUNC_8 (struct device*,TYPE_3__,int *) ;
 int FUNC_9 (struct device*,int) ;
 scalar_t__ FUNC_10 (scalar_t__,TYPE_3__) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 TYPE_3__ FUNC_13 (TYPE_3__) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_1, pm_message_t VAR_2, bool VAR_3)
{
 pm_callback_t VAR_4;
 const char *VAR_5;
 bool VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_1);
 FUNC_1(0);

 if (VAR_1->power.syscore || VAR_1->power.direct_complete)
  goto Out;

 if (!VAR_1->power.is_noirq_suspended)
  goto Out;

 FUNC_9(VAR_1, VAR_3);

 VAR_6 = FUNC_3(VAR_1);

 VAR_4 = FUNC_6(VAR_1, VAR_2, &VAR_5);
 if (VAR_4)
  goto Run;

 if (VAR_6)
  goto Skip;

 if (FUNC_4(VAR_1)) {
  pm_message_t VAR_8 = FUNC_13(VAR_2);
  if (!FUNC_7(VAR_1, VAR_8, ((void*)0)) &&
      !FUNC_8(VAR_1, VAR_8, ((void*)0))) {
   if (VAR_2.event == VAR_0) {
    VAR_6 = 1;
    goto Skip;
   } else {
    FUNC_11(VAR_1);
   }
  }
 }

 if (VAR_1->driver && VAR_1->driver->pm) {
  VAR_5 = "noirq driver ";
  VAR_4 = FUNC_10(VAR_1->driver->pm, VAR_2);
 }

Run:
 VAR_7 = FUNC_5(VAR_4, VAR_1, VAR_2, VAR_5);

Skip:
 VAR_1->power.is_noirq_suspended = 0;

 if (VAR_6) {

  VAR_1->power.is_late_suspended = 0;
  VAR_1->power.is_suspended = 0;







  FUNC_12(VAR_1);
 }

Out:
 FUNC_2(&VAR_1->power.completion);
 FUNC_1(VAR_7);
 return VAR_7;
}
