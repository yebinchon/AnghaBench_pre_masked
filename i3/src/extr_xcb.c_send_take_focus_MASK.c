
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_timestamp_t ;
struct TYPE_3__ {int * data32; } ;
struct TYPE_4__ {int format; TYPE_1__ data; int type; int window; int response_type; } ;
typedef TYPE_2__ xcb_client_message_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,int ,int ,char*) ;

void FUNC_4(xcb_window_t VAR_5, xcb_timestamp_t VAR_6) {



    void *VAR_7 = FUNC_2(32, 1);
    xcb_client_message_event_t *VAR_8 = VAR_7;

    VAR_8->response_type = VAR_2;
    VAR_8->window = VAR_5;
    VAR_8->type = VAR_0;
    VAR_8->format = 32;
    VAR_8->data.data32[0] = VAR_1;
    VAR_8->data.data32[1] = VAR_6;

    FUNC_0("Sending WM_TAKE_FOCUS to the client\n");
    FUNC_3(VAR_4, 0, VAR_5, VAR_3, (char *)VAR_8);
    FUNC_1(VAR_7);
}
