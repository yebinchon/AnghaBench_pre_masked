
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int is_late_suspended; int completion; scalar_t__ direct_complete; scalar_t__ syscore; } ;
struct device {TYPE_2__ power; TYPE_1__* driver; } ;
typedef int pm_message_t ;
typedef scalar_t__ pm_callback_t ;
struct TYPE_3__ {scalar_t__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (scalar_t__,struct device*,int ,char const*) ;
 scalar_t__ FUNC_7 (struct device*,int ,char const**) ;
 int FUNC_8 (struct device*,int ,int *) ;
 int FUNC_9 (struct device*,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 scalar_t__ FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct device *VAR_2, pm_message_t VAR_3, bool VAR_4)
{
 pm_callback_t VAR_5;
 const char *VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_2);
 FUNC_1(0);

 FUNC_2(VAR_2, 0);

 FUNC_9(VAR_2, VAR_4);

 if (VAR_1)
  goto Complete;

 if (FUNC_11()) {
  VAR_1 = -VAR_0;
  goto Complete;
 }

 if (VAR_2->power.syscore || VAR_2->power.direct_complete)
  goto Complete;

 VAR_5 = FUNC_7(VAR_2, VAR_3, &VAR_6);
 if (VAR_5)
  goto Run;

 if (FUNC_4(VAR_2) &&
     !FUNC_8(VAR_2, VAR_3, ((void*)0)))
  goto Skip;

 if (VAR_2->driver && VAR_2->driver->pm) {
  VAR_6 = "late driver ";
  VAR_5 = FUNC_10(VAR_2->driver->pm, VAR_3);
 }

Run:
 VAR_7 = FUNC_6(VAR_5, VAR_2, VAR_3, VAR_6);
 if (VAR_7) {
  VAR_1 = VAR_7;
  goto Complete;
 }
 FUNC_5(VAR_2);

Skip:
 VAR_2->power.is_late_suspended = 1;

Complete:
 FUNC_1(VAR_7);
 FUNC_3(&VAR_2->power.completion);
 return VAR_7;
}
