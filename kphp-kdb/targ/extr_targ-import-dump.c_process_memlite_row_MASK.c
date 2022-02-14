
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_birthday {int user_id; int day; int month; int year; int type; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 int VAR_29 ;
 struct lev_birthday* FUNC_4 (int) ;

void FUNC_5 (void) {
  struct lev_birthday *VAR_30;

  if (!FUNC_0(VAR_0[VAR_18])) {
    return;
  }

  VAR_29 = VAR_0[VAR_18];

  if (VAR_0[VAR_14] || VAR_0[VAR_15] || VAR_0[VAR_16]) {
    VAR_30 = FUNC_4 (sizeof (struct lev_birthday));
    VAR_30->type = VAR_2;
    VAR_30->user_id = VAR_0[VAR_18];
    VAR_30->day = VAR_0[VAR_14];
    VAR_30->month = VAR_0[VAR_15];
    VAR_30->year = VAR_0[VAR_16];
  }

  if (VAR_0[VAR_28] || VAR_0[VAR_27]) {
    FUNC_3 (VAR_11, VAR_0[VAR_28], VAR_0[VAR_27]);
  }

  if (VAR_0[VAR_19] || VAR_0[VAR_20]) {
    FUNC_3 (VAR_5, VAR_0[VAR_19], VAR_0[VAR_20]);
  }

  if (VAR_0[VAR_25]) {
    FUNC_2 (VAR_10, VAR_0[VAR_25]);
  }

  if (VAR_0[VAR_22]) {
    FUNC_2 (VAR_6, VAR_0[VAR_22]);
  }

  if (VAR_0[VAR_24]) {
    if (VAR_0[VAR_17]) {
      FUNC_3 (VAR_9, VAR_0[VAR_24], VAR_0[VAR_17]);
    } else {
      FUNC_2 (VAR_8, VAR_0[VAR_24]);
    }
  } else if (VAR_0[VAR_17]) {
    FUNC_2 (VAR_3, VAR_0[VAR_17]);
  }

  if (VAR_0[VAR_23] != 1) {
    FUNC_2 (VAR_7, VAR_0[VAR_23]);
  }

  if (VAR_0[VAR_26]) {
    FUNC_2 (VAR_4, VAR_0[VAR_26]);
  }

  if (VAR_1[VAR_21] > 4) {
    FUNC_1 (VAR_12 + 1);
  }

  VAR_13++;

}
