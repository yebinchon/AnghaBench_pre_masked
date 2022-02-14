
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int width; } ;
struct TYPE_14__ {int y; TYPE_1__ rect; int x; } ;
typedef TYPE_5__ render_params ;
struct TYPE_13__ {scalar_t__ height; int width; int y; int x; } ;
struct TYPE_12__ {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_11__ {scalar_t__ height; } ;
struct TYPE_15__ {scalar_t__ layout; TYPE_4__ rect; TYPE_3__ deco_rect; TYPE_2__ geometry; } ;
typedef TYPE_6__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(Con *VAR_1, Con *VAR_2, render_params *VAR_3) {
    FUNC_0(VAR_1->layout == VAR_0);

    VAR_2->rect.x = VAR_3->x;
    VAR_2->rect.y = VAR_3->y;
    VAR_2->rect.width = VAR_3->rect.width;
    VAR_2->rect.height = VAR_2->geometry.height;

    VAR_2->deco_rect.x = 0;
    VAR_2->deco_rect.y = 0;
    VAR_2->deco_rect.width = 0;
    VAR_2->deco_rect.height = 0;
    VAR_3->y += VAR_2->rect.height;
}
