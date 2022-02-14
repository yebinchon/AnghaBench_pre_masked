
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_weights_incr {int value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lev_weights_incr* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_weights_incr*) ;

int FUNC_3 (int VAR_2, int VAR_3, int VAR_4) {

  FUNC_1 (VAR_3 >= 0 && VAR_3 < VAR_1);
  struct lev_weights_incr *VAR_5 = FUNC_0 (VAR_0 + VAR_3, sizeof (*VAR_5), VAR_2);
  VAR_5->value = VAR_4;
  return FUNC_2 (VAR_5);
}
