
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data32; } ;
struct TYPE_5__ {int format; TYPE_1__ data; int type; int window; int response_type; } ;
typedef TYPE_2__ xcb_client_message_event_t ;
typedef int uint8_t ;
struct TYPE_6__ {int atom; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int,char*) ;

__attribute__((used)) static void FUNC_1(void) {
    uint8_t VAR_8[32] = {0};
    xcb_client_message_event_t *VAR_9 = (xcb_client_message_event_t *)VAR_8;

    VAR_9->response_type = VAR_1;
    VAR_9->window = VAR_7;
    VAR_9->type = VAR_3[VAR_0];
    VAR_9->format = 32;
    VAR_9->data.data32[0] = VAR_2;
    VAR_9->data.data32[1] = VAR_5->atom;
    VAR_9->data.data32[2] = VAR_4;

    FUNC_0(VAR_6,
                   0,
                   VAR_7,
                   0xFFFFFF,
                   (char *)VAR_8);
}
