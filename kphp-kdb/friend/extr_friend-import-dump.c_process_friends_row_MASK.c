
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_add_friend {int user_id; int friend_id; int cat; int type; } ;
struct friend {int id; int cat; struct friend* next; } ;


 struct friend** VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 struct friend* FUNC_1 (int) ;
 int VAR_8 ;
 struct lev_add_friend* FUNC_2 (int) ;

void FUNC_3 (void) {
  VAR_8 = VAR_1[VAR_6];
  int VAR_9 = VAR_1[VAR_7];
  int VAR_10 = FUNC_0 (VAR_8);

  if (VAR_10 < 0 || VAR_9 <= 0) {
    return;
  }

  if (VAR_1[VAR_5] > 0) {
    struct friend *VAR_11 = FUNC_1 (sizeof (struct friend));
    VAR_11->next = VAR_0[VAR_10];
    VAR_11->id = VAR_9;
    VAR_11->cat = (VAR_1[VAR_4] & 0x1fe) | 1;
    VAR_0[VAR_10] = VAR_11;

    VAR_3++;
  } else if (!VAR_1[VAR_5]) {
    struct lev_add_friend *VAR_12 = FUNC_2 (16);
    VAR_12->type = VAR_2;
    VAR_12->user_id = VAR_8;
    VAR_12->friend_id = VAR_9;
    VAR_12->cat = (VAR_1[VAR_4] & 0x1fe) | 1;

    VAR_3++;
  }

}
