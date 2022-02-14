
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ rectDef_t ;


 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, int VAR_5) {
  int VAR_6;
 VAR_6 = FUNC_1( "g_spSkill" );
  if (VAR_6 < 1 || VAR_6 > VAR_0) {
    VAR_6 = 1;
  }
  FUNC_0(VAR_2->x, VAR_2->y, VAR_3, VAR_4, VAR_1[VAR_6-1],0, 0, VAR_5);
}
