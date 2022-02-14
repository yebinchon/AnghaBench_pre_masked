
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {float x; float y; void* h; void* w; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_12__ {scalar_t__ elementStyle; void* drawPadding; scalar_t__ cursorPos; float elementWidth; scalar_t__ startPos; scalar_t__ endPos; float elementHeight; } ;
typedef TYPE_4__ listBoxDef_t ;
struct TYPE_9__ {float x; float y; void* h; void* w; } ;
struct TYPE_10__ {int flags; TYPE_1__ rect; } ;
struct TYPE_13__ {TYPE_2__ window; scalar_t__ typeData; } ;
typedef TYPE_5__ itemDef_t ;


 int FUNC_0 (TYPE_5__*,float,float) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*,float,float) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_2(itemDef_t *VAR_8, float VAR_9, float VAR_10)
{
 rectDef_t VAR_11;
 listBoxDef_t *VAR_12 = (listBoxDef_t*)VAR_8->typeData;

 VAR_8->window.flags &= ~(VAR_3 | VAR_6 | VAR_7 | VAR_5 | VAR_4);
 VAR_8->window.flags |= FUNC_0(VAR_8, VAR_9, VAR_10);

 if (VAR_8->window.flags & VAR_2) {
  if (!(VAR_8->window.flags & (VAR_3 | VAR_6 | VAR_7 | VAR_5 | VAR_4))) {

   if (VAR_12->elementStyle == VAR_0) {
    VAR_11.x = VAR_8->window.rect.x;
    VAR_11.y = VAR_8->window.rect.y;
    VAR_11.h = VAR_8->window.rect.h - VAR_1;
    VAR_11.w = VAR_8->window.rect.w - VAR_12->drawPadding;
    if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
     VAR_12->cursorPos = (int)((VAR_9 - VAR_11.x) / VAR_12->elementWidth) + VAR_12->startPos;
     if (VAR_12->cursorPos >= VAR_12->endPos) {
      VAR_12->cursorPos = VAR_12->endPos;
     }
    }
   } else {

   }
  }
 } else if (!(VAR_8->window.flags & (VAR_3 | VAR_6 | VAR_7 | VAR_5 | VAR_4))) {
  VAR_11.x = VAR_8->window.rect.x;
  VAR_11.y = VAR_8->window.rect.y;
  VAR_11.w = VAR_8->window.rect.w - VAR_1;
  VAR_11.h = VAR_8->window.rect.h - VAR_12->drawPadding;
  if (FUNC_1(&VAR_11, VAR_9, VAR_10)) {
   VAR_12->cursorPos = (int)((VAR_10 - 2 - VAR_11.y) / VAR_12->elementHeight) + VAR_12->startPos;
   if (VAR_12->cursorPos > VAR_12->endPos) {
    VAR_12->cursorPos = VAR_12->endPos;
   }
  }
 }
}
