
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ h; scalar_t__ w; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ rectDef_t ;
typedef int menuDef_t ;
struct TYPE_10__ {float x; float y; float w; float h; } ;
struct TYPE_11__ {int flags; int offsetTime; TYPE_1__ rectEffects2; int rectEffects; int rectClient; } ;
struct TYPE_13__ {TYPE_2__ window; } ;
typedef TYPE_4__ itemDef_t ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 float FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,TYPE_3__*,int) ;

void FUNC_5(menuDef_t *VAR_2, const char *VAR_3, rectDef_t VAR_4, rectDef_t VAR_5, int VAR_6, float VAR_7) {
  itemDef_t *VAR_8;
  int VAR_9;
  int VAR_10 = FUNC_2(VAR_2, VAR_3);
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
    VAR_8 = FUNC_1(VAR_2, VAR_9, VAR_3);
    if (VAR_8 != ((void*)0)) {
      VAR_8->window.flags |= (VAR_0 | VAR_1);
      VAR_8->window.offsetTime = VAR_6;
   FUNC_4(&VAR_8->window.rectClient, &VAR_4, sizeof(rectDef_t));
   FUNC_4(&VAR_8->window.rectEffects, &VAR_5, sizeof(rectDef_t));
   VAR_8->window.rectEffects2.x = FUNC_3(VAR_5.x - VAR_4.x) / VAR_7;
   VAR_8->window.rectEffects2.y = FUNC_3(VAR_5.y - VAR_4.y) / VAR_7;
   VAR_8->window.rectEffects2.w = FUNC_3(VAR_5.w - VAR_4.w) / VAR_7;
   VAR_8->window.rectEffects2.h = FUNC_3(VAR_5.h - VAR_4.h) / VAR_7;
      FUNC_0(VAR_8);
    }
  }
}
