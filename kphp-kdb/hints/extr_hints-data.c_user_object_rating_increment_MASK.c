
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
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,unsigned char,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_4 (user *VAR_3, unsigned char VAR_4, long long VAR_5, int VAR_6, int VAR_7) {
  if (!FUNC_1 (VAR_6) || VAR_4 == 0 || !FUNC_0 (VAR_5) || !FUNC_2 (VAR_7)) {
    return 0;
  }

  if (VAR_2 || VAR_1) {
    return 1;
  }

  FUNC_3 (&VAR_3->chg_list_st, &VAR_3->chg_list_en, +(VAR_4 + 256 * VAR_7), -(int)(VAR_5), VAR_6);
  VAR_0++;

  return 1;
}
