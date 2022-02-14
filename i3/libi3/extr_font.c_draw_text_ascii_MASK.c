
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_gcontext_t ;
typedef int xcb_drawable_t ;
typedef int i3String ;
struct TYPE_6__ {TYPE_1__* info; } ;
struct TYPE_7__ {TYPE_2__ xcb; } ;
struct TYPE_8__ {int type; TYPE_3__ specific; } ;
struct TYPE_5__ {int font_ascent; } ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int *,int,int,int) ;
 int FUNC_2 (char const*,size_t,int ,int ,int,int,int,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (int ,size_t,int ,int ,int,int,char const*) ;

void FUNC_7(const char *VAR_3, xcb_drawable_t VAR_4,
                     xcb_gcontext_t VAR_5, int VAR_6, int VAR_7, int VAR_8) {
    FUNC_0(VAR_2 != ((void*)0));

    switch (VAR_2->type) {
        case 130:

            return;
        case 128: {
            size_t VAR_9 = FUNC_5(VAR_3);
            if (VAR_9 > 255) {

                i3String *VAR_10 = FUNC_4(VAR_3);
                FUNC_1(VAR_10, VAR_4, VAR_5, ((void*)0), VAR_6, VAR_7, VAR_8);
                FUNC_3(VAR_10);
            } else {

                int VAR_11 = VAR_7 + VAR_2->specific.xcb.info->font_ascent;

                FUNC_6(VAR_0, VAR_9, VAR_4, VAR_5, VAR_6, VAR_11, VAR_3);
            }
            break;
        }
        case 129:

            FUNC_2(VAR_3, FUNC_5(VAR_3),
                            VAR_4, VAR_1, VAR_6, VAR_7, VAR_8, 0);
            return;
    }
}
