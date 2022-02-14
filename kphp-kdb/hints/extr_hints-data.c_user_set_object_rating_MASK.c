
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chg_list_en; int chg_list_st; } ;
typedef TYPE_1__ user ;
typedef int rating ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (int *,int *,unsigned char,int,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_5 (user *VAR_5, unsigned char VAR_6, long long VAR_7, rating VAR_8, int VAR_9) {
  if (!FUNC_1 (VAR_8) || !FUNC_3 (VAR_6) || !FUNC_0 (VAR_7) || !FUNC_2 (VAR_9)) {
    return 0;
  }
  if (VAR_4 || VAR_2) {
    return 1;
  }

  if (1333411200 <= VAR_3 && VAR_3 <= 1334016000 && VAR_8 > 1e-3 && VAR_6 == 21 && VAR_9 == 0) {
    return 1;
  }

  FUNC_4 (&VAR_5->chg_list_st, &VAR_5->chg_list_en, + (VAR_6 + 256 * VAR_9 + 256 * VAR_0), -(int)(VAR_7), VAR_8);
  VAR_1++;

  return 1;
}
