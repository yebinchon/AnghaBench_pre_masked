
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int h; int w; int y; int x; } ;
typedef TYPE_1__ rectDef_t ;
typedef int qhandle_t ;
struct TYPE_7__ {int teamTask; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_9__ {int time; } ;
struct TYPE_8__ {int orderTime; int currentOrder; scalar_t__ orderPending; TYPE_2__* clientinfo; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 size_t FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_3( rectDef_t *VAR_3 ) {
 clientInfo_t *VAR_4 = VAR_1.clientinfo + VAR_2[FUNC_1()];
 if (VAR_4) {
  qhandle_t VAR_5;
  if (VAR_1.orderPending) {

   if ( VAR_0.time > VAR_1.orderTime - 2500 && (VAR_0.time >> 9 ) & 1 ) {
    return;
   }
   VAR_5 = FUNC_2(VAR_1.currentOrder);
  } else {
   VAR_5 = FUNC_2(VAR_4->teamTask);
  }
  FUNC_0( VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h, VAR_5 );
 }
}
