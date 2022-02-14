
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int min_width; int base_width; int min_height; int base_height; int max_width; int max_height; double min_aspect_ratio; double max_aspect_ratio; int height_increment; int width_increment; } ;
typedef TYPE_2__ i3Window ;
struct TYPE_17__ {int floating_minimum_height; int floating_minimum_width; int floating_maximum_height; int floating_maximum_width; } ;
struct TYPE_13__ {int width; int height; } ;
struct TYPE_16__ {int border_width; scalar_t__ fullscreen_mode; TYPE_1__ rect; TYPE_2__* window; } ;
struct TYPE_15__ {int width; int height; } ;
typedef TYPE_3__ Rect ;
typedef TYPE_4__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 TYPE_3__ FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (TYPE_4__*) ;
 TYPE_7__ VAR_2 ;
 void* FUNC_3 (scalar_t__,int const) ;
 void* FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 () ;
 double FUNC_6 (double) ;
 TYPE_3__ FUNC_7 () ;

void FUNC_8(Con *VAR_3, bool VAR_4) {

    const int VAR_5 = 50;
    const int VAR_6 = 75;
    Rect VAR_7;
    Con *VAR_8 = FUNC_2(VAR_3);

    Rect VAR_9 = FUNC_1(VAR_8);


    VAR_9.width = -VAR_9.width;
    VAR_9.width += 2 * VAR_8->border_width;
    VAR_9.height = -VAR_9.height;
    VAR_9.height += 2 * VAR_8->border_width;
    if (FUNC_0(VAR_8) == VAR_0) {
        VAR_9.height += FUNC_5();
    }

    i3Window *VAR_10 = VAR_8->window;
    if (VAR_10 != ((void*)0)) {


        int VAR_11 = (VAR_10->min_width ? VAR_10->min_width : VAR_10->base_width);
        int VAR_12 = (VAR_10->min_height ? VAR_10->min_height : VAR_10->base_height);
        int VAR_13 = (VAR_10->base_width ? VAR_10->base_width : VAR_10->min_width);
        int VAR_14 = (VAR_10->base_height ? VAR_10->base_height : VAR_10->min_height);

        if (VAR_11) {
            VAR_3->rect.width -= VAR_9.width;
            VAR_3->rect.width = FUNC_3(VAR_3->rect.width, VAR_11);
            VAR_3->rect.width += VAR_9.width;
        }

        if (VAR_12) {
            VAR_3->rect.height -= VAR_9.height;
            VAR_3->rect.height = FUNC_3(VAR_3->rect.height, VAR_12);
            VAR_3->rect.height += VAR_9.height;
        }

        if (VAR_10->max_width) {
            VAR_3->rect.width -= VAR_9.width;
            VAR_3->rect.width = FUNC_4(VAR_3->rect.width, VAR_10->max_width);
            VAR_3->rect.width += VAR_9.width;
        }

        if (VAR_10->max_height) {
            VAR_3->rect.height -= VAR_9.height;
            VAR_3->rect.height = FUNC_4(VAR_3->rect.height, VAR_10->max_height);
            VAR_3->rect.height += VAR_9.height;
        }
        const double VAR_15 = VAR_10->min_aspect_ratio;
        const double VAR_16 = VAR_10->max_aspect_ratio;
        if (VAR_3->fullscreen_mode == VAR_1 && (VAR_15 > 0 || VAR_16 > 0)) {




            double VAR_17 = VAR_3->rect.width - VAR_10->base_width - VAR_9.width;
            double VAR_18 = VAR_3->rect.height - VAR_10->base_height - VAR_9.height;
            const double VAR_19 = (double)VAR_17 / (double)VAR_18;
            double VAR_20 = -1;
            if (VAR_15 > 0 && VAR_19 < VAR_15) {
                VAR_20 = VAR_15;
            } else if (VAR_16 > 0 && VAR_19 > VAR_16) {
                VAR_20 = VAR_16;
            }
            if (VAR_20 > 0) {
                if (VAR_4) {
                    VAR_17 = FUNC_6(VAR_18 * VAR_20);
                    VAR_18 = FUNC_6(VAR_17 / VAR_20);
                } else {
                    VAR_18 = FUNC_6(VAR_17 / VAR_20);
                    VAR_17 = FUNC_6(VAR_18 * VAR_20);
                }
                VAR_3->rect.width = VAR_17 + VAR_10->base_width + VAR_9.width;
                VAR_3->rect.height = VAR_18 + VAR_10->base_height + VAR_9.height;
            }
        }

        if (VAR_10->height_increment &&
            VAR_3->rect.height >= VAR_14 + VAR_9.height) {
            VAR_3->rect.height -= VAR_14 + VAR_9.height;
            VAR_3->rect.height -= VAR_3->rect.height % VAR_10->height_increment;
            VAR_3->rect.height += VAR_14 + VAR_9.height;
        }

        if (VAR_10->width_increment &&
            VAR_3->rect.width >= VAR_13 + VAR_9.width) {
            VAR_3->rect.width -= VAR_13 + VAR_9.width;
            VAR_3->rect.width -= VAR_3->rect.width % VAR_10->width_increment;
            VAR_3->rect.width += VAR_13 + VAR_9.width;
        }
    }



    if (VAR_2.floating_minimum_height != -1) {
        VAR_3->rect.height -= VAR_9.height;
        if (VAR_2.floating_minimum_height == 0) {
            VAR_3->rect.height = FUNC_3(VAR_3->rect.height, VAR_5);
        } else {
            VAR_3->rect.height = FUNC_3(VAR_3->rect.height, VAR_2.floating_minimum_height);
        }
        VAR_3->rect.height += VAR_9.height;
    }

    if (VAR_2.floating_minimum_width != -1) {
        VAR_3->rect.width -= VAR_9.width;
        if (VAR_2.floating_minimum_width == 0) {
            VAR_3->rect.width = FUNC_3(VAR_3->rect.width, VAR_6);
        } else {
            VAR_3->rect.width = FUNC_3(VAR_3->rect.width, VAR_2.floating_minimum_width);
        }
        VAR_3->rect.width += VAR_9.width;
    }




    VAR_7 = FUNC_7();
    if (VAR_2.floating_maximum_height != -1) {
        VAR_3->rect.height -= VAR_9.height;
        if (VAR_2.floating_maximum_height == 0) {
            VAR_3->rect.height = FUNC_4(VAR_3->rect.height, VAR_7.height);
        } else {
            VAR_3->rect.height = FUNC_4(VAR_3->rect.height, VAR_2.floating_maximum_height);
        }
        VAR_3->rect.height += VAR_9.height;
    }

    if (VAR_2.floating_maximum_width != -1) {
        VAR_3->rect.width -= VAR_9.width;
        if (VAR_2.floating_maximum_width == 0) {
            VAR_3->rect.width = FUNC_4(VAR_3->rect.width, VAR_7.width);
        } else {
            VAR_3->rect.width = FUNC_4(VAR_3->rect.width, VAR_2.floating_maximum_width);
        }
        VAR_3->rect.width += VAR_9.width;
    }
}
