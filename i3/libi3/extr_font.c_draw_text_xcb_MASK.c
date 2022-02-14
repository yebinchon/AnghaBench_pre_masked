
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
typedef int xcb_char2b_t ;
struct TYPE_6__ {TYPE_1__* info; } ;
struct TYPE_7__ {TYPE_2__ xcb; } ;
struct TYPE_8__ {TYPE_3__ specific; } ;
struct TYPE_5__ {int font_ascent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (int ,int,int ,int ,int,int,int const*) ;

__attribute__((used)) static void FUNC_2(const xcb_char2b_t *VAR_2, size_t VAR_3, xcb_drawable_t VAR_4,
                          xcb_gcontext_t VAR_5, int VAR_6, int VAR_7) {

    int VAR_8 = VAR_7 + VAR_1->specific.xcb.info->font_ascent;



    int VAR_9 = 0;
    for (;;) {

        int VAR_10 = (VAR_3 > 255 ? 255 : VAR_3);
        const xcb_char2b_t *VAR_11 = VAR_2 + VAR_9;


        FUNC_1(VAR_0, VAR_10, VAR_4, VAR_5, VAR_6, VAR_8, VAR_11);


        VAR_9 += VAR_10;
        VAR_3 -= VAR_10;


        if (VAR_3 == 0)
            break;


        VAR_6 += FUNC_0(VAR_11, VAR_10);
    }
}
