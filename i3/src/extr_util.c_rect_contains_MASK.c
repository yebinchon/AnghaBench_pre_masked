
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ height; } ;
typedef TYPE_1__ Rect ;



bool FUNC_0(Rect VAR_0, uint32_t VAR_1, uint32_t VAR_2) {
    return (VAR_1 >= VAR_0.x &&
            VAR_1 <= (VAR_0.x + VAR_0.width) &&
            VAR_2 >= VAR_0.y &&
            VAR_2 <= (VAR_0.y + VAR_0.height));
}
