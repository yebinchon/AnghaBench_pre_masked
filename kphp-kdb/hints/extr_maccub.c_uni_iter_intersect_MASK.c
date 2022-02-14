
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uni_iterator ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 int FUNC_1 (int *) ;

int *FUNC_2 (uni_iterator *VAR_2, int VAR_3, int VAR_4) {


  VAR_1[0] = 0;
  if (VAR_3 >= VAR_0 || VAR_3 == 0) {
    return VAR_1;
  }

  if (VAR_3 == 1) {
    int VAR_5;

    while (VAR_1[0] < VAR_4 && (VAR_5 = FUNC_1 (&VAR_2[0]))) {
      VAR_1[++VAR_1[0]] = VAR_5;
    }
  } else {
    int VAR_6, VAR_7;

    int VAR_8;

    while ( (VAR_8 = FUNC_1 (&VAR_2[0])) ) {
      VAR_1[++VAR_1[0]] = VAR_8;
    }

    for (VAR_6 = 1; VAR_6 < VAR_3 && VAR_1[0]; VAR_6++) {
      int VAR_9 = VAR_1[0];
      VAR_1[0] = 0;
      VAR_7 = 1;

      while ( (VAR_8 = FUNC_1 (&VAR_2[VAR_6])) ) {
        while (VAR_7 < VAR_9 && VAR_1[VAR_7] > VAR_8) {
          VAR_7++;
        }
        if (VAR_1[VAR_7] == VAR_8) {
          VAR_1[++VAR_1[0]] = VAR_8;
          if (VAR_6 + 1 == VAR_3 && VAR_1[0] == VAR_4) {
            break;
          }
        }
      }
    }
  }

  FUNC_0 (VAR_1[0] <= VAR_4);
  return VAR_1;
}
