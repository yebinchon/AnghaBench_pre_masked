
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x1; int y1; int x2; int y2; int owner; int allowFocusChange; int const* settings; int const* header; scalar_t__ panelCount; int panels; int orientation; } ;
typedef int Settings ;
typedef TYPE_1__ ScreenManager ;
typedef int Orientation ;
typedef int Header ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ) ;
 TYPE_1__* FUNC_2 (int) ;

ScreenManager* FUNC_3(int VAR_2, int VAR_3, int VAR_4, int VAR_5, Orientation VAR_6, const Header* VAR_7, const Settings* VAR_8, bool VAR_9) {
   ScreenManager* VAR_10;
   VAR_10 = FUNC_2(sizeof(ScreenManager));
   VAR_10->x1 = VAR_2;
   VAR_10->y1 = VAR_3;
   VAR_10->x2 = VAR_4;
   VAR_10->y2 = VAR_5;
   VAR_10->orientation = VAR_6;
   VAR_10->panels = FUNC_1(FUNC_0(VAR_1), VAR_9, VAR_0);
   VAR_10->panelCount = 0;
   VAR_10->header = VAR_7;
   VAR_10->settings = VAR_8;
   VAR_10->owner = VAR_9;
   VAR_10->allowFocusChange = 1;
   return VAR_10;
}
