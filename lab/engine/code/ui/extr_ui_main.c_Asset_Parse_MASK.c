
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_9__ {int string; } ;
typedef TYPE_3__ pc_token_t ;
struct TYPE_7__ {char const* cursorStr; int fadeCycle; int * shadowColor; int shadowFadeClamp; int shadowY; int shadowX; int fadeAmount; int fadeClamp; void* cursor; void* menuBuzzSound; void* itemFocusSound; void* menuExitSound; void* menuEnterSound; void* gradientBar; int bigFont; int smallFont; int fontRegistered; int textFont; } ;
struct TYPE_8__ {TYPE_1__ Assets; } ;
struct TYPE_10__ {TYPE_2__ uiDC; } ;


 int FUNC_0 (int,int **) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,char const**) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int,TYPE_3__*) ;
 int FUNC_7 (char const*,int,int *) ;
 void* FUNC_8 (char const*) ;
 void* FUNC_9 (char const*,int ) ;
 TYPE_4__ VAR_2 ;

qboolean FUNC_10(int VAR_3) {
 pc_token_t VAR_4;
 const char *VAR_5;

 if (!FUNC_6(VAR_3, &VAR_4))
  return VAR_0;
 if (FUNC_4(VAR_4.string, "{") != 0) {
  return VAR_0;
 }

 while ( 1 ) {

  FUNC_5(&VAR_4, 0, sizeof(pc_token_t));

  if (!FUNC_6(VAR_3, &VAR_4))
   return VAR_0;

  if (FUNC_4(VAR_4.string, "}") == 0) {
   return VAR_1;
  }


  if (FUNC_4(VAR_4.string, "font") == 0) {
   int VAR_6;
   if (!FUNC_3(VAR_3, &VAR_5) || !FUNC_2(VAR_3,&VAR_6)) {
    return VAR_0;
   }
   FUNC_7(VAR_5, VAR_6, &VAR_2.uiDC.Assets.textFont);
   VAR_2.uiDC.Assets.fontRegistered = VAR_1;
   continue;
  }

  if (FUNC_4(VAR_4.string, "smallFont") == 0) {
   int VAR_7;
   if (!FUNC_3(VAR_3, &VAR_5) || !FUNC_2(VAR_3,&VAR_7)) {
    return VAR_0;
   }
   FUNC_7(VAR_5, VAR_7, &VAR_2.uiDC.Assets.smallFont);
   continue;
  }

  if (FUNC_4(VAR_4.string, "bigFont") == 0) {
   int VAR_8;
   if (!FUNC_3(VAR_3, &VAR_5) || !FUNC_2(VAR_3,&VAR_8)) {
    return VAR_0;
   }
   FUNC_7(VAR_5, VAR_8, &VAR_2.uiDC.Assets.bigFont);
   continue;
  }



  if (FUNC_4(VAR_4.string, "gradientbar") == 0) {
   if (!FUNC_3(VAR_3, &VAR_5)) {
    return VAR_0;
   }
   VAR_2.uiDC.Assets.gradientBar = FUNC_8(VAR_5);
   continue;
  }


  if (FUNC_4(VAR_4.string, "menuEnterSound") == 0) {
   if (!FUNC_3(VAR_3, &VAR_5)) {
    return VAR_0;
   }
   VAR_2.uiDC.Assets.menuEnterSound = FUNC_9( VAR_5, VAR_0 );
   continue;
  }


  if (FUNC_4(VAR_4.string, "menuExitSound") == 0) {
   if (!FUNC_3(VAR_3, &VAR_5)) {
    return VAR_0;
   }
   VAR_2.uiDC.Assets.menuExitSound = FUNC_9( VAR_5, VAR_0 );
   continue;
  }


  if (FUNC_4(VAR_4.string, "itemFocusSound") == 0) {
   if (!FUNC_3(VAR_3, &VAR_5)) {
    return VAR_0;
   }
   VAR_2.uiDC.Assets.itemFocusSound = FUNC_9( VAR_5, VAR_0 );
   continue;
  }


  if (FUNC_4(VAR_4.string, "menuBuzzSound") == 0) {
   if (!FUNC_3(VAR_3, &VAR_5)) {
    return VAR_0;
   }
   VAR_2.uiDC.Assets.menuBuzzSound = FUNC_9( VAR_5, VAR_0 );
   continue;
  }

  if (FUNC_4(VAR_4.string, "cursor") == 0) {
   if (!FUNC_3(VAR_3, &VAR_2.uiDC.Assets.cursorStr)) {
    return VAR_0;
   }
   VAR_2.uiDC.Assets.cursor = FUNC_8( VAR_2.uiDC.Assets.cursorStr);
   continue;
  }

  if (FUNC_4(VAR_4.string, "fadeClamp") == 0) {
   if (!FUNC_1(VAR_3, &VAR_2.uiDC.Assets.fadeClamp)) {
    return VAR_0;
   }
   continue;
  }

  if (FUNC_4(VAR_4.string, "fadeCycle") == 0) {
   if (!FUNC_2(VAR_3, &VAR_2.uiDC.Assets.fadeCycle)) {
    return VAR_0;
   }
   continue;
  }

  if (FUNC_4(VAR_4.string, "fadeAmount") == 0) {
   if (!FUNC_1(VAR_3, &VAR_2.uiDC.Assets.fadeAmount)) {
    return VAR_0;
   }
   continue;
  }

  if (FUNC_4(VAR_4.string, "shadowX") == 0) {
   if (!FUNC_1(VAR_3, &VAR_2.uiDC.Assets.shadowX)) {
    return VAR_0;
   }
   continue;
  }

  if (FUNC_4(VAR_4.string, "shadowY") == 0) {
   if (!FUNC_1(VAR_3, &VAR_2.uiDC.Assets.shadowY)) {
    return VAR_0;
   }
   continue;
  }

  if (FUNC_4(VAR_4.string, "shadowColor") == 0) {
   if (!FUNC_0(VAR_3, &VAR_2.uiDC.Assets.shadowColor)) {
    return VAR_0;
   }
   VAR_2.uiDC.Assets.shadowFadeClamp = VAR_2.uiDC.Assets.shadowColor[3];
   continue;
  }

 }
 return VAR_0;
}
