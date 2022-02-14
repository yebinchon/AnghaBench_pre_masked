
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int y; int x; } ;
typedef TYPE_1__ rectDef_t ;
typedef int qboolean ;


 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1(int VAR_2, rectDef_t *VAR_3) {
 if (FUNC_0(VAR_2, &VAR_3->x)) {
  if (FUNC_0(VAR_2, &VAR_3->y)) {
   if (FUNC_0(VAR_2, &VAR_3->w)) {
    if (FUNC_0(VAR_2, &VAR_3->h)) {
     return VAR_1;
    }
   }
  }
 }
 return VAR_0;
}
