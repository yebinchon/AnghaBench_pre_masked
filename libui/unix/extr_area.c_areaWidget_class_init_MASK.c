
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int areaWidgetClass ;
struct TYPE_5__ {int key_release_event; int key_press_event; int leave_notify_event; int enter_notify_event; int motion_notify_event; int button_release_event; int button_press_event; int get_preferred_width; int get_preferred_height; int draw; int size_allocate; } ;
struct TYPE_4__ {int get_property; int set_property; int finalize; int dispose; } ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (char*,char*,char*,int) ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_4(areaWidgetClass *VAR_20)
{
 FUNC_1(VAR_20)->dispose = VAR_5;
 FUNC_1(VAR_20)->finalize = VAR_8;
 FUNC_1(VAR_20)->set_property = VAR_16;
 FUNC_1(VAR_20)->get_property = VAR_11;

 FUNC_0(VAR_20)->size_allocate = VAR_17;
 FUNC_0(VAR_20)->draw = VAR_6;
 FUNC_0(VAR_20)->get_preferred_height = VAR_9;
 FUNC_0(VAR_20)->get_preferred_width = VAR_10;
 FUNC_0(VAR_20)->button_press_event = VAR_3;
 FUNC_0(VAR_20)->button_release_event = VAR_4;
 FUNC_0(VAR_20)->motion_notify_event = VAR_15;
 FUNC_0(VAR_20)->enter_notify_event = VAR_7;
 FUNC_0(VAR_20)->leave_notify_event = VAR_14;
 FUNC_0(VAR_20)->key_press_event = VAR_12;
 FUNC_0(VAR_20)->key_release_event = VAR_13;

 VAR_19 = FUNC_3("libui-area",
  "libui-area",
  "uiArea.",
  VAR_2 | VAR_0 | VAR_1);
 FUNC_2(FUNC_1(VAR_20), VAR_18, VAR_19);
}
