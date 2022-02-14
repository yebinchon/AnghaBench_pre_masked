
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int extra_words; } ;


 TYPE_1__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int*) ;
 int* FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int,int*) ;
 int FUNC_10 (TYPE_1__*,int) ;

int FUNC_11 (int VAR_6, const char *VAR_7[]) {
  int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
  int VAR_13[3], VAR_14[4];
  int *VAR_15;
  if (VAR_6 >= 2 && !FUNC_7 (VAR_7[1], "-e")) {
    VAR_0.extra_words = 1;
  }
  FUNC_5 ("%d", &VAR_8);
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
    FUNC_5 ("%d", &VAR_9);
    switch (VAR_9) {
      case 1:
        FUNC_5 ("%d", &VAR_10);
        if (!FUNC_10 (&VAR_0, VAR_10)) {
          VAR_14[0] = VAR_10+3;
          FUNC_9 (&VAR_0, VAR_10, VAR_14);
        }
        break;
      case 2:
        FUNC_5 ("%d", &VAR_10);
        FUNC_4 (FUNC_10 (&VAR_0, VAR_10)?"YES":"NO");
        break;
      case 3:
        FUNC_5 ("%d", &VAR_10);
        VAR_15 = FUNC_6 (&VAR_0, VAR_1);
        VAR_10 = VAR_15 - VAR_1;
        for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
          FUNC_3 ("%d%c", VAR_1[VAR_12], '\n');
        break;
      case 4:
        FUNC_5 ("%d", &VAR_10);
        if (FUNC_10 (&VAR_0, VAR_10))
          FUNC_8 (&VAR_0, VAR_10);
        break;
    }

    if (FUNC_0 (&VAR_0) < 0) FUNC_3 ("BAD TREE\n");
  }
  FUNC_3 ("%d\n", FUNC_0 (&VAR_0));
  FUNC_2 (&VAR_0);
  VAR_15 = FUNC_6 (&VAR_0, VAR_1);
  VAR_10 = VAR_15 - VAR_1;
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
    FUNC_3 ("%d%c", VAR_1[VAR_12], '\n');
  FUNC_1 (&VAR_0, VAR_13);
  FUNC_3 ("leaves allocated %d\nnodes allocated %d\nleaves freed %d\nnodes freed %d\nleaves current %d\nnodes current %d\n", VAR_3, VAR_5, VAR_2, VAR_4, VAR_3 - VAR_2, VAR_5 - VAR_4);
  FUNC_3 ("leaves in tree %d\nnodes in tree %d\nnumbers in tree %d\n", VAR_13[1], VAR_13[2], VAR_13[0]);
  return 0;
}
