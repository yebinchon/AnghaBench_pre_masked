
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int secondsBlock; int seconds; int minutesBlock; int minutes; int hoursBlock; int hours; int ampmBlock; int ampm; scalar_t__ hasTime; int calendarBlock; int calendar; scalar_t__ hasDate; } ;
typedef TYPE_1__ uiprivDateTimePickerWidget ;
typedef int gint ;
typedef int GDateTime ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int*,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int,int ) ;

__attribute__((used)) static void FUNC_12(uiprivDateTimePickerWidget *VAR_0, GDateTime *VAR_1)
{
 gint VAR_2, VAR_3, VAR_4;
 gint VAR_5;


 if (VAR_0->hasDate) {
  FUNC_5(VAR_1, &VAR_2, &VAR_3, &VAR_4);
  VAR_3--;
  FUNC_7(VAR_0->calendar, VAR_0->calendarBlock);
  FUNC_10(FUNC_0(VAR_0->calendar), VAR_3, VAR_2);
  FUNC_9(FUNC_0(VAR_0->calendar), VAR_4);
  FUNC_8(VAR_0->calendar, VAR_0->calendarBlock);
 }
 if (VAR_0->hasTime) {
  VAR_5 = FUNC_2(VAR_1);
  if (VAR_5 >= 12) {
   VAR_5 -= 12;
   FUNC_11(FUNC_1(VAR_0->ampm), 1, VAR_0->ampmBlock);
  }
  FUNC_11(FUNC_1(VAR_0->hours), VAR_5, VAR_0->hoursBlock);
  FUNC_11(FUNC_1(VAR_0->minutes), FUNC_3(VAR_1), VAR_0->minutesBlock);
  FUNC_11(FUNC_1(VAR_0->seconds), FUNC_4(VAR_1), VAR_0->secondsBlock);
 }
 FUNC_6(VAR_1);
}
