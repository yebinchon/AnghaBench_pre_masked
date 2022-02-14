
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xcb_keysym_t ;
struct TYPE_4__ {int detail; int state; } ;
typedef TYPE_1__ xcb_key_release_event_t ;
typedef int xcb_connection_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, xcb_connection_t *VAR_4, xcb_key_release_event_t *VAR_5) {
    FUNC_0("releasing %d, state raw = %d\n", VAR_5->detail, VAR_5->state);

    xcb_keysym_t VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_5->state);
    if (VAR_6 == VAR_0) {
        FUNC_0("Mode switch disabled\n");
        VAR_1 = 0;
    }

    return 1;
}
