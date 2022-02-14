
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int b; void* e; void* d; int c; scalar_t__ timestamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lev_generic VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,struct lev_generic*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (struct lev_generic*,struct lev_generic*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_6 (int,struct lev_generic*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct lev_generic* FUNC_7 (int) ;

int FUNC_8 (struct lev_generic *VAR_16, int VAR_17) {
  int VAR_18, VAR_19;
  static int VAR_20 = -1;

  if (VAR_17 < 4) {
    return -2;
  }

  VAR_18 = *((int *)VAR_16);
  VAR_19 = FUNC_2 (VAR_18, VAR_16, VAR_17);

  if (VAR_19 > VAR_17 || VAR_19 == -2) {
    return -2;
  }

  if (VAR_19 < 0) {
    if (VAR_19 != -13) {
      FUNC_1 (VAR_10, "error %d reading binlog at position %d, write position %ld, type %08x (prev type %08x)\n", VAR_19, FUNC_3(), VAR_13 + VAR_12, VAR_18, VAR_20);
    }
    return VAR_19;
  }

  if (!VAR_11 && VAR_18 != VAR_0 && VAR_7 == 0) {
    FUNC_1 (VAR_10, "error: first record must be a LEV_START\n");
    return -1;
  }

  if (VAR_6) {
    FUNC_1 (VAR_10, "error: first record in a binlog must be LEV_START\n");
    FUNC_0 (1);
  }

  VAR_19 = ((VAR_19 + 3) & -4);

  VAR_8 += VAR_19;
  VAR_9++;

  VAR_20 = VAR_18;

  if (FUNC_6 (VAR_18, VAR_16)) {
    if (VAR_3.timestamp) {
      FUNC_4 (FUNC_7 (8), &VAR_3, 8);
      VAR_13 += 8;
      VAR_14++;
      VAR_3.timestamp = 0;
    }
    struct lev_generic *VAR_21 = FUNC_7 (VAR_19);
    FUNC_4 (VAR_21, VAR_16, VAR_19);
    if (VAR_18 == VAR_0) {
      VAR_21->c = VAR_4;
      VAR_21->d = VAR_5;
      VAR_21->e = VAR_5+1;
    } else if (VAR_18 == VAR_2) {
      VAR_15++;
      VAR_21->b = FUNC_5 (VAR_21->b);
    } else if (VAR_18 == VAR_1) {
      int VAR_22, *VAR_23 = (int *) VAR_21;
      for (VAR_22 = 2; VAR_22 < 7; VAR_22++) {
        VAR_23[VAR_22] = FUNC_5 (VAR_23[VAR_22]);
      }
    }
    VAR_13 += VAR_19;
    VAR_14++;
  }

  return VAR_19;
}
