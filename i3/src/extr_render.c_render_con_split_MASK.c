
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_13__ {scalar_t__ deco_height; scalar_t__ y; scalar_t__* sizes; TYPE_1__ rect; scalar_t__ x; } ;
typedef TYPE_4__ render_params ;
struct TYPE_12__ {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_11__ {scalar_t__ width; scalar_t__ height; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_14__ {scalar_t__ layout; scalar_t__ border_style; TYPE_3__ deco_rect; TYPE_2__ rect; } ;
typedef TYPE_5__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_2(Con *VAR_3, Con *VAR_4, render_params *VAR_5, int VAR_6) {
    FUNC_0(VAR_3->layout == VAR_1 || VAR_3->layout == VAR_2);

    if (VAR_3->layout == VAR_1) {
        VAR_4->rect.x = VAR_5->x;
        VAR_4->rect.y = VAR_5->y;
        VAR_4->rect.width = VAR_5->sizes[VAR_6];
        VAR_4->rect.height = VAR_5->rect.height;
        VAR_5->x += VAR_4->rect.width;
    } else {
        VAR_4->rect.x = VAR_5->x;
        VAR_4->rect.y = VAR_5->y;
        VAR_4->rect.width = VAR_5->rect.width;
        VAR_4->rect.height = VAR_5->sizes[VAR_6];
        VAR_5->y += VAR_4->rect.height;
    }


    if (FUNC_1(VAR_4)) {
        if (VAR_4->border_style == VAR_0) {

            VAR_4->deco_rect.x = VAR_4->rect.x - VAR_3->rect.x;
            VAR_4->deco_rect.y = VAR_4->rect.y - VAR_3->rect.y;

            VAR_4->rect.y += VAR_5->deco_height;
            VAR_4->rect.height -= VAR_5->deco_height;

            VAR_4->deco_rect.width = VAR_4->rect.width;
            VAR_4->deco_rect.height = VAR_5->deco_height;
        } else {
            VAR_4->deco_rect.x = 0;
            VAR_4->deco_rect.y = 0;
            VAR_4->deco_rect.width = 0;
            VAR_4->deco_rect.height = 0;
        }
    }
}
