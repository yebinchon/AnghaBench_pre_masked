
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int,int ) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;

char *FUNC_1 (int VAR_5) {
  int VAR_6, VAR_7;
  if (VAR_5 == -1) {
    VAR_6 = 1;
    VAR_7 = VAR_0;
  } else if (1 <= VAR_5 && VAR_5 < VAR_0) {
    VAR_6 = VAR_5;
    VAR_7 = VAR_5 + 1;
  } else {
    return "";
  }

  VAR_2 = VAR_1;

  int VAR_8;
  for (VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++) {
    if (VAR_4[VAR_8].name != ((void*)0)) {
      FUNC_0 ("[%40s](%5d) : %9lld\n", VAR_4[VAR_8].name, VAR_8, VAR_3[VAR_8]);
    }
  }

  *VAR_2 = 0;
  return VAR_1;
}
