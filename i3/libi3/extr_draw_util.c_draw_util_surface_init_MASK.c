
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_void_cookie_t ;
typedef int xcb_visualtype_t ;
struct TYPE_5__ {int error_code; } ;
typedef TYPE_1__ xcb_generic_error_t ;
typedef int xcb_drawable_t ;
typedef int xcb_connection_t ;
struct TYPE_6__ {int width; int height; int surface; int cr; int * visual_type; int id; int gc; } ;
typedef TYPE_2__ surface_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int,int) ;
 int * VAR_0 ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int ) ;

void FUNC_6(xcb_connection_t *VAR_1, surface_t *VAR_2, xcb_drawable_t VAR_3,
                            xcb_visualtype_t *VAR_4, int VAR_5, int VAR_6) {
    VAR_2->id = VAR_3;
    VAR_2->visual_type = ((VAR_4 == ((void*)0)) ? VAR_0 : VAR_4);
    VAR_2->width = VAR_5;
    VAR_2->height = VAR_6;

    VAR_2->gc = FUNC_4(VAR_1);
    xcb_void_cookie_t VAR_7 = FUNC_3(VAR_1, VAR_2->gc, VAR_2->id, 0, ((void*)0));

    xcb_generic_error_t *VAR_8 = FUNC_5(VAR_1, VAR_7);
    if (VAR_8 != ((void*)0)) {
        FUNC_0("Could not create graphical context. Error code: %d. Please report this bug.\n", VAR_8->error_code);
    }

    VAR_2->surface = FUNC_2(VAR_1, VAR_2->id, VAR_2->visual_type, VAR_5, VAR_6);
    VAR_2->cr = FUNC_1(VAR_2->surface);
}
