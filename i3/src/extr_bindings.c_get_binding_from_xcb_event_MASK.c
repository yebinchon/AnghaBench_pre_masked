
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int detail; } ;
typedef TYPE_1__ xcb_key_press_event_t ;
struct TYPE_5__ {scalar_t__ response_type; } ;
typedef TYPE_2__ xcb_generic_event_t ;
typedef int uint16_t ;
typedef int input_type_t ;
typedef int i3_event_state_mask_t ;
typedef int Binding ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int const VAR_9 ;




 int * FUNC_1 (int,int const,int const,int const) ;

Binding *FUNC_2(xcb_generic_event_t *VAR_10) {
    const bool VAR_11 = (VAR_10->response_type == VAR_8 ||
                             VAR_10->response_type == VAR_7);

    const input_type_t VAR_12 = ((VAR_10->response_type == VAR_7 ||
                                      VAR_10->response_type == VAR_6)
                                         ? VAR_1
                                         : VAR_0);

    const uint16_t VAR_13 = ((xcb_key_press_event_t *)VAR_10)->state;
    const uint16_t VAR_14 = ((xcb_key_press_event_t *)VAR_10)->detail;


    i3_event_state_mask_t VAR_15 = VAR_13 & ~VAR_9;
    FUNC_0("(removed capslock, state = 0x%x)\n", VAR_15);
    switch ((VAR_13 & 0x6000) >> 13) {
        case 131:
            VAR_15 |= (VAR_2 << 16);
            break;
        case 130:
            VAR_15 |= (VAR_3 << 16);
            break;
        case 129:
            VAR_15 |= (VAR_4 << 16);
            break;
        case 128:
            VAR_15 |= (VAR_5 << 16);
            break;
    }
    VAR_15 &= ~0x6000;
    FUNC_0("(transformed keyboard group, state = 0x%x)\n", VAR_15);
    return FUNC_1(VAR_15, VAR_11, VAR_14, VAR_12);
}
