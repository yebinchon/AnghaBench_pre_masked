
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* root; } ;
struct TYPE_6__ {int dtype; } ;
struct TYPE_7__ {TYPE_1__ tok; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (TYPE_4__*,char*,int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (char*,char**,int*,int) ;
 TYPE_4__* VAR_2 ;
 char* VAR_3 ;
 size_t* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*) ;
 TYPE_2__* FUNC_9 (TYPE_2__*,int ) ;
 int * VAR_7 ;
 int VAR_8 ;

void FUNC_10 (void) {
  if (VAR_3 == ((void*)0)) {
    return;
  }

  FILE *VAR_9 = FUNC_4 (VAR_3, "r");
  if (VAR_9 == ((void*)0)) {
    FUNC_5 (VAR_6, "Can't open file %s with queries.\n", VAR_3);
    FUNC_1 (1);
  }
  char VAR_10[VAR_0];
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
    if (FUNC_3 (VAR_10, VAR_0, VAR_9) == ((void*)0)) {
      break;
    }

    if (FUNC_8 (VAR_10) <= 1) {
      VAR_5--;
      continue;
    }
    VAR_10[FUNC_8 (VAR_10) - 1] = 0;

    static char *VAR_11[3];
    int VAR_12;
    FUNC_7 (VAR_10, VAR_11, &VAR_12, 2);
    if (VAR_12 == 0) {
      FUNC_5 (VAR_6, "Too much commas in query %s.\n", VAR_10);
      FUNC_1 (1);
    }

    VAR_4[VAR_5] = FUNC_6 (VAR_11[0]);
    if (VAR_4[VAR_5] == 0) {
      FUNC_5 (VAR_6, "Can't find type [%s].\n", VAR_11[0]);
      FUNC_1 (1);
    }

    char *VAR_13 = FUNC_2 (&VAR_2[VAR_5], VAR_11[1], &VAR_7[VAR_4[VAR_5]]);
    if (VAR_13 != ((void*)0)) {
      FUNC_5 (VAR_6, "Cannot compile expression [%s] : error [%s]\n", VAR_11[1], VAR_13);
      FUNC_1 (1);
    }

    if (FUNC_0(VAR_2[VAR_5].root->tok.dtype)) {
      FUNC_5 (VAR_6, "Cannot convert result of query[%s] (string) to int\n", VAR_11[1]);
      FUNC_1 (1);
    }
    VAR_2[VAR_5].root = FUNC_9 (VAR_2[VAR_5].root, VAR_8);
  }
  if (VAR_5 == VAR_1) {
    FUNC_5 (VAR_6, "Max number of stat_queries %d exceeded. Aborting.\n", VAR_1);
    FUNC_1 (1);
  }
}
