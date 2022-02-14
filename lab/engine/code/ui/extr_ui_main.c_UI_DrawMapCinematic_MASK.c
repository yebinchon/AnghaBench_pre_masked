
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_9__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_12__ {int mapCount; TYPE_1__* mapList; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_8__ {int cinematic; int mapLoadName; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,float,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(rectDef_t *VAR_5, float VAR_6, vec4_t VAR_7, qboolean VAR_8) {

 int VAR_9 = (VAR_8) ? VAR_4.integer : VAR_3.integer;
 if (VAR_9 < 0 || VAR_9 > VAR_2.mapCount) {
  if (VAR_8) {
   VAR_4.integer = 0;
   FUNC_4("ui_currentNetMap", "0");
  } else {
   VAR_3.integer = 0;
   FUNC_4("ui_currentMap", "0");
  }
  VAR_9 = 0;
 }

 if (VAR_2.mapList[VAR_9].cinematic >= -1) {
  if (VAR_2.mapList[VAR_9].cinematic == -1) {
   VAR_2.mapList[VAR_9].cinematic = FUNC_2(FUNC_5("%s.roq", VAR_2.mapList[VAR_9].mapLoadName), 0, 0, 0, 0, (VAR_0 | VAR_1) );
  }
  if (VAR_2.mapList[VAR_9].cinematic >= 0) {
    FUNC_3(VAR_2.mapList[VAR_9].cinematic);
    FUNC_0(VAR_2.mapList[VAR_9].cinematic, VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h);
  } else {
   VAR_2.mapList[VAR_9].cinematic = -2;
  }
 } else {
  FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
 }
}
