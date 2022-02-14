
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ window; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_8__ {int (* Pause ) (int ) ;int cursory; int cursorx; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int * VAR_1 ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;

void FUNC_8(menuDef_t *VAR_7, int VAR_8, qboolean VAR_9) {
 if (VAR_7) {
  int VAR_10;



  if (VAR_9 && VAR_7->window.flags & VAR_3) {
   FUNC_5(VAR_7);
   VAR_7->window.flags &= ~(VAR_2 | VAR_4);
  }

  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   if (FUNC_4(&VAR_1[VAR_10], VAR_0->cursorx, VAR_0->cursory)) {
    FUNC_5(VAR_7);
    VAR_7->window.flags &= ~(VAR_2 | VAR_4);
    FUNC_6(&VAR_1[VAR_10]);
    FUNC_3(&VAR_1[VAR_10], VAR_0->cursorx, VAR_0->cursory);
    FUNC_2(&VAR_1[VAR_10], VAR_8, VAR_9);
   }
  }

  if (FUNC_1() == 0) {
   if (VAR_0->Pause) {
    VAR_0->Pause(VAR_6);
   }
  }
  FUNC_0();
 }
}
