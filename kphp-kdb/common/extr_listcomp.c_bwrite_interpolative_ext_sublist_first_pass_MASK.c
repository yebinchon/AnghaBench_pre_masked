
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct left_subtree_bits_array {size_t idx; size_t n; int* a; } ;
struct bitwriter {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bitwriter*,int) ;
 int FUNC_2 (struct bitwriter*) ;
 int FUNC_3 (struct bitwriter*,int const,int const) ;

__attribute__((used)) static void FUNC_4 (struct bitwriter *VAR_0, int *VAR_1, int VAR_2, int VAR_3, int VAR_4, struct left_subtree_bits_array *VAR_5) {
  const int VAR_6 = VAR_3 - VAR_2;
  if (VAR_6 <= 1) { return; }
  const int VAR_7 = (VAR_2 + VAR_3) >> 1,
            VAR_8 = VAR_1[VAR_3] - (VAR_3 - VAR_7),
            VAR_9 = VAR_1[VAR_2] + (VAR_7 - VAR_2),
             VAR_10 = VAR_1[VAR_7] - VAR_9,
             VAR_11 = VAR_8 - VAR_9 + 1;
  FUNC_3 (VAR_0, VAR_10, VAR_11);
  if (VAR_6 >= VAR_4) {
    FUNC_0 (VAR_5->idx < VAR_5->n);
    int *VAR_12 = &VAR_5->a[VAR_5->idx];
    VAR_5->idx++;
    int VAR_13 = -FUNC_2 (VAR_0);
    FUNC_4 (VAR_0, VAR_1, VAR_2, VAR_7, VAR_4, VAR_5);
    VAR_13 += FUNC_2 (VAR_0);
    *VAR_12 = VAR_13;
    FUNC_1 (VAR_0, VAR_13 + 1);
  } else {
    FUNC_4 (VAR_0, VAR_1, VAR_2, VAR_7, VAR_4, VAR_5);
  }
  FUNC_4 (VAR_0, VAR_1, VAR_7, VAR_3, VAR_4, VAR_5);
}
