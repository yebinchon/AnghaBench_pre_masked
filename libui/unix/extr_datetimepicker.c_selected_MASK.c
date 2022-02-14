
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seconds; int minutes; int ampm; int hours; scalar_t__ hasTime; int calendar; scalar_t__ hasDate; } ;
typedef TYPE_1__ uiprivDateTimePickerWidget ;
typedef int guint ;
typedef int GDateTime ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int,int,int,int,int) ;
 int FUNC_3 (int ,int*,int*,int*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static GDateTime *FUNC_5(uiprivDateTimePickerWidget *VAR_0)
{

 guint VAR_1 = 1970, VAR_2 = 1, VAR_3 = 1;
 guint VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;

 if (VAR_0->hasDate) {
  FUNC_3(FUNC_0(VAR_0->calendar), &VAR_1, &VAR_2, &VAR_3);
  VAR_2++;
 }
 if (VAR_0->hasTime) {
  VAR_4 = FUNC_4(FUNC_1(VAR_0->hours));
  if (FUNC_4(FUNC_1(VAR_0->ampm)) != 0)
   VAR_4 += 12;
  VAR_5 = FUNC_4(FUNC_1(VAR_0->minutes));
  VAR_6 = FUNC_4(FUNC_1(VAR_0->seconds));
 }
 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
