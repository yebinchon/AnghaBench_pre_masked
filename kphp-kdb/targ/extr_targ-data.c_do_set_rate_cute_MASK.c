
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_ratecute {int rate; int cute; } ;


 int VAR_0 ;
 struct lev_ratecute* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_ratecute*) ;

int FUNC_3 (int VAR_1, int VAR_2, int VAR_3) {
  if (!FUNC_1 (VAR_1)) { return 0; }
  struct lev_ratecute *VAR_4 = FUNC_0 (VAR_0, 16, VAR_1);
  VAR_4->rate = VAR_2;
  VAR_4->cute = VAR_3;
  FUNC_2 (VAR_4);
  return 1;
}
