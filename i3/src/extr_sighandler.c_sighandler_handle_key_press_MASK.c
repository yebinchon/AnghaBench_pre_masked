
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char xcb_keysym_t ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ xcb_key_press_event_t ;
typedef int uint16_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char FUNC_5 (int ,TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(xcb_key_press_event_t *VAR_3) {
    uint16_t VAR_4 = VAR_3->state;




    VAR_4 &= ~VAR_2;

    xcb_keysym_t VAR_5 = FUNC_5(VAR_1, VAR_3, VAR_4);

    if (VAR_5 == 'b') {
        FUNC_0("User issued core-dump command.\n");



        VAR_0 = FUNC_2();
        FUNC_4();
    } else if (VAR_5 == 'r') {
        FUNC_3();
        FUNC_1(0);
    } else if (VAR_5 == 'f') {
        FUNC_3();
        FUNC_1(1);
    }
}
