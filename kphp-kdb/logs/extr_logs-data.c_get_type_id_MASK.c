
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int* FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*,int*,int*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_2 ;

int FUNC_5 (char *VAR_3) {
  int VAR_4;
  int VAR_5 = FUNC_4 (VAR_3);
  if (VAR_3[0] >= '1' && VAR_3[0] <= '9') {
    int VAR_6;
    FUNC_3 (VAR_3, "%d%n", &VAR_4, &VAR_6);
    if (VAR_6 != VAR_5) {
      return 0;
    }

    if (!(1 <= VAR_4 && VAR_4 < VAR_0)) {
      return 0;
    }

    if (VAR_2[VAR_4].name == ((void*)0)) {
      return 0;
    }
  } else {
    if (!FUNC_1 (VAR_3)) {
      return 0;
    }

    int *VAR_7 = FUNC_2 (&VAR_1, FUNC_0 (VAR_3));
    if (VAR_7 == ((void*)0)) {
      return 0;
    }

    VAR_4 = *VAR_7;
  }
  return VAR_4;
}
