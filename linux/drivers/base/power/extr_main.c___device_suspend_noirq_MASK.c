
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int is_noirq_suspended; int must_resume; int completion; int usage_count; scalar_t__ direct_complete; scalar_t__ syscore; } ;
struct device {TYPE_2__ power; TYPE_1__* driver; } ;
typedef int pm_message_t ;
typedef scalar_t__ pm_callback_t ;
struct TYPE_3__ {scalar_t__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device*,int ) ;
 scalar_t__ FUNC_6 (struct device*,int ,int) ;
 int FUNC_7 (scalar_t__,struct device*,int ,char const*) ;
 int FUNC_8 (struct device*,int ,int *) ;
 scalar_t__ FUNC_9 (struct device*,int ,char const**) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_2, pm_message_t VAR_3, bool VAR_4)
{
 pm_callback_t VAR_5;
 const char *VAR_6;
 bool VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_0(VAR_2);
 FUNC_1(0);

 FUNC_11(VAR_2, VAR_4);

 if (VAR_1)
  goto Complete;

 if (VAR_2->power.syscore || VAR_2->power.direct_complete)
  goto Complete;

 VAR_5 = FUNC_9(VAR_2, VAR_3, &VAR_6);
 if (VAR_5)
  goto Run;

 VAR_7 = !FUNC_8(VAR_2, VAR_3, ((void*)0));

 if (FUNC_4(VAR_2) && VAR_7)
  goto Skip;

 if (VAR_2->driver && VAR_2->driver->pm) {
  VAR_6 = "noirq driver ";
  VAR_5 = FUNC_12(VAR_2->driver->pm, VAR_3);
 }

Run:
 VAR_8 = FUNC_7(VAR_5, VAR_2, VAR_3, VAR_6);
 if (VAR_8) {
  VAR_1 = VAR_8;
  goto Complete;
 }

Skip:
 VAR_2->power.is_noirq_suspended = 1;

 if (FUNC_5(VAR_2, VAR_0)) {
  VAR_2->power.must_resume = VAR_2->power.must_resume ||
    FUNC_2(&VAR_2->power.usage_count) > 1 ||
    FUNC_6(VAR_2, VAR_3, VAR_7);
 } else {
  VAR_2->power.must_resume = 1;
 }

 if (VAR_2->power.must_resume)
  FUNC_10(VAR_2);

Complete:
 FUNC_3(&VAR_2->power.completion);
 FUNC_1(VAR_8);
 return VAR_8;
}
