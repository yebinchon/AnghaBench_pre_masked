
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_t ;


 int * VAR_0 ;
 int* VAR_1 ;
 int** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int**) ;

__attribute__((used)) static int FUNC_1 (void) {
  int VAR_5, VAR_6, VAR_7;
  hash_t VAR_8;
  int *VAR_9 = 0;

  if (!VAR_4) {
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
      VAR_1[VAR_5] = 0;
    }
    return VAR_3;
  }

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
    VAR_8 = VAR_0[VAR_5];
    VAR_7 = FUNC_0 (VAR_8, &VAR_9);
    VAR_6 = VAR_5;
    while (VAR_6 && VAR_1[VAR_6-1] > VAR_7) {
      VAR_0[VAR_6] = VAR_0[VAR_6-1]; VAR_1[VAR_6] = VAR_1[VAR_6-1]; VAR_2[VAR_6] = VAR_2[VAR_6-1];
      VAR_6--;
    }
    VAR_0[VAR_6] = VAR_8; VAR_1[VAR_6] = VAR_7; VAR_2[VAR_6] = VAR_9;
  }
  return VAR_3;
}
