
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long x; int y; } ;
typedef TYPE_1__ pair_ll_int ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (int *,long long) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_1__) ;

int FUNC_4 (long long VAR_3) {
  FUNC_2();

  if (VAR_3 != 0) {
    int *VAR_4 = FUNC_1 (&VAR_2, VAR_3);
    FUNC_0 (VAR_4);
    if (*VAR_4 != VAR_0) {
      *VAR_4 = VAR_0;
      pair_ll_int VAR_5 = {
        .x = VAR_3,
        .y = VAR_0
      };

      FUNC_3 (VAR_1, VAR_5);
    }
    return 1;
  }
  return 0;
}
