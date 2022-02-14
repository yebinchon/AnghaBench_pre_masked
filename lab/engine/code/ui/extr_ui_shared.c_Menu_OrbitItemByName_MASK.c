
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int menuDef_t ;
struct TYPE_8__ {float x; float y; } ;
struct TYPE_7__ {float x; float y; } ;
struct TYPE_9__ {int flags; int offsetTime; TYPE_2__ rectClient; TYPE_1__ rectEffects; } ;
struct TYPE_10__ {TYPE_3__ window; } ;
typedef TYPE_4__ itemDef_t ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(menuDef_t *VAR_2, const char *VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7, int VAR_8) {
  itemDef_t *VAR_9;
  int VAR_10;
  int VAR_11 = FUNC_2(VAR_2, VAR_3);
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
    VAR_9 = FUNC_1(VAR_2, VAR_10, VAR_3);
    if (VAR_9 != ((void*)0)) {
      VAR_9->window.flags |= (VAR_0 | VAR_1);
      VAR_9->window.offsetTime = VAR_8;
      VAR_9->window.rectEffects.x = VAR_6;
      VAR_9->window.rectEffects.y = VAR_7;
      VAR_9->window.rectClient.x = VAR_4;
      VAR_9->window.rectClient.y = VAR_5;
      FUNC_0(VAR_9);
    }
  }
}
