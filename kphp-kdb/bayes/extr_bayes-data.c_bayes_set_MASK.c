
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ngood; int nbad; } ;
struct TYPE_5__ {TYPE_2__ b; } ;
typedef TYPE_1__ user ;




 int FUNC_0 (TYPE_2__*,scalar_t__,int,int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,char*) ;
 int FUNC_3 (char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_4 (char*,char*,int*) ;
 int VAR_2 ;
 char* FUNC_5 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;

int FUNC_6 (char *VAR_6, int VAR_7, int VAR_8) {
  if (VAR_4 > 1 && VAR_0) {
    FUNC_2 (VAR_2, "bayes_set %d : %s\n", VAR_8, VAR_6);
  }

  int VAR_9;

  int VAR_10 = 0;
  char *VAR_11 = FUNC_5 (VAR_6, "out ");
  if (VAR_11 != ((void*)0)) {
    FUNC_4 (VAR_11 + 5, "%d", &VAR_10);
  }

  int VAR_12 = 0;
  char *VAR_13 = FUNC_5 (VAR_6, "uid ");
  if (VAR_13 != ((void*)0)) {
    FUNC_4 (VAR_13 + 5, "%d", &VAR_12);
  }

  user *VAR_14 = FUNC_1 (VAR_12);

  if (!VAR_10 || VAR_14 != ((void*)0)) {
    VAR_3++;
    FUNC_3 (VAR_6);
  } else {
    return 0;
  }

  int VAR_15 = 0, VAR_16 = 0;
  switch (VAR_8) {
    case 129:
      VAR_15 = 1;
      break;
    case 128:
      VAR_16 = 1;
      break;
    case 129 + 2:
      VAR_15 = -1;
      break;
    case 128 + 2:
      VAR_16 = -1;
      break;
    case 129 + 4:
      VAR_15 = 1;
      VAR_16 = -1;
      break;
    case 128 + 4:
      VAR_15 = -1;
      VAR_16 = 1;
      break;
  }





  if (!VAR_10) {
    for (VAR_9 = 0; VAR_5[VAR_9]; VAR_9++) {
      FUNC_0 (&VAR_1, VAR_5[VAR_9], VAR_15, VAR_16);
    }

    VAR_1.ngood += VAR_15;
    VAR_1.nbad += VAR_16;
  }

  if (VAR_14 != ((void*)0)) {
    for (VAR_9 = 0; VAR_5[VAR_9]; VAR_9++) {
      FUNC_0 (&VAR_14->b, VAR_5[VAR_9], VAR_15, VAR_16);
    }

    VAR_14->b.ngood += VAR_15;
    VAR_14->b.nbad += VAR_16;
  }
  return 1;
}
