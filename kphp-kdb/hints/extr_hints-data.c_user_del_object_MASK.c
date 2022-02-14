
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chg_list_en; int chg_list_st; } ;
typedef TYPE_1__ user ;


 int VAR_0 ;
 int FUNC_0 (long long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int,int,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_3 (user *VAR_3, int VAR_4, long long VAR_5, int VAR_6) {
  if (!FUNC_1 (VAR_4) || !FUNC_0 (VAR_5)) {
    return 0;
  }
  if (!VAR_6) {
    if (VAR_2 || VAR_1) {
      return 1;
    }
  }


  FUNC_2 (&VAR_3->chg_list_st, &VAR_3->chg_list_en, -VAR_4, (int)VAR_5, ((void*)0));
  VAR_0++;

  return 1;
}
