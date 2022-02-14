
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int* FUNC_1 (int*,int*,scalar_t__,scalar_t__,int*,int*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

int FUNC_2 (int VAR_11, int VAR_12, int VAR_13, int VAR_14) {
  int VAR_15, VAR_16, VAR_17;

  VAR_7 = 0;
  VAR_5 = 0;

  if (!VAR_4) {
    if (VAR_10) {
      FUNC_0 (VAR_9, "empty query\n");
    }
    return 0;
  }

  if (VAR_10) {
    for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
      FUNC_0 (VAR_9, "%d *%ld .. ", VAR_1[VAR_15], VAR_2[VAR_15]);
    }
    FUNC_0 (VAR_9, "\n");
  }

  VAR_5 = VAR_3[0];
  VAR_7 = VAR_2[0];

  if (VAR_2[0] > VAR_0 - VAR_8) {
    if (VAR_10) {
      FUNC_0 (VAR_9, "list too long: %ld entries for %d\n", VAR_2[0], VAR_1[0]);
    }
    return -1;
  }

  VAR_16 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
    VAR_17 = VAR_5[VAR_15];
    if ((VAR_17 > VAR_11 && VAR_17 < VAR_13) || (VAR_17 < VAR_12 && VAR_17 > VAR_14)) {
      VAR_6[VAR_8 + VAR_16++] = VAR_17;
    }
  }

  if (VAR_10) {
    FUNC_0 (VAR_9, "list pruned, only %d entries out of %d remained\n", VAR_16, VAR_7);
  }

  VAR_5 = VAR_6 + VAR_8;
  VAR_7 = VAR_16;


  if (!VAR_7) {
    if (VAR_10) {
      FUNC_0 (VAR_9, "empty list for %d\n", VAR_1[0]);
    }
    return 0;
  }

  if (VAR_4 == 1) {
    if (VAR_10) {
      FUNC_0 (VAR_9, "one-word query, loaded %ld entries for %d\n", VAR_2[0], VAR_1[0]);
    }
    return VAR_7;
  }

  VAR_5 = VAR_3[0];
  VAR_7 = VAR_2[0];
  for (VAR_15 = 1; VAR_15 < VAR_4; VAR_15++) {
    VAR_7 = FUNC_1 (VAR_5, VAR_5+VAR_7, VAR_3[VAR_15], VAR_3[VAR_15]+VAR_2[VAR_15], VAR_6+VAR_8, VAR_6+VAR_0) - VAR_6 - VAR_8;
    VAR_5 = VAR_6 + VAR_8;
    if (VAR_10 > 0) {
      FUNC_0 (VAR_9, "intersect_lists(): %d entries in result\n", VAR_7);
    }
    if (!VAR_7) return 0;
  }

  return VAR_7;

}
