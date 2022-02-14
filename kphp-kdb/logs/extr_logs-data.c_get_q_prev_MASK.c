
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* q_prev; int timestamp; scalar_t__* std_val; } ;
typedef TYPE_1__ event ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

inline int FUNC_2 (int VAR_3, int VAR_4) {
  if (VAR_4 == -1) {
    if (VAR_3 == VAR_1) {
      return -1;
    }
    FUNC_0 (VAR_3);
    return VAR_3;
  }

  event *VAR_5 = VAR_0[VAR_3];
  FUNC_1 (VAR_5 != ((void*)0));
  int VAR_6 = VAR_5->q_prev[VAR_4];
  event *VAR_7 = VAR_0[VAR_6];


  if (VAR_7 != ((void*)0) && VAR_5->timestamp >= VAR_7->timestamp - 3601) {
    if (VAR_2[VAR_4] == 0 && VAR_5->std_val[VAR_4] == VAR_7->std_val[VAR_4]) {
      return VAR_6;
    }
    if (VAR_2[VAR_4] == 1 && *(long long *)&VAR_5->std_val[VAR_4] == *(long long *)&VAR_7->std_val[VAR_4]) {
      return VAR_6;
    }
  }
  return -1;
}
