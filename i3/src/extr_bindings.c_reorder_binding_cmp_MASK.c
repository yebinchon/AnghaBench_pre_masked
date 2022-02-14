
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ event_state_mask; } ;
typedef TYPE_1__ Binding ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
    Binding *VAR_2 = *((Binding **)VAR_0);
    Binding *VAR_3 = *((Binding **)VAR_1);
    if (VAR_2->event_state_mask < VAR_3->event_state_mask) {
        return 1;
    } else if (VAR_2->event_state_mask == VAR_3->event_state_mask) {
        return 0;
    } else {
        return -1;
    }
}
