
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int prev; } ;
struct TYPE_12__ {TYPE_7__ entry; } ;
struct device {TYPE_1__ power; } ;
struct TYPE_13__ {int event; } ;
typedef TYPE_2__ pm_message_t ;
typedef int ktime_t ;
struct TYPE_14__ {int failed_suspend_late; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_2__,int,char*) ;
 TYPE_7__ VAR_4 ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct device*,TYPE_2__,char*,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (TYPE_2__) ;
 TYPE_3__ VAR_6 ;
 struct device* FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int) ;

int FUNC_19(pm_message_t VAR_7)
{
 ktime_t VAR_8 = FUNC_9();
 int VAR_9 = 0;

 FUNC_18(FUNC_0("dpm_suspend_late"), VAR_7.event, 1);
 FUNC_12(&VAR_3);
 VAR_5 = VAR_7;
 VAR_1 = 0;

 while (!FUNC_10(&VAR_4)) {
  struct device *VAR_10 = FUNC_17(VAR_4.prev);

  FUNC_8(VAR_10);
  FUNC_13(&VAR_3);

  VAR_9 = FUNC_3(VAR_10);

  FUNC_12(&VAR_3);
  if (!FUNC_10(&VAR_10->power.entry))
   FUNC_11(&VAR_10->power.entry, &VAR_2);

  if (VAR_9) {
   FUNC_14(VAR_10, VAR_7, " late", VAR_9);
   FUNC_5(FUNC_2(VAR_10));
   FUNC_15(VAR_10);
   break;
  }
  FUNC_15(VAR_10);

  if (VAR_1)
   break;
 }
 FUNC_13(&VAR_3);
 FUNC_1();
 if (!VAR_9)
  VAR_9 = VAR_1;
 if (VAR_9) {
  VAR_6.failed_suspend_late++;
  FUNC_6(VAR_0);
  FUNC_4(FUNC_16(VAR_7));
 }
 FUNC_7(VAR_8, VAR_7, VAR_9, "late");
 FUNC_18(FUNC_0("dpm_suspend_late"), VAR_7.event, 0);
 return VAR_9;
}
