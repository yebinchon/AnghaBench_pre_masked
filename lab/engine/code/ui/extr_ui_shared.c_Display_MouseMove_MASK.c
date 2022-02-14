
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {int x; int y; } ;
struct TYPE_9__ {int flags; TYPE_1__ rect; } ;
struct TYPE_10__ {TYPE_2__ window; } ;
typedef TYPE_3__ menuDef_t ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_3(void *VAR_4, int VAR_5, int VAR_6) {
 int VAR_7;
 menuDef_t *VAR_8 = VAR_4;

 if (VAR_8 == ((void*)0)) {
    VAR_8 = FUNC_0();
  if (VAR_8) {
   if (VAR_8->window.flags & VAR_1) {
    FUNC_1(VAR_8, VAR_5, VAR_6);
    return VAR_3;
   }
  }
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   FUNC_1(&VAR_0[VAR_7], VAR_5, VAR_6);
  }
 } else {
  VAR_8->window.rect.x += VAR_5;
  VAR_8->window.rect.y += VAR_6;
  FUNC_2(VAR_8);
 }
  return VAR_3;

}
