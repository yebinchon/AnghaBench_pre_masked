
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int*,int*,int*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int*) ;
 int* FUNC_6 (int ,int*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ,int) ;

int FUNC_10 () {
  int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  int VAR_11 = 0, VAR_12 = 0 , VAR_13 = 0;
  int *VAR_14;
  FUNC_5 ("%d", &VAR_6);
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
    FUNC_5 ("%d", &VAR_7);
    switch (VAR_7) {
      case 1:
        FUNC_5 ("%d", &VAR_8);
        if (!FUNC_9 (VAR_0, VAR_8))
          FUNC_8 (&VAR_0, VAR_8);
        break;
      case 2:
        FUNC_5 ("%d", &VAR_8);
        FUNC_4 (FUNC_9 (VAR_0, VAR_8)?"YES":"NO");
        break;
      case 3:
        FUNC_5 ("%d", &VAR_8);
        VAR_14 = FUNC_6 (VAR_0, VAR_1);
        VAR_8 = VAR_14 - VAR_1;
        for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
          FUNC_3 ("%d%c", VAR_1[VAR_10], '\n');
        break;
      case 4:
        FUNC_5 ("%d", &VAR_8);
        if (FUNC_9 (VAR_0, VAR_8))
          FUNC_7 (&VAR_0, VAR_8);
        break;
    }

    if (FUNC_0 (VAR_0, -1000000000, 1000000000) < 0) FUNC_3 ("BAD TREE\n");
  }
  FUNC_3 ("%d\n", FUNC_0 (VAR_0, -1000000000, 1000000000));
  FUNC_2 (VAR_0);
  VAR_14 = FUNC_6 (VAR_0, VAR_1);
  VAR_8 = VAR_14 - VAR_1;
  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
    FUNC_3 ("%d%c", VAR_1[VAR_10], '\n');
  FUNC_1 (VAR_0, &VAR_11, &VAR_12, &VAR_13);
  FUNC_3 ("leaves allocated %d\nnodes allocated %d\nleaves freed %d\nnodes freed %d\nleaves current %d\nnodes current %d\n", VAR_3, VAR_5, VAR_2, VAR_4, VAR_3 - VAR_2, VAR_5 - VAR_4);
  FUNC_3 ("leaves in tree %d\nnodes in tree %d\nnumbers in tree %d\n", VAR_11, VAR_12, VAR_13);
}
