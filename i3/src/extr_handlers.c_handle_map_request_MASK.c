
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int window; int sequence; } ;
typedef TYPE_1__ xcb_map_request_event_t ;
typedef int xcb_get_window_attributes_cookie_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(xcb_map_request_event_t *VAR_1) {
    xcb_get_window_attributes_cookie_t VAR_2;

    VAR_2 = FUNC_3(VAR_0, VAR_1->window);

    FUNC_0("window = 0x%08x, serial is %d.\n", VAR_1->window, VAR_1->sequence);
    FUNC_1(VAR_1->sequence, -1);

    FUNC_2(VAR_1->window, VAR_2, 0);
}
