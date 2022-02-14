
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ h; int y; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_9__ {int flags; } ;
struct TYPE_11__ {int cvarFlags; scalar_t__ type; TYPE_1__ window; int mouseEnter; int mouseExitText; int mouseEnterText; TYPE_2__ textRect; } ;
typedef TYPE_3__ itemDef_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,float,float) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,float,float) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_4(itemDef_t *VAR_7, float VAR_8, float VAR_9) {
 rectDef_t VAR_10;
 if (VAR_7) {
  VAR_10 = VAR_7->textRect;
  VAR_10.y -= VAR_10.h;



  if (VAR_7->cvarFlags & (VAR_1 | VAR_0) && !FUNC_0(VAR_7, VAR_1)) {
   return;
  }

  if (VAR_7->cvarFlags & (VAR_3 | VAR_2) && !FUNC_0(VAR_7, VAR_3)) {
   return;
  }

  if (FUNC_3(&VAR_10, VAR_8, VAR_9)) {
   if (!(VAR_7->window.flags & VAR_6)) {
    FUNC_2(VAR_7, VAR_7->mouseEnterText);
    VAR_7->window.flags |= VAR_6;
   }
   if (!(VAR_7->window.flags & VAR_5)) {
    FUNC_2(VAR_7, VAR_7->mouseEnter);
    VAR_7->window.flags |= VAR_5;
   }

  } else {

   if (VAR_7->window.flags & VAR_6) {

    FUNC_2(VAR_7, VAR_7->mouseExitText);
    VAR_7->window.flags &= ~VAR_6;
   }
   if (!(VAR_7->window.flags & VAR_5)) {
    FUNC_2(VAR_7, VAR_7->mouseEnter);
    VAR_7->window.flags |= VAR_5;
   }

   if (VAR_7->type == VAR_4) {
    FUNC_1(VAR_7, VAR_8, VAR_9);
   }
  }
 }
}
