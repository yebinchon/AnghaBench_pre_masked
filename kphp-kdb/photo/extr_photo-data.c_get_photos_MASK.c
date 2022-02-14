
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int local_id; } ;
typedef TYPE_1__ user ;
typedef int predicate ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*,int,int,int,int,int const) ;
 int FUNC_3 (char*,...) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,size_t,int ,int) ;
 int FUNC_7 (int *,char*) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int * FUNC_9 (char*,size_t) ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_10 (TYPE_1__*,int,int,int,int *) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,int,int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_9 ;

int FUNC_14 (int VAR_10, int VAR_11, int VAR_12, int VAR_13, char *VAR_14, const int VAR_15, const int VAR_16, char *VAR_17, char **VAR_18) {
  FUNC_2 ("get photos: (uid = %d) (aid = %d) (offset = %d) (limit = %d) (reverse = %d)\n", VAR_10, VAR_11, VAR_12, VAR_13, VAR_15);
  FUNC_0 (!VAR_5 && !VAR_9);

  *VAR_18 = VAR_3;
  FUNC_4();

  user *VAR_19 = FUNC_1 (VAR_10);
  int VAR_20 = FUNC_7 (&VAR_8[VAR_2], VAR_14);

  if (VAR_19 == ((void*)0) || VAR_20 < 0) {
    return 0;
  }

  if (VAR_12 < 0) {
    VAR_12 = 0;
  }

  if (VAR_12 > VAR_0) {
    VAR_12 = VAR_0;
  }

  if (VAR_13 < 0) {
    VAR_13 = 0;
  }

  if (VAR_13 > VAR_0) {
    VAR_13 = VAR_0;
  }

  FUNC_8 (VAR_19, VAR_19->local_id, VAR_1);
  if (!FUNC_13 (VAR_19)) {
    return -2;
  }

  predicate *VAR_21 = FUNC_9 (VAR_17, VAR_2);

  int VAR_22, VAR_23, VAR_24, VAR_25;
  if (VAR_15) {
    VAR_24 = FUNC_12 (VAR_19, VAR_11, VAR_21);
    VAR_25 = VAR_24;

    if (VAR_24 < 0) {
      return 0;
    }

    VAR_12 = VAR_24 - VAR_12 - VAR_13;
    if (VAR_12 < 0) {
      VAR_13 += VAR_12;
      VAR_12 = 0;
    }
    if (VAR_13 < 0) {
      VAR_13 = 0;
    }
  } else {
    if (VAR_16 && VAR_21 != ((void*)0)) {
      VAR_24 = FUNC_12 (VAR_19, VAR_11, VAR_21);
      VAR_25 = VAR_24;

      if (VAR_24 < 0) {
        return 0;
      }

      VAR_24 -= VAR_12;

      if (VAR_24 < 0) {
        VAR_24 = 0;
      }
    } else {
      VAR_24 = FUNC_10 (VAR_19, VAR_11, VAR_12, VAR_13, VAR_21);
      VAR_25 = FUNC_11 (VAR_19, VAR_11);
    }
  }

  if (VAR_24 < 0) {
    return 0;
  }
  if (VAR_24 > VAR_13) {
    VAR_24 = VAR_13;
  }

  FUNC_3 ("a:%d:{", VAR_24 + VAR_16);
  if (VAR_16) {
    FUNC_3 ("s:5:\"count\";i:%d;", VAR_25);
  }
  for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
    if (VAR_15) {
      VAR_22 = VAR_24 - VAR_23 - 1 + VAR_12;
    } else {
      if (VAR_16 && VAR_21 != ((void*)0)) {
        VAR_22 = VAR_23 + VAR_12;
      } else {
        VAR_22 = VAR_23;
      }
    }

    int VAR_26 = FUNC_5 (&VAR_6[VAR_22]);

    if (VAR_20 == 0) {
      FUNC_3 ("i:%d;i:%d;", VAR_26, VAR_26);
    } else {
      FUNC_3 ("i:%d;%s", VAR_26, FUNC_6 (&VAR_6[VAR_22], VAR_2, VAR_7, VAR_20));
    }
  }
  FUNC_3 ("}");

  if (VAR_4) {
    return 0;
  }

  return 1;
}
