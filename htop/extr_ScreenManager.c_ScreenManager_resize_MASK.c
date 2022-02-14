
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int w; int x; } ;
struct TYPE_6__ {int x1; int y1; int x2; int y2; int panelCount; scalar_t__ orientation; int panels; } ;
typedef TYPE_1__ ScreenManager ;
typedef TYPE_2__ Panel ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

void FUNC_3(ScreenManager* VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
   VAR_3->x1 = VAR_4;
   VAR_3->y1 = VAR_5;
   VAR_3->x2 = VAR_6;
   VAR_3->y2 = VAR_7;
   int VAR_8 = VAR_3->panelCount;
   if (VAR_3->orientation == VAR_1) {
      int VAR_9 = 0;
      for (int VAR_10 = 0; VAR_10 < VAR_8 - 1; VAR_10++) {
         Panel* VAR_11 = (Panel*) FUNC_2(VAR_3->panels, VAR_10);
         FUNC_1(VAR_11, VAR_11->w, VAR_2-VAR_5+VAR_7);
         FUNC_0(VAR_11, VAR_9, VAR_5);
         VAR_9 = VAR_11->x + VAR_11->w + 1;
      }
      Panel* VAR_12 = (Panel*) FUNC_2(VAR_3->panels, VAR_8-1);
      FUNC_1(VAR_12, VAR_0-VAR_4+VAR_6-VAR_9, VAR_2-VAR_5+VAR_7);
      FUNC_0(VAR_12, VAR_9, VAR_5);
   }

}
