
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_privacy {int privacy; } ;


 int VAR_0 ;
 struct lev_privacy* FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

int FUNC_3 (int VAR_1, int VAR_2) {
  if (FUNC_1 (VAR_1) < 0) {
    return -1;
  }
  struct lev_privacy *VAR_3 = FUNC_0 (VAR_0, 12, VAR_1);
  VAR_3->privacy = VAR_2 | 1;
  return FUNC_2 (VAR_1, VAR_2);
}
