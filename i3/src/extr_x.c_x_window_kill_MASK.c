
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_3__ {int * data32; } ;
struct TYPE_4__ {int format; TYPE_1__ data; int type; int window; int response_type; } ;
typedef TYPE_2__ xcb_client_message_event_t ;
typedef scalar_t__ kill_window_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int,int ,int ,char*) ;

void FUNC_8(xcb_window_t VAR_7, kill_window_t VAR_8) {

    if (!FUNC_3(VAR_7, VAR_0)) {
        if (VAR_8 == VAR_2) {
            FUNC_0("Killing specific window 0x%08x\n", VAR_7);
            FUNC_4(VAR_6, VAR_7);
        } else {
            FUNC_0("Killing the X11 client which owns window 0x%08x\n", VAR_7);
            FUNC_6(VAR_6, VAR_7);
        }
        return;
    }




    void *VAR_9 = FUNC_2(32, 1);
    xcb_client_message_event_t *VAR_10 = VAR_9;

    VAR_10->response_type = VAR_3;
    VAR_10->window = VAR_7;
    VAR_10->type = VAR_1;
    VAR_10->format = 32;
    VAR_10->data.data32[0] = VAR_0;
    VAR_10->data.data32[1] = VAR_4;

    FUNC_0("Sending WM_DELETE to the client\n");
    FUNC_7(VAR_6, 0, VAR_7, VAR_5, (char *)VAR_10);
    FUNC_5(VAR_6);
    FUNC_1(VAR_9);
}
