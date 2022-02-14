
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int x; int w; int needsRedraw; } ;
struct TYPE_8__ {scalar_t__ orientation; scalar_t__ panelCount; int y1; int y2; int x1; int x2; int panels; } ;
typedef TYPE_1__ ScreenManager ;
typedef TYPE_2__ Panel ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

void FUNC_4(ScreenManager* VAR_3, Panel* VAR_4, int VAR_5) {
   if (VAR_3->orientation == VAR_1) {
      int VAR_6 = 0;
      if (VAR_3->panelCount > 0) {
         Panel* VAR_7 = (Panel*) FUNC_3(VAR_3->panels, VAR_3->panelCount - 1);
         VAR_6 = VAR_7->x + VAR_7->w + 1;
      }
      int VAR_8 = VAR_2 - VAR_3->y1 + VAR_3->y2;
      if (VAR_5 > 0) {
         FUNC_1(VAR_4, VAR_5, VAR_8);
      } else {
         FUNC_1(VAR_4, VAR_0-VAR_3->x1+VAR_3->x2-VAR_6, VAR_8);
      }
      FUNC_0(VAR_4, VAR_6, VAR_3->y1);
   }

   FUNC_2(VAR_3->panels, VAR_4);
   VAR_4->needsRedraw = 1;
   VAR_3->panelCount++;
}
