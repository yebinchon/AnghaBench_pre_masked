
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_rate {int rate; } ;


 int VAR_0 ;
 struct lev_rate* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_rate*) ;

int FUNC_3 (int VAR_1, int VAR_2) {
  if (!FUNC_1 (VAR_1)) { return 0; }
  struct lev_rate *VAR_3 = FUNC_0 (VAR_0, 12, VAR_1);
  VAR_3->rate = VAR_2;
  FUNC_2 (VAR_3);
  return 1;
}
