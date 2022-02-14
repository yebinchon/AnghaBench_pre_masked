
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_10__ {int y; int x; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_13__ {size_t mapCount; TYPE_2__* gameTypes; TYPE_1__* mapList; } ;
struct TYPE_12__ {size_t integer; } ;
struct TYPE_11__ {size_t integer; } ;
struct TYPE_9__ {size_t gtEnum; } ;
struct TYPE_8__ {int* timeToBeat; } ;


 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 int FUNC_1 (char*,char*) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, int VAR_6) {
 int VAR_7, VAR_8, VAR_9;
 if (VAR_1.integer < 0 || VAR_1.integer > VAR_0.mapCount) {
  VAR_1.integer = 0;
  FUNC_1("ui_currentMap", "0");
 }

 VAR_9 = VAR_0.mapList[VAR_1.integer].timeToBeat[VAR_0.gameTypes[VAR_2.integer].gtEnum];

 VAR_7 = VAR_9 / 60;
 VAR_8 = VAR_9 % 60;

  FUNC_0(VAR_3->x, VAR_3->y, VAR_4, VAR_5, FUNC_2("%02i:%02i", VAR_7, VAR_8), 0, 0, VAR_6);
}
