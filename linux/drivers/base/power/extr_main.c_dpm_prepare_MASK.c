
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int next; } ;
struct TYPE_8__ {int is_prepared; TYPE_3__ entry; } ;
struct device {TYPE_1__ power; } ;
struct TYPE_9__ {int event; } ;
typedef TYPE_2__ pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct device*,TYPE_2__) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (struct device*) ;
 struct device* FUNC_12 (int ) ;
 int FUNC_13 (struct device*,int) ;
 int FUNC_14 (struct device*,char*,int ) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 () ;

int FUNC_17(pm_message_t VAR_4)
{
 int VAR_5 = 0;

 FUNC_15(FUNC_0("dpm_prepare"), VAR_4.event, 1);
 FUNC_7();






 FUNC_16();






 FUNC_2();

 FUNC_8(&VAR_2);
 while (!FUNC_5(&VAR_1)) {
  struct device *VAR_6 = FUNC_12(VAR_1.next);

  FUNC_4(VAR_6);
  FUNC_9(&VAR_2);

  FUNC_14(VAR_6, "", VAR_4.event);
  VAR_5 = FUNC_3(VAR_6, VAR_4);
  FUNC_13(VAR_6, VAR_5);

  FUNC_8(&VAR_2);
  if (VAR_5) {
   if (VAR_5 == -VAR_0) {
    FUNC_11(VAR_6);
    VAR_5 = 0;
    continue;
   }
   FUNC_10("Device %s not prepared for power transition: code %d\n",
    FUNC_1(VAR_6), VAR_5);
   FUNC_11(VAR_6);
   break;
  }
  VAR_6->power.is_prepared = 1;
  if (!FUNC_5(&VAR_6->power.entry))
   FUNC_6(&VAR_6->power.entry, &VAR_3);
  FUNC_11(VAR_6);
 }
 FUNC_9(&VAR_2);
 FUNC_15(FUNC_0("dpm_prepare"), VAR_4.event, 0);
 return VAR_5;
}
