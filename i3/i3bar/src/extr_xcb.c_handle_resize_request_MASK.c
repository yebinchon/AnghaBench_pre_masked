
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int window; } ;
typedef TYPE_1__ xcb_resize_request_event_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(xcb_resize_request_event_t *VAR_0) {
    FUNC_0("ResizeRequest for window = %08x\n", VAR_0->window);
    FUNC_1(VAR_0->window);
}
