
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_username {int s; } ;


 scalar_t__ VAR_0 ;
 struct lev_username* FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (struct lev_username*,int) ;

int FUNC_4 (int VAR_1, const char *VAR_2, int VAR_3) {
  if ((unsigned)VAR_3 >= 256 || FUNC_1 (VAR_1) < 0) {
    return 0;
  }
  struct lev_username *VAR_4 = FUNC_0 (VAR_0 + VAR_3, 9 + VAR_3, VAR_1);
  FUNC_2 (VAR_4->s, VAR_2, VAR_3);
  return FUNC_3 (VAR_4, VAR_3);
}
