
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int local_id; } ;
typedef TYPE_1__ user ;
typedef int predicate ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,int,int) ;
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
 int FUNC_10 (TYPE_1__*,int,int,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_9 ;

int FUNC_15 (int VAR_10, int VAR_11, int VAR_12, char *VAR_13, const int VAR_14, const int VAR_15, char *VAR_16, char **VAR_17) {
  FUNC_2 ("get_albums (uid = %d) (fields = %s) (offset = %d) (limit = %d)\n", VAR_10, VAR_13, VAR_11, VAR_12);
  FUNC_0 (!VAR_5 && !VAR_9);

  *VAR_17 = VAR_3;
  FUNC_4();

  user *VAR_18 = FUNC_1 (VAR_10);
  int VAR_19 = FUNC_7 (&VAR_8[VAR_0], VAR_13);

  if (VAR_18 == ((void*)0) || VAR_19 < 0) {
    return 0;
  }

  if (VAR_11 < 0) {
    VAR_11 = 0;
  }

  if (VAR_11 > VAR_1) {
    VAR_11 = VAR_1;
  }

  if (VAR_12 <= 0) {
    VAR_12 = 0;
  }

  if (VAR_12 > VAR_1) {
    VAR_12 = VAR_1;
  }

  FUNC_8 (VAR_18, VAR_18->local_id, VAR_2);
  if (!FUNC_14 (VAR_18)) {
    return -2;
  }

  predicate *VAR_20 = FUNC_9 (VAR_16, VAR_0);

  int VAR_21, VAR_22, VAR_23, VAR_24;
  if (VAR_14) {
    VAR_23 = FUNC_12 (VAR_18, VAR_20);
    VAR_24 = VAR_23;
    FUNC_0 (VAR_23 >= 0);

    VAR_11 = VAR_23 - VAR_11 - VAR_12;
    if (VAR_11 < 0) {
      VAR_12 += VAR_11;
      VAR_11 = 0;
    }
    if (VAR_12 < 0) {
      VAR_12 = 0;
    }
  } else {
    if (VAR_15 && VAR_20 != ((void*)0)) {
      VAR_23 = FUNC_12 (VAR_18, VAR_20);
      VAR_24 = VAR_23;
      FUNC_0 (VAR_23 >= 0);

      VAR_23 -= VAR_11;

      if (VAR_23 < 0) {
        VAR_23 = 0;
      }
    } else {
      VAR_23 = FUNC_10 (VAR_18, VAR_11, VAR_12, VAR_20);
      VAR_24 = FUNC_11 (VAR_18);
      FUNC_0 (VAR_23 >= 0);
    }
  }

  if (VAR_23 > VAR_12) {
    VAR_23 = VAR_12;
  }

  FUNC_3 ("a:%d:{", VAR_23 + VAR_15);
  if (VAR_15) {
    FUNC_3 ("s:5:\"count\";i:%d;", VAR_24);
  }
  for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
    if (VAR_14) {
      VAR_21 = VAR_23 - VAR_22 - 1 + VAR_11;
    } else {
      if (VAR_15 && VAR_20 != ((void*)0)) {
        VAR_21 = VAR_22 + VAR_11;
      } else {
        VAR_21 = VAR_22;
      }
    }

    int VAR_25 = FUNC_5 (&VAR_6[VAR_21]);

    if (VAR_19 == 0) {
      FUNC_3 ("i:%d;i:%d;", VAR_25, VAR_15 ? FUNC_13 (VAR_18, VAR_25) : VAR_25);
    } else {
      FUNC_3 ("i:%d;%s", VAR_25, FUNC_6 (&VAR_6[VAR_21], VAR_0, VAR_7, VAR_19));
    }
  }
  FUNC_3 ("}");

  if (VAR_4) {
    return 0;
  }

  return 1;
}
