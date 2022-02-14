
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_get_property_reply_t ;
typedef int xcb_get_property_cookie_t ;
struct Startup_Sequence {int dummy; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ i3Window ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Startup_Sequence*) ;
 struct Startup_Sequence* FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (int ,int,int ,int ,int ,int ,int) ;
 int * FUNC_3 (int ,int ,int *) ;

void FUNC_4(i3Window *VAR_3) {
    struct Startup_Sequence *VAR_4;
    xcb_get_property_cookie_t VAR_5;
    xcb_get_property_reply_t *VAR_6;

    VAR_5 = FUNC_2(VAR_2, 0, VAR_3->id, VAR_0,
                              VAR_1, 0, 512);
    VAR_6 = FUNC_3(VAR_2, VAR_5, ((void*)0));

    VAR_4 = FUNC_1(VAR_3, VAR_6, 1);
    if (VAR_4 != ((void*)0)) {
        FUNC_0(VAR_4);
    }
}
