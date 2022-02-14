
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * dl_prm_ptr ;
struct TYPE_3__ {int len; int * v; int rv; } ;
typedef TYPE_1__ dl_perm ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **,int **,int **,int) ;
 int FUNC_2 (int **,int *,int *,int *) ;
 int FUNC_3 (int *,int **,int **,int,int *) ;

int FUNC_4 (dl_perm *VAR_0, int VAR_1, int VAR_2) {
  if (!(0 <= VAR_1 && VAR_1 < VAR_0->len)) {
    return -1;
  }
  if (!(0 <= VAR_2 && VAR_2 < VAR_0->len)) {
    return -1;
  }
  if (VAR_1 == VAR_2) {
    return 0;
  }



  dl_prm_ptr VAR_3[10] = {((void*)0)}, VAR_4;
  FUNC_1 (VAR_0->v, &VAR_3[5], &VAR_3[8], &VAR_3[6], VAR_1);
  VAR_1 -= FUNC_0(VAR_3[5]);



  FUNC_3 (VAR_3[6], &VAR_3[6], &VAR_4, VAR_1, &VAR_0->rv);
  FUNC_3 (VAR_4, &VAR_4, &VAR_3[7], 1, &VAR_0->rv);

  int VAR_5;
  for (VAR_5 = 0; VAR_5 <= 3; VAR_5++) {
    int VAR_6 = FUNC_0(VAR_3[VAR_5 + 5]);
    if (VAR_2 < VAR_6) {
      FUNC_1 (VAR_3[VAR_5 + 5], &VAR_3[VAR_5], &VAR_3[VAR_5 + 4], &VAR_3[VAR_5 + 1], VAR_2);
      VAR_3[VAR_5 + 5] = ((void*)0);
      VAR_2 -= FUNC_0(VAR_3[VAR_5]);
      FUNC_3 (VAR_3[VAR_5 + 1], &VAR_3[VAR_5 + 1], &VAR_3[VAR_5 + 3], VAR_2, &VAR_0->rv);
      VAR_3[VAR_5 + 2] = VAR_4;
      VAR_4 = ((void*)0);
      break;
    } else {
      VAR_2 -= VAR_6;
      VAR_3[VAR_5] = VAR_3[VAR_5 + 5];
      VAR_3[VAR_5 + 5] = ((void*)0);
    }
  }
  VAR_3[9] = VAR_4;






  for (VAR_5 = 0; VAR_5 < 9; VAR_5++) {
    FUNC_2 (&VAR_3[VAR_5 + 1], VAR_3[VAR_5], VAR_3[VAR_5 + 1], &VAR_0->rv);
  }

  VAR_0->v = VAR_3[9];

  return 0;
}
