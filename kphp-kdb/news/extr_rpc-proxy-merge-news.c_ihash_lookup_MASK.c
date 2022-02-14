
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; scalar_t__ day; int owner; int place; int user_id; int item; } ;
typedef TYPE_1__ item_t ;


 unsigned int VAR_0 ;
 scalar_t__* VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_0 (int) ;

int FUNC_1 (item_t *VAR_8, int VAR_9) {
  int VAR_10 = VAR_8->type, VAR_11 = VAR_9 ? VAR_10 : VAR_7[VAR_10];
  item_t *VAR_12;
  unsigned VAR_13 = VAR_11 * 17239;
  unsigned VAR_14 = VAR_11;

  if (VAR_8->day + VAR_3 > VAR_4) {
    VAR_4 = VAR_8->day + VAR_3;
  }

  if (VAR_9) {
    if (VAR_6[VAR_10] & 1) {
      VAR_13 += 17 * VAR_8->owner;
      VAR_14 += 239 * VAR_8->owner;
      VAR_9 |= 8;
    }
    if (VAR_6[VAR_10] & 2) {
      VAR_13 += 239 * VAR_8->place;
      VAR_14 += 17 * VAR_8->place;
      VAR_9 |= 16;
    }
    if (VAR_6[VAR_10] & 4) {
      VAR_13 += VAR_8->user_id * 239;
      VAR_14 += VAR_8->user_id * 10000;
      VAR_9 |= 2;
    }
    if (VAR_6[VAR_10] & 8) {
      VAR_13 += 666 * VAR_8->item;
      VAR_14 += 13 * VAR_8->item;
      VAR_9 |= 4;
    }
  } else {
    VAR_13 += VAR_8->user_id * 239;
    VAR_14 += VAR_8->user_id * 10000;
    VAR_9 |= 2;

    if (VAR_9 & 32) {
      VAR_13 += 666 * VAR_8->item;
      VAR_14 += 13 * VAR_8->item;
      VAR_9 |= 4;
    }
  }

  VAR_13 %= VAR_0;
  VAR_14 = (VAR_14 % (VAR_0 - 1)) + 1;

  int VAR_15 = 0;

  while (1) {
    if (VAR_1[VAR_13] != VAR_4 || !VAR_2[VAR_13]) {
      break;
    }
    VAR_12 = VAR_2[VAR_13];
    if (VAR_12->type == VAR_8->type || (!(VAR_9 & 1) && VAR_7[VAR_12->type] == VAR_11)) {
      if (!(VAR_9 & 2) || (VAR_8->user_id == VAR_12->user_id)) {
        if (!(VAR_9 & 4) || (VAR_8->item == VAR_12->item)) {
          if (!(VAR_9 & 8) || (VAR_8->owner == VAR_12->owner)) {
            if (!(VAR_9 & 16) || (VAR_8->place == VAR_12->place)) {
              return VAR_13;
            }
          }
        }
      }
    }
    VAR_13 += VAR_14;
    if (VAR_13 >= VAR_0) {
      VAR_13 -= VAR_0;
    }
    FUNC_0 (++VAR_15 <= VAR_5);
  }

  VAR_1[VAR_13] = VAR_4;
  VAR_2[VAR_13] = 0;
  return VAR_13;
}
