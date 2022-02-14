
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long* std_val; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__** VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int* FUNC_1 (int *,long long) ;
 int* FUNC_2 (int *,long long) ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__* VAR_6 ;

inline int FUNC_3 (int VAR_7, long long VAR_8) {
  if (VAR_7 == -1 && VAR_2) {
    int VAR_9 = VAR_3;
    FUNC_0(VAR_9);
    return VAR_9;
  }

  if (0 <= VAR_7 && VAR_7 < VAR_0) {
    if (VAR_6[VAR_7] == 0) {
      int *VAR_10 = FUNC_1 (&VAR_4[VAR_7], VAR_8);
      if (VAR_10 != ((void*)0) && VAR_1[*VAR_10] != ((void*)0) && VAR_1[*VAR_10]->std_val[VAR_7] == VAR_8) {
        return *VAR_10;
      }
    } else {
      int *VAR_11 = FUNC_2 (&VAR_5[VAR_7], VAR_8);
      if (VAR_11 != ((void*)0) && VAR_1[*VAR_11] != ((void*)0) && (*(long long *)&VAR_1[*VAR_11]->std_val[VAR_7]) == VAR_8) {
        return *VAR_11;
      }
    }
  }

  return -1;
}
