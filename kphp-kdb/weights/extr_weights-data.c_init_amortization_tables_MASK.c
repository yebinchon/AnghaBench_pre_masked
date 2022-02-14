
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_weights_set_half_life {int type; int half_life; } ;


 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lev_weights_set_half_life*) ;

__attribute__((used)) static void FUNC_1 (void) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    if (VAR_0[VAR_2] == ((void*)0)) {
      struct lev_weights_set_half_life VAR_3;
      VAR_3.type = VAR_2;
      VAR_3.half_life = 86400 * 30;
      FUNC_0 (&VAR_3);
    }
  }
}
