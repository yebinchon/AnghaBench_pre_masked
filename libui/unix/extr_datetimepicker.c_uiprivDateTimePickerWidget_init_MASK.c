
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {void* hasDate; void* hasTime; int * mouse; int * keyboard; void* toggledSignal; struct TYPE_20__* window; struct TYPE_20__* box; struct TYPE_20__* ampm; struct TYPE_20__* timebox; int ampmBlock; struct TYPE_20__* seconds; int secondsBlock; struct TYPE_20__* minutes; int minutesBlock; struct TYPE_20__* hours; int hoursBlock; struct TYPE_20__* calendar; void* calendarBlock; } ;
typedef TYPE_1__ uiprivDateTimePickerWidget ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 void* VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 () ;
 void* FUNC_7 (TYPE_1__*,char*,int ,TYPE_1__*) ;
 int VAR_11 ;
 void* FUNC_8 (int ,int) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (int ,int *,char*) ;
 TYPE_1__* FUNC_11 () ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int ,int) ;
 TYPE_1__* FUNC_14 (char*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (TYPE_1__*) ;
 TYPE_1__* FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,void*) ;
 int FUNC_27 (int ,void*) ;
 int FUNC_28 (int ,int ) ;
 int * VAR_12 ;
 int VAR_13 ;
 void* FUNC_29 (TYPE_1__*,int ,int,int *,int ,int *) ;
 int VAR_14 ;
 int FUNC_30 (TYPE_1__*,int ) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_31(uiprivDateTimePickerWidget *VAR_16)
{
 VAR_16->window = FUNC_20(VAR_5);
 FUNC_25(FUNC_4(VAR_16->window), VAR_0);
 FUNC_21(FUNC_4(VAR_16->window), FUNC_3(VAR_16));
 FUNC_22(FUNC_4(VAR_16->window), VAR_0);
 FUNC_23(FUNC_4(VAR_16->window), VAR_0);
 FUNC_28(FUNC_4(VAR_16->window), VAR_1);
 FUNC_27(FUNC_4(VAR_16->window), VAR_6);
 FUNC_26(FUNC_4(VAR_16->window), VAR_6);
 FUNC_24(FUNC_4(VAR_16->window), VAR_0);
 FUNC_13(FUNC_1(VAR_16->window), 12);

 FUNC_16(FUNC_17(VAR_16->window), "frame");

 VAR_16->box = FUNC_8(VAR_4, 6);
 FUNC_12(FUNC_1(VAR_16->window), VAR_16->box);

 VAR_16->calendar = FUNC_9();
 VAR_16->calendarBlock = FUNC_7(VAR_16->calendar, "day-selected", FUNC_5(VAR_10), VAR_16);
 FUNC_12(FUNC_1(VAR_16->box), VAR_16->calendar);

 VAR_16->timebox = FUNC_8(VAR_3, 6);
 FUNC_18(VAR_16->timebox, VAR_2);
 FUNC_12(FUNC_1(VAR_16->box), VAR_16->timebox);

 VAR_16->hours = FUNC_29(VAR_16, 0, 11, VAR_12, VAR_13, &(VAR_16->hoursBlock));
 FUNC_12(FUNC_1(VAR_16->timebox), VAR_16->hours);

 FUNC_12(FUNC_1(VAR_16->timebox),
  FUNC_14(":"));

 VAR_16->minutes = FUNC_29(VAR_16, 0, 59, ((void*)0), VAR_15, &(VAR_16->minutesBlock));
 FUNC_12(FUNC_1(VAR_16->timebox), VAR_16->minutes);

 FUNC_12(FUNC_1(VAR_16->timebox),
  FUNC_14(":"));

 VAR_16->seconds = FUNC_29(VAR_16, 0, 59, ((void*)0), VAR_15, &(VAR_16->secondsBlock));
 FUNC_12(FUNC_1(VAR_16->timebox), VAR_16->seconds);
 VAR_16->ampm = FUNC_29(VAR_16, 0, 1, VAR_7, VAR_8, &(VAR_16->ampmBlock));
 FUNC_15(FUNC_2(VAR_16->ampm), VAR_0);
 FUNC_18(VAR_16->ampm, VAR_2);
 FUNC_12(FUNC_1(VAR_16->timebox), VAR_16->ampm);

 FUNC_19(VAR_16->box);

 FUNC_7(VAR_16->window, "grab-broken-event", FUNC_5(VAR_11), VAR_16);
 FUNC_7(VAR_16->window, "button-release-event", FUNC_5(VAR_9), VAR_16);

 VAR_16->toggledSignal = FUNC_7(VAR_16, "toggled", FUNC_5(VAR_14), ((void*)0));
 VAR_16->keyboard = ((void*)0);
 VAR_16->mouse = ((void*)0);

 VAR_16->hasTime = VAR_6;
 VAR_16->hasDate = VAR_6;


 FUNC_30(VAR_16, FUNC_6());
}
