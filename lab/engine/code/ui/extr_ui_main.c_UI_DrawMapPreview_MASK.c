
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_8__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_11__ {int mapCount; TYPE_1__* mapList; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_7__ {int levelShot; char* imageName; } ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, qboolean VAR_6) {
 int VAR_7 = (VAR_6) ? VAR_2.integer : VAR_1.integer;
 if (VAR_7 < 0 || VAR_7 > VAR_0.mapCount) {
  if (VAR_6) {
   VAR_2.integer = 0;
   FUNC_1("ui_currentNetMap", "0");
  } else {
   VAR_1.integer = 0;
   FUNC_1("ui_currentMap", "0");
  }
  VAR_7 = 0;
 }

 if (VAR_0.mapList[VAR_7].levelShot == -1) {
  VAR_0.mapList[VAR_7].levelShot = FUNC_2(VAR_0.mapList[VAR_7].imageName);
 }

 if (VAR_0.mapList[VAR_7].levelShot > 0) {
  FUNC_0( VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h, VAR_0.mapList[VAR_7].levelShot);
 } else {
  FUNC_0( VAR_3->x, VAR_3->y, VAR_3->w, VAR_3->h, FUNC_2("menu/art/unknownmap"));
 }
}
