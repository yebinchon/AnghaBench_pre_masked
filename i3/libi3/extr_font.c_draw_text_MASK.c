
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xcb_visualtype_t ;
typedef int xcb_gcontext_t ;
typedef int xcb_drawable_t ;
typedef int i3String ;
struct TYPE_2__ {int type; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *,int,int,int,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_8(i3String *VAR_2, xcb_drawable_t VAR_3, xcb_gcontext_t VAR_4,
               xcb_visualtype_t *VAR_5, int VAR_6, int VAR_7, int VAR_8) {
    FUNC_0(VAR_1 != ((void*)0));
    if (VAR_5 == ((void*)0)) {
        VAR_5 = VAR_0;
    }

    switch (VAR_1->type) {
        case 130:

            return;
        case 128:
            FUNC_2(FUNC_3(VAR_2), FUNC_6(VAR_2),
                          VAR_3, VAR_4, VAR_6, VAR_7);
            break;
        case 129:

            FUNC_1(FUNC_4(VAR_2), FUNC_5(VAR_2),
                            VAR_3, VAR_5, VAR_6, VAR_7, VAR_8, FUNC_7(VAR_2));
            return;
    }
}
