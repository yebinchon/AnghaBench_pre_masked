
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event_state_mask; } ;
typedef TYPE_1__ Binding ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;

__attribute__((used)) static bool FUNC_1(const Binding *VAR_6) {

    if ((VAR_6->event_state_mask >> 16) == VAR_4)
        return 1;
    switch (VAR_5) {
        case 131:
            return ((VAR_6->event_state_mask >> 16) & VAR_0);
        case 130:
            return ((VAR_6->event_state_mask >> 16) & VAR_1);
        case 129:
            return ((VAR_6->event_state_mask >> 16) & VAR_2);
        case 128:
            return ((VAR_6->event_state_mask >> 16) & VAR_3);
        default:
            FUNC_0("BUG: xkb_current_group (= %d) outside of [XCB_XKB_GROUP_1..XCB_XKB_GROUP_4]\n", VAR_5);
            return 0;
    }
}
