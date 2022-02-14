
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct left_subtree_bits_array {size_t idx; size_t n; int* a; } ;
struct bitwriter {int dummy; } ;
typedef int pair_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bitwriter*,int *,int) ;
 int FUNC_2 (struct bitwriter*,int) ;
 int FUNC_3 (struct bitwriter*) ;
 int FUNC_4 (struct bitwriter*,int const,int const) ;
 int const FUNC_5 (int *,int*,int const) ;

__attribute__((used)) static void FUNC_6 (struct bitwriter *VAR_0, pair_t *VAR_1, int *VAR_2, int VAR_3, int VAR_4, int VAR_5, struct left_subtree_bits_array *VAR_6) {
  const int VAR_7 = VAR_4 - VAR_3;
  if (VAR_7 <= 1) { return; }
  const int VAR_8 = (VAR_3 + VAR_4) >> 1,
            VAR_9 = FUNC_5 (VAR_1, VAR_2, VAR_4) - (VAR_4 - VAR_8),
            VAR_10 = FUNC_5 (VAR_1, VAR_2, VAR_3) + (VAR_8 - VAR_3),
             VAR_11 = FUNC_5 (VAR_1, VAR_2, VAR_8) - VAR_10,
             VAR_12 = VAR_9 - VAR_10 + 1;
  FUNC_4 (VAR_0, VAR_11, VAR_12);
  FUNC_1 (VAR_0, VAR_1 + VAR_2[VAR_8], VAR_2[VAR_8+1] - VAR_2[VAR_8]);
  if (VAR_7 >= VAR_5) {
    FUNC_0 (VAR_6->idx < VAR_6->n);
    int *VAR_13 = &VAR_6->a[VAR_6->idx];
    VAR_6->idx++;
    int VAR_14 = -FUNC_3 (VAR_0);
    FUNC_6 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_8, VAR_5, VAR_6);
    VAR_14 += FUNC_3 (VAR_0);
    *VAR_13 = VAR_14;
    FUNC_2 (VAR_0, VAR_14 + 1);
  } else {
    FUNC_6 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_8, VAR_5, VAR_6);
  }
  FUNC_6 (VAR_0, VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_6);
}
