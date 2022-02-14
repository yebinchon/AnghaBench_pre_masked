
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {TYPE_1__ rect; } ;
struct TYPE_7__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ Rect ;
typedef TYPE_3__ Con ;



void FUNC_0(Con *VAR_0, Rect VAR_1) {
    VAR_0->rect.x = VAR_1.x + (VAR_1.width / 2) - (VAR_0->rect.width / 2);
    VAR_0->rect.y = VAR_1.y + (VAR_1.height / 2) - (VAR_0->rect.height / 2);
}
