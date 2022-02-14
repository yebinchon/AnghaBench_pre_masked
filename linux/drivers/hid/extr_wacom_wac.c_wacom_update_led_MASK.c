
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wacom_led {int held; int trigger; } ;
struct TYPE_8__ {TYPE_3__* groups; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ features; } ;
struct wacom {int hdev; TYPE_4__ led; TYPE_2__ wacom_wac; } ;
struct TYPE_7__ {int select; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int *,int ) ;
 void FUNC_2 (struct wacom*,int,int) ;
 int FUNC_3 (struct wacom*,int,int,int) ;
 struct wacom_led* FUNC_4 (struct wacom*,int,int) ;
 struct wacom_led* FUNC_5 (struct wacom*,struct wacom_led*) ;
 int FUNC_6 (struct wacom_led*) ;

__attribute__((used)) static void FUNC_7(struct wacom *VAR_1, int VAR_2, int VAR_3,
        int VAR_4)
{
 struct wacom_led *VAR_5, *VAR_6;
 int VAR_7;
 bool VAR_8;

 if (VAR_1->wacom_wac.features.type == VAR_0)
  return FUNC_2(VAR_1, VAR_3, VAR_4);

 VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_7 = VAR_1->led.groups[VAR_4].select;

 VAR_5 = FUNC_4(VAR_1, VAR_4, VAR_7);
 if (!VAR_5) {
  FUNC_0(VAR_1->hdev, "can't find current LED %d in group %d\n",
   VAR_7, VAR_4);
  return;
 }

 if (!VAR_8) {
  VAR_5->held = 0;
  return;
 }

 if (VAR_5->held && VAR_8)
  return;

 VAR_6 = FUNC_5(VAR_1, VAR_5);
 if (!VAR_6) {
  FUNC_0(VAR_1->hdev, "can't find next LED in group %d\n",
   VAR_4);
  return;
 }
 if (VAR_6 == VAR_5)
  return;

 VAR_6->held = 1;
 FUNC_1(&VAR_6->trigger,
     FUNC_6(VAR_6));
}
