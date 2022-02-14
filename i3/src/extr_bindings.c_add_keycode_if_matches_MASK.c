
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xkb_layout_index_t ;
typedef scalar_t__ xkb_keysym_t ;
typedef int xkb_keycode_t ;
struct xkb_state {int dummy; } ;
struct xkb_keymap {int dummy; } ;
struct resolve {scalar_t__ keysym; TYPE_1__* bind; struct xkb_state* xkb_state_no_shift; struct xkb_state* xkb_state_numlock_no_shift; struct xkb_state* xkb_state; struct xkb_state* xkb_state_numlock; } ;
struct TYPE_2__ {int event_state_mask; } ;
typedef TYPE_1__ Binding ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct xkb_state*,int ) ;
 int FUNC_3 (struct xkb_state*,int ,scalar_t__ const) ;
 scalar_t__ FUNC_4 (struct xkb_state*,int ) ;

__attribute__((used)) static void FUNC_5(struct xkb_keymap *VAR_5, xkb_keycode_t VAR_6, void *VAR_7) {
    const struct resolve *VAR_8 = VAR_7;
    struct xkb_state *VAR_9 = VAR_8->xkb_state_numlock;
    xkb_keysym_t VAR_10 = FUNC_4(VAR_8->xkb_state, VAR_6);
    if (VAR_10 != VAR_8->keysym) {


        const xkb_layout_index_t VAR_11 = FUNC_2(VAR_8->xkb_state, VAR_6);
        if (VAR_11 == VAR_3)
            return;
        if (FUNC_3(VAR_8->xkb_state, VAR_6, VAR_11) > 1)
            return;


        if (VAR_10 >= VAR_2 && VAR_10 <= VAR_1)
            return;
        VAR_9 = VAR_8->xkb_state_numlock_no_shift;
        VAR_10 = FUNC_4(VAR_8->xkb_state_no_shift, VAR_6);
        if (VAR_10 != VAR_8->keysym)
            return;
    }
    Binding *VAR_12 = VAR_8->bind;

    FUNC_0(VAR_6, VAR_12->event_state_mask);


    FUNC_0(VAR_6, VAR_12->event_state_mask | VAR_0);



    if ((VAR_12->event_state_mask & VAR_4) != VAR_4) {




        xkb_keysym_t VAR_13 = FUNC_4(VAR_9, VAR_6);
        if (VAR_13 == VAR_8->keysym) {

            FUNC_0(VAR_6, VAR_12->event_state_mask | VAR_4);


            FUNC_0(VAR_6, VAR_12->event_state_mask | VAR_4 | VAR_0);
        } else {
            FUNC_1("Skipping automatic numlock fallback, key %d resolves to 0x%x with numlock\n",
                 VAR_6, VAR_13);
        }
    }
}
