
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {void* e; void* d; int c; scalar_t__ timestamp; } ;


 int VAR_0 ;
 struct lev_generic VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,struct lev_generic*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct lev_generic*,struct lev_generic*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int,struct lev_generic*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct lev_generic* FUNC_5 (int) ;

int FUNC_6 (struct lev_generic *VAR_12, int VAR_13) {
  int VAR_14, VAR_15;
  static int VAR_16 = -1;

  if (VAR_13 < 4) {
    return -2;
  }

  VAR_14 = *((int *)VAR_12);
  VAR_15 = FUNC_1 (VAR_14, VAR_12, VAR_13);

  if (VAR_15 > VAR_13 || VAR_15 == -2) {
    return -2;
  }

  if (VAR_15 < 0) {
    FUNC_0 (VAR_7, "error %d reading binlog at position %d, write position %ld, type %08x (prev type %08x)\n", VAR_15, FUNC_2(), VAR_10 + VAR_9, VAR_14, VAR_16);
    return VAR_15;
  }

  if (!VAR_8 && VAR_14 != VAR_0 && VAR_4 == 0) {
    FUNC_0 (VAR_7, "error: first record must be a LEV_START\n");
    return -1;
  }

  VAR_5 += VAR_15;
  VAR_6++;

  VAR_16 = VAR_14;

  VAR_15 = ((VAR_15 + 3) & -4);

  if (FUNC_4 (VAR_14, VAR_12)) {
    if (VAR_1.timestamp) {
      FUNC_3 (FUNC_5 (8), &VAR_1, 8);
      VAR_10 += 8;
      VAR_11++;
      VAR_1.timestamp = 0;
    }
    struct lev_generic *VAR_17 = FUNC_5 (VAR_15);
    FUNC_3 (VAR_17, VAR_12, VAR_15);
    if (VAR_14 == VAR_0) {
      VAR_17->c = VAR_2;
      VAR_17->d = VAR_3;
      VAR_17->e = VAR_3+1;
    }
    VAR_10 += VAR_15;
    VAR_11++;
  }

  return VAR_15;
}
