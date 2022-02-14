
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ rectDef_t ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,int ,float,int ,int ,int ,int ,int) ;
 int * VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3, int VAR_4) {
  int VAR_5, VAR_6;

  VAR_6 = FUNC_0( 5, 100, FUNC_2("handicap") );
  VAR_5 = 20 - VAR_6 / 5;

  FUNC_1(VAR_1->x, VAR_1->y, VAR_2, VAR_3, VAR_0[VAR_5], 0, 0, VAR_4);
}
