
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


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,struct device*,int ,char const*) ;
 scalar_t__ FUNC_4 (struct device*,int ,char const**) ;
 int FUNC_5 (struct device*,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_0, pm_message_t VAR_1, bool VAR_2)
{
 pm_callback_t VAR_3;
 const char *VAR_4;
 int VAR_5 = 0;

 FUNC_0(VAR_0);
 FUNC_1(0);

 if (VAR_0->power.syscore || VAR_0->power.direct_complete)
  goto Out;

 if (!VAR_0->power.is_late_suspended)
  goto Out;

 FUNC_5(VAR_0, VAR_2);

 VAR_3 = FUNC_4(VAR_0, VAR_1, &VAR_4);

 if (!VAR_3 && VAR_0->driver && VAR_0->driver->pm) {
  VAR_4 = "early driver ";
  VAR_3 = FUNC_6(VAR_0->driver->pm, VAR_1);
 }

 VAR_5 = FUNC_3(VAR_3, VAR_0, VAR_1, VAR_4);
 VAR_0->power.is_late_suspended = 0;

 Out:
 FUNC_1(VAR_5);

 FUNC_7(VAR_0);
 FUNC_2(&VAR_0->power.completion);
 return VAR_5;
}
