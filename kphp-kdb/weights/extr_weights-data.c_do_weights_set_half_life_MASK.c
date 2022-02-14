
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_weights_set_half_life {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lev_weights_set_half_life* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_weights_set_half_life*) ;

int FUNC_3 (int VAR_2, int VAR_3) {
  if (VAR_2 < 0 || VAR_2 >= VAR_1 || VAR_3 <= 0) {
    return -1;
  }
  struct lev_weights_set_half_life *VAR_4 = FUNC_0 (VAR_0 + VAR_2, sizeof (*VAR_4), VAR_3);
  int VAR_5 = FUNC_2 (VAR_4);
  if (VAR_5 <= 0) {
    FUNC_1 (sizeof (*VAR_4));
  }
  return VAR_5;
}
