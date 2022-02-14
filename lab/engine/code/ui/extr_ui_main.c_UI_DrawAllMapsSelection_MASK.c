
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
struct TYPE_8__ {int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_11__ {int mapCount; TYPE_1__* mapList; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_7__ {int mapName; } ;


 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_1(rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, int VAR_6, qboolean VAR_7) {
 int VAR_8 = (VAR_7) ? VAR_2.integer : VAR_1.integer;
 if (VAR_8 >= 0 && VAR_8 < VAR_0.mapCount) {
   FUNC_0(VAR_3->x, VAR_3->y, VAR_4, VAR_5, VAR_0.mapList[VAR_8].mapName, 0, 0, VAR_6);
 }
}
