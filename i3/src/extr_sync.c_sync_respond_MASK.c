
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* xcb_window_t ;
struct TYPE_3__ {void** data32; } ;
struct TYPE_4__ {int format; TYPE_1__ data; int type; void* window; int response_type; } ;
typedef TYPE_2__ xcb_client_message_event_t ;
typedef void* uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,void*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,void*,int ,char*) ;

void FUNC_5(xcb_window_t VAR_4, uint32_t VAR_5) {
    FUNC_0("[i3 sync protocol] Sending random value %d back to X11 window 0x%08x\n", VAR_5, VAR_4);

    void *VAR_6 = FUNC_2(32, 1);
    xcb_client_message_event_t *VAR_7 = VAR_6;

    VAR_7->response_type = VAR_1;
    VAR_7->window = VAR_4;
    VAR_7->type = VAR_0;
    VAR_7->format = 32;
    VAR_7->data.data32[0] = VAR_4;
    VAR_7->data.data32[1] = VAR_5;

    FUNC_4(VAR_3, 0, VAR_4, VAR_2, (char *)VAR_7);
    FUNC_3(VAR_3);
    FUNC_1(VAR_6);
}
