
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_7__ {int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_9__ {size_t numJoinGameTypes; TYPE_1__* joinGameTypes; } ;
struct TYPE_8__ {size_t integer; } ;
struct TYPE_6__ {int gameType; } ;


 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 int FUNC_1 (char*,char*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_2(rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, int VAR_5) {
 if (VAR_1.integer < 0 || VAR_1.integer > VAR_0.numJoinGameTypes) {
  FUNC_1("ui_joinGameType", "0");
 }
  FUNC_0(VAR_2->x, VAR_2->y, VAR_3, VAR_4, VAR_0.joinGameTypes[VAR_1.integer].gameType , 0, 0, VAR_5);
}
