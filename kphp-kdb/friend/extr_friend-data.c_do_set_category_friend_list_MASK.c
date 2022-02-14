
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct lev_setlist_long {int num; int L; } ;


 scalar_t__ VAR_0 ;
 struct lev_setlist_long* FUNC_0 (scalar_t__,int,int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int *,int,int ,int) ;

int FUNC_5 (int VAR_1, int VAR_2, int *VAR_3, int VAR_4) {
  user_t *VAR_5 = FUNC_1 (VAR_1);
  if (!VAR_5 || VAR_2 <= 0 || VAR_2 > 30) {
    return -1;
  }
  int VAR_6 = 0, VAR_7 = 1;

  FUNC_2 (VAR_3, VAR_4-1);
  while (VAR_6 < VAR_4 && VAR_3[VAR_6] <= 0) { VAR_6++; }
  VAR_3 += VAR_6;
  VAR_4 -= VAR_6;
  if (VAR_4 > 0) {
    for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
      if (VAR_3[VAR_6] > VAR_3[VAR_6-1]) {
        VAR_3[VAR_7++] = VAR_3[VAR_6];
      }
    }
    VAR_4 = VAR_7;
  }

  struct lev_setlist_long *VAR_8 = FUNC_0 (VAR_0 + VAR_2, 12 + 4 * VAR_4, VAR_1);
  VAR_8->num = VAR_4;
  FUNC_3 (VAR_8->L, VAR_3, VAR_4*4);

  return FUNC_4 (VAR_5, VAR_2, VAR_8->L, VAR_4);
}
