
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct lev_generic* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_generic*) ;

int FUNC_3 (int VAR_1, int VAR_2) {
  if ((VAR_2 & (-1 << 24)) || !FUNC_1 (VAR_1)) {
    return 0;
  }
  struct lev_generic *VAR_3 = FUNC_0 (VAR_0 + (VAR_2 & 0xff), 8, VAR_1);
  return FUNC_2 (VAR_3);
}
