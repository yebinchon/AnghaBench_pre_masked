
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_12__ {int cursorItem; int itemCount; TYPE_4__** items; } ;
typedef TYPE_3__ menuDef_t ;
struct TYPE_10__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_11__ {TYPE_1__ rect; } ;
struct TYPE_13__ {TYPE_2__ window; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_14__ {int cursory; int cursorx; } ;


 TYPE_9__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

itemDef_t *FUNC_2(menuDef_t *VAR_3) {

  qboolean VAR_4 = VAR_1;
 int VAR_5 = VAR_3->cursorItem;


  if (VAR_3->cursorItem == -1) {
    VAR_3->cursorItem = 0;
    VAR_4 = VAR_2;
  }

  while (VAR_3->cursorItem < VAR_3->itemCount) {

    VAR_3->cursorItem++;
    if (VAR_3->cursorItem >= VAR_3->itemCount && !VAR_4) {
      VAR_4 = VAR_2;
      VAR_3->cursorItem = 0;
    }
  if (FUNC_0(VAR_3->items[VAR_3->cursorItem], VAR_0->cursorx, VAR_0->cursory)) {
   FUNC_1(VAR_3, VAR_3->items[VAR_3->cursorItem]->window.rect.x + 1, VAR_3->items[VAR_3->cursorItem]->window.rect.y + 1);
      return VAR_3->items[VAR_3->cursorItem];
    }

  }

 VAR_3->cursorItem = VAR_5;
 return ((void*)0);
}
