
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_gcontext_t ;
typedef int uint32_t ;
struct TYPE_9__ {int colorpixel; int alpha; int blue; int green; int red; } ;
typedef TYPE_3__ color_t ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_1__ xcb; } ;
struct TYPE_10__ {int type; TYPE_2__ specific; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* VAR_8 ;
 int FUNC_1 (int ,int ,int,int*) ;

void FUNC_2(xcb_gcontext_t VAR_9, color_t VAR_10, color_t VAR_11) {
    FUNC_0(VAR_8 != ((void*)0));

    switch (VAR_8->type) {
        case 130:

            break;
        case 128: {

            uint32_t VAR_12 = VAR_2 | VAR_0 | VAR_1;
            uint32_t VAR_13[] = {VAR_10.colorpixel, VAR_11.colorpixel, VAR_8->specific.xcb.id};
            FUNC_1(VAR_3, VAR_9, VAR_12, VAR_13);
            break;
        }
        case 129:

            VAR_7 = VAR_10.red;
            VAR_6 = VAR_10.green;
            VAR_5 = VAR_10.blue;
            VAR_4 = VAR_10.alpha;
            break;
    }
}
