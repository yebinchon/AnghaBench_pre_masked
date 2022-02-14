
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {scalar_t__ border; TYPE_1__ rect; scalar_t__ borderSize; } ;
typedef TYPE_2__ windowDef_t ;



void FUNC_0(float *VAR_0, float *VAR_1, windowDef_t *VAR_2) {
 if (VAR_2->border != 0) {
  *VAR_0 += VAR_2->borderSize;
  *VAR_1 += VAR_2->borderSize;
 }
 *VAR_0 += VAR_2->rect.x;
 *VAR_1 += VAR_2->rect.y;
}
