
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct lev_military {int unit_id; int start; int finish; } ;


 int VAR_0 ;
 struct lev_military* FUNC_0 (int ,int,int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,struct lev_military*) ;

int FUNC_3 (int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  user_t *VAR_5 = FUNC_1 (VAR_1);
  if (!VAR_5) {
    return 0;
  }

  struct lev_military *VAR_6 = FUNC_0 (VAR_0, sizeof (struct lev_military), VAR_1);

  VAR_6->unit_id = VAR_2;
  VAR_6->start = VAR_3;
  VAR_6->finish = VAR_4;

  FUNC_2 (VAR_5, VAR_6);
  return 1;
}
