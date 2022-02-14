
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_logs_set_color {int type; long long field_value; int cnt; int and_mask; int xor_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int,long long) ;
 scalar_t__ VAR_4 ;
 int* FUNC_2 (int *,long long) ;
 int FUNC_3 (int *,long long) ;
 int* FUNC_4 (int *,long long) ;
 int FUNC_5 (int *,long long) ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;

int FUNC_6 (struct lev_logs_set_color *VAR_7) {
  if (!VAR_6 || VAR_4) {
    int VAR_8 = VAR_7->type - VAR_1;
    long long VAR_9 = VAR_7->field_value;
    int VAR_10 = VAR_7->cnt;
    int VAR_11;

    FUNC_0 (0 <= VAR_8 && VAR_8 < VAR_0);

    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
      int VAR_12 = (FUNC_1 (VAR_8, VAR_9) & VAR_7->and_mask) ^ VAR_7->xor_mask;
      if (VAR_12 == 0) {
        if (VAR_5[VAR_8]) {
          FUNC_5 (&VAR_3[VAR_8], VAR_9 + VAR_11);
        } else {
          FUNC_3 (&VAR_2[VAR_8], VAR_9 + VAR_11);
        }
      } else {
        if (VAR_5[VAR_8]) {
          *FUNC_4 (&VAR_3[VAR_8], VAR_9 + VAR_11) = VAR_12;
        } else {
          *FUNC_2 (&VAR_2[VAR_8], VAR_9 + VAR_11) = VAR_12;
        }
      }
    }
  }

  return 1;
}
