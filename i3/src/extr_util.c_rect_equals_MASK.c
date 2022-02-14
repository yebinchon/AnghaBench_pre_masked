
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_1__ Rect ;



bool FUNC_0(Rect VAR_0, Rect VAR_1) {
    return VAR_0.x == VAR_1.x && VAR_0.y == VAR_1.y && VAR_0.width == VAR_1.width && VAR_0.height == VAR_1.height;
}
