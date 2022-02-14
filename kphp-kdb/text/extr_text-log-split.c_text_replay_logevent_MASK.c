
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {void* e; void* d; int c; scalar_t__ timestamp; } ;
struct lev_add_message {int dummy; } ;


 int VAR_0 ;
 struct lev_generic VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,struct lev_generic*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (struct lev_generic*,struct lev_generic*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_4 (int,struct lev_generic*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 struct lev_generic* FUNC_5 (int) ;
 int FUNC_6 (struct lev_add_message*,int,scalar_t__) ;

int FUNC_7 (struct lev_generic *VAR_15, int VAR_16) {
  int VAR_17, VAR_18, VAR_19, VAR_20;
  static int VAR_21 = -1;

  if (VAR_16 < 4) {
    return -2;
  }

  VAR_17 = *((int *)VAR_15);
  VAR_18 = FUNC_1 (VAR_17, VAR_15, VAR_16);

  if (VAR_18 > VAR_16 || VAR_18 == -2) {
    return -2;
  }

  if (VAR_18 < 0) {
    FUNC_0 (VAR_9, "error %d reading binlog at position %d, write position %ld, type %08x (prev type %08x)\n", VAR_18, FUNC_2(), VAR_13 + VAR_11, VAR_17, VAR_21);
    return VAR_18;
  }

  if (!VAR_10 && VAR_17 != VAR_0 && VAR_6 == 0) {
    FUNC_0 (VAR_9, "error: first record must be a LEV_START\n");
    return -1;
  }

  VAR_20 = ((VAR_18 + 3) & -4);

  VAR_7 += VAR_20;
  VAR_8++;

  VAR_21 = VAR_17;

  if (FUNC_4 (VAR_17, VAR_15)) {
    if (VAR_1.timestamp) {
      FUNC_3 (FUNC_5 (8), &VAR_1, 8);
      VAR_13 += 8;
      VAR_14++;
      VAR_1.timestamp = 0;
    }
    if (VAR_12 >= 0 && VAR_2 && (VAR_19 = FUNC_6 ((struct lev_add_message *) VAR_15, VAR_18, VAR_12))) {
      VAR_13 += (VAR_19 + 3) & -4;
      VAR_14++;
      VAR_3++;
      return VAR_18;
    }
    struct lev_generic *VAR_22 = FUNC_5 (VAR_18);
    FUNC_3 (VAR_22, VAR_15, VAR_18);
    if (VAR_17 == VAR_0) {
      VAR_22->c = VAR_4;
      VAR_22->d = VAR_5;
      VAR_22->e = VAR_5+1;
    }
    VAR_13 += VAR_20;
    VAR_14++;
  }

  return VAR_18;
}
