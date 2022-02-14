
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int user_id; int date; int tag; int user; int group; int owner; int place; int item; struct TYPE_3__* gnext; } ;
typedef TYPE_1__ item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (item_t *VAR_10, int VAR_11, int VAR_12) {
  item_t *VAR_13;
  int VAR_14 = VAR_10->type;
  FUNC_0 (VAR_14 >= 0 && VAR_14 < 32);
  int VAR_15;

  if (!VAR_10->gnext) {
    int VAR_16 = VAR_6 | ((VAR_12 <= 0) ? VAR_8 : 0) | VAR_0 | VAR_5 | VAR_7 | VAR_1 | VAR_3 | VAR_4 | VAR_2;
    FUNC_2 (VAR_16);
    FUNC_2 (1);
    FUNC_2 (1);
    FUNC_2 (VAR_10->type);
    if (VAR_12 <= 0) {
      FUNC_2 (VAR_10->user_id);
    }
    FUNC_2 (VAR_10->date);
    FUNC_2 (VAR_10->tag);
    FUNC_2 (VAR_10->user);
    FUNC_2 (VAR_10->group);
    FUNC_2 (VAR_10->owner);
    FUNC_2 (VAR_10->place);
    FUNC_2 (VAR_10->item);
    return 1;
  }
  int VAR_17 = 0;
  for (VAR_13 = VAR_10; VAR_13; VAR_13 = VAR_13->gnext) {
    VAR_17 ++;
  }

  int *VAR_18 = FUNC_1 (4);
  FUNC_2 (VAR_17);
  if (VAR_17 > VAR_11) { VAR_17 = VAR_11; }
  FUNC_2 (VAR_17);

  *VAR_18 = VAR_6 | VAR_0 | VAR_5;
  FUNC_2 (VAR_10->type);
  if (VAR_12 <= 0) {
    if (VAR_9[VAR_14] & 4) {
      *VAR_18 |= VAR_8;
      FUNC_2 (VAR_10->user_id);
    } else {
      *VAR_18 |= 2 * VAR_8;
      for (VAR_13 = VAR_10, VAR_15 = 0; VAR_15 < VAR_17; VAR_13 = VAR_13->gnext, VAR_15 ++) {
        FUNC_2 (VAR_13->user_id);
      }
    }
  }

  FUNC_2 (VAR_10->date);
  FUNC_2 (VAR_10->tag);

  *VAR_18 |= (2 * VAR_7);
  for (VAR_13 = VAR_10, VAR_15 = 0; VAR_15 < VAR_17; VAR_13 = VAR_13->gnext, VAR_15 ++) {
    FUNC_2 (VAR_13->user);
  }

  *VAR_18 |= (2 * VAR_1);
  for (VAR_13 = VAR_10, VAR_15 = 0; VAR_15 < VAR_17; VAR_13 = VAR_13->gnext, VAR_15 ++) {
    FUNC_2 (VAR_13->group);
  }

  if (VAR_9[VAR_14] & 1) {
    *VAR_18 |= VAR_3;
    FUNC_2 (VAR_10->owner);
  } else {
    *VAR_18 |= (2 * VAR_3);
    for (VAR_13 = VAR_10, VAR_15 = 0; VAR_15 < VAR_17; VAR_13 = VAR_13->gnext, VAR_15 ++) {
      FUNC_2 (VAR_13->owner);
    }
  }

  if (VAR_9[VAR_14] & 2) {
    *VAR_18 |= VAR_4;
    FUNC_2 (VAR_10->place);
  } else {
    *VAR_18 |= (2 * VAR_4);
    for (VAR_13 = VAR_10, VAR_15 = 0; VAR_15 < VAR_17; VAR_13 = VAR_13->gnext, VAR_15 ++) {
      FUNC_2 (VAR_13->place);
    }
  }

  if (VAR_9[VAR_14] & 8) {
    *VAR_18 |= VAR_2;
    FUNC_2 (VAR_10->item);
  } else {
    *VAR_18 |= (2 * VAR_2);
    for (VAR_13 = VAR_10, VAR_15 = 0; VAR_15 < VAR_17; VAR_13 = VAR_13->gnext, VAR_15 ++) {
      FUNC_2 (VAR_13->item);
    }
  }
  return 1;
}
