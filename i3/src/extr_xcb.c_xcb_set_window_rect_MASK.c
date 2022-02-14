
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_5__ {int sequence; } ;
typedef TYPE_1__ xcb_void_cookie_t ;
typedef int xcb_connection_t ;
struct TYPE_6__ {int x; } ;
typedef TYPE_2__ Rect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__ FUNC_1 (int *,int ,int,int *) ;

void FUNC_2(xcb_connection_t *VAR_4, xcb_window_t VAR_5, Rect VAR_6) {
    xcb_void_cookie_t VAR_7;
    VAR_7 = FUNC_1(VAR_4, VAR_5,
                                  VAR_2 |
                                      VAR_3 |
                                      VAR_1 |
                                      VAR_0,
                                  &(VAR_6.x));

    FUNC_0(VAR_7.sequence, -1);
}
