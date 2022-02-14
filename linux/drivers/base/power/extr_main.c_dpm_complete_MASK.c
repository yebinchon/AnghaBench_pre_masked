
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_7__ {int is_prepared; int entry; } ;
struct device {TYPE_1__ power; } ;
struct TYPE_8__ {int event; } ;
typedef TYPE_2__ pm_message_t ;
struct TYPE_9__ {int prev; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct device*,TYPE_2__) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,struct list_head*) ;
 int FUNC_7 (struct list_head*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device*) ;
 struct device* FUNC_12 (int ) ;
 int FUNC_13 (struct device*,int ) ;
 int FUNC_14 (struct device*,char*,int ) ;
 int FUNC_15 (int ,int ,int) ;

void FUNC_16(pm_message_t VAR_3)
{
 struct list_head VAR_4;

 FUNC_15(FUNC_1("dpm_complete"), VAR_3.event, 1);
 FUNC_8();

 FUNC_0(&VAR_4);
 FUNC_9(&VAR_1);
 while (!FUNC_5(&VAR_2)) {
  struct device *VAR_5 = FUNC_12(VAR_2.prev);

  FUNC_4(VAR_5);
  VAR_5->power.is_prepared = 0;
  FUNC_6(&VAR_5->power.entry, &VAR_4);
  FUNC_10(&VAR_1);

  FUNC_14(VAR_5, "", VAR_3.event);
  FUNC_2(VAR_5, VAR_3);
  FUNC_13(VAR_5, 0);

  FUNC_9(&VAR_1);
  FUNC_11(VAR_5);
 }
 FUNC_7(&VAR_4, &VAR_0);
 FUNC_10(&VAR_1);


 FUNC_3();
 FUNC_15(FUNC_1("dpm_complete"), VAR_3.event, 0);
}
