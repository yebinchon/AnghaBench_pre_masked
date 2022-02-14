
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int prev; } ;
struct TYPE_11__ {TYPE_6__ entry; } ;
struct device {TYPE_1__ power; } ;
struct TYPE_12__ {int event; } ;
typedef TYPE_2__ pm_message_t ;
typedef int ktime_t ;
struct TYPE_13__ {int failed_suspend; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct device*) ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_2__,int,int *) ;
 int VAR_4 ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct device*,TYPE_2__,char*,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_17 (struct device*) ;
 TYPE_3__ VAR_6 ;
 struct device* FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int) ;

int FUNC_20(pm_message_t VAR_7)
{
 ktime_t VAR_8 = FUNC_10();
 int VAR_9 = 0;

 FUNC_19(FUNC_0("dpm_suspend"), VAR_7.event, 1);
 FUNC_13();

 FUNC_4();
 FUNC_2();

 FUNC_14(&VAR_2);
 VAR_5 = VAR_7;
 VAR_1 = 0;
 while (!FUNC_11(&VAR_3)) {
  struct device *VAR_10 = FUNC_18(VAR_3.prev);

  FUNC_9(VAR_10);
  FUNC_15(&VAR_2);

  VAR_9 = FUNC_5(VAR_10);

  FUNC_14(&VAR_2);
  if (VAR_9) {
   FUNC_16(VAR_10, VAR_7, "", VAR_9);
   FUNC_6(FUNC_3(VAR_10));
   FUNC_17(VAR_10);
   break;
  }
  if (!FUNC_11(&VAR_10->power.entry))
   FUNC_12(&VAR_10->power.entry, &VAR_4);
  FUNC_17(VAR_10);
  if (VAR_1)
   break;
 }
 FUNC_15(&VAR_2);
 FUNC_1();
 if (!VAR_9)
  VAR_9 = VAR_1;
 if (VAR_9) {
  VAR_6.failed_suspend++;
  FUNC_7(VAR_0);
 }
 FUNC_8(VAR_8, VAR_7, VAR_9, ((void*)0));
 FUNC_19(FUNC_0("dpm_suspend"), VAR_7.event, 0);
 return VAR_9;
}
