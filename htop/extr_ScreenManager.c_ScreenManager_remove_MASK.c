
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int panelCount; int panels; } ;
typedef TYPE_1__ ScreenManager ;
typedef int Panel ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

Panel* FUNC_2(ScreenManager* VAR_0, int VAR_1) {
   FUNC_1(VAR_0->panelCount > VAR_1);
   Panel* VAR_2 = (Panel*) FUNC_0(VAR_0->panels, VAR_1);
   VAR_0->panelCount--;
   return VAR_2;
}
