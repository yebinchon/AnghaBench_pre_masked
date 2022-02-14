
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ h; scalar_t__ w; scalar_t__ x; int y; } ;
struct TYPE_5__ {int panelCount; scalar_t__ orientation; int panels; } ;
typedef TYPE_1__ ScreenManager ;
typedef TYPE_2__ Panel ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__,char,scalar_t__) ;

__attribute__((used)) static void FUNC_3(ScreenManager* VAR_1, int VAR_2) {
   const int VAR_3 = VAR_1->panelCount;
   for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
      Panel* VAR_5 = (Panel*) FUNC_1(VAR_1->panels, VAR_4);
      FUNC_0(VAR_5, VAR_4 == VAR_2);
      if (VAR_1->orientation == VAR_0) {
         FUNC_2(VAR_5->y, VAR_5->x+VAR_5->w, ' ', VAR_5->h+1);
      }
   }
}
