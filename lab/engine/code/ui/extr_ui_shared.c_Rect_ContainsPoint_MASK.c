
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float w; float y; float h; } ;
typedef TYPE_1__ rectDef_t ;
typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_0(rectDef_t *VAR_2, float VAR_3, float VAR_4) {
  if (VAR_2) {
    if (VAR_3 > VAR_2->x && VAR_3 < VAR_2->x + VAR_2->w && VAR_4 > VAR_2->y && VAR_4 < VAR_2->y + VAR_2->h) {
      return VAR_1;
    }
  }
  return VAR_0;
}
