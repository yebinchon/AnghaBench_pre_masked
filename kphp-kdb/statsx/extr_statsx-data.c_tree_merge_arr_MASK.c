
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int,int**,int*,int,int ) ;

int FUNC_2 (tree_t *VAR_0, int *VAR_1, int VAR_2, int **VAR_3, int *VAR_4, int VAR_5) {
  int VAR_6 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0);
  while (*VAR_4) {
    FUNC_0 (VAR_6 < VAR_2);
    VAR_1[2 * VAR_6 + 0] = (*VAR_3)[0];
    VAR_1[2 * VAR_6 + 1] = (*VAR_3)[1];
    (*VAR_4)--;
    (*VAR_3)+=2;
    VAR_6++;
  }
  return VAR_6;
}
