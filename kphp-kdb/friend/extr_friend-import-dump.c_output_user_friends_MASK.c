
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lev_setlist_long {int user_id; int num; int* L; int type; } ;
struct lev_setlist_cat_long {int user_id; int num; TYPE_1__* L; int type; } ;
struct lev_setlist_cat {int user_id; TYPE_1__* L; scalar_t__ type; } ;
struct lev_setlist {int user_id; int* L; scalar_t__ type; } ;
struct friend {int cat; int id; struct friend* next; } ;
struct TYPE_2__ {int id; int cat; } ;
typedef TYPE_1__ id_cat_pair_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_2 (int) ;

void FUNC_3 (int VAR_10, struct friend *VAR_11) {
  int VAR_12 = 0, VAR_13 = 0;
  struct friend *VAR_14 = VAR_11;
  if (!VAR_11) {
    return;
  }
  while (VAR_14) {
    if (VAR_14->cat != 1) {
      VAR_13++;
    }
    VAR_14 = VAR_14->next;
    VAR_12++;
    FUNC_0 (VAR_12 <= 1000000);
  }
  VAR_14 = VAR_11;
  if (VAR_12 > VAR_4) {
    if (VAR_9 > 0) {
      FUNC_1 (VAR_8, "warning: user %d has %d friends, only %d imported\n",
 VAR_10, VAR_12, VAR_4);
    }
    while (VAR_12 > VAR_4) {
      if (VAR_14->cat != 1) {
        VAR_13--;
      }
      VAR_14 = VAR_14->next;
      VAR_12--;
    }
  }
  VAR_6[VAR_12]++;
  if (!VAR_13) {
    int *VAR_15;

    if (VAR_12 >= 256) {
      struct lev_setlist_long *VAR_16 = FUNC_2 (12 + 4*VAR_12);
      VAR_16->type = VAR_3;
      VAR_16->user_id = VAR_10;
      VAR_16->num = VAR_12;
      VAR_15 = VAR_16->L + VAR_12;
    } else {
      struct lev_setlist *VAR_17 = FUNC_2 (8 + 4*VAR_12);
      VAR_17->type = VAR_0 + VAR_12;
      VAR_17->user_id = VAR_10;
      VAR_15 = VAR_17->L + VAR_12;
    }
    while (VAR_14) {
      *--VAR_15 = VAR_14->id;
      FUNC_0 (VAR_14->cat == 1);
      VAR_14 = VAR_14->next;
    }

    VAR_7++;

  } else {
    id_cat_pair_t *VAR_18;

    if (VAR_12 >= 256) {
      struct lev_setlist_cat_long *VAR_19 = FUNC_2 (12 + 8*VAR_12);
      VAR_19->type = VAR_2;
      VAR_19->user_id = VAR_10;
      VAR_19->num = VAR_12;
      VAR_18 = VAR_19->L + VAR_12;
    } else {
      struct lev_setlist_cat *VAR_20 = FUNC_2 (8 + 8*VAR_12);
      VAR_20->type = VAR_1 + VAR_12;
      VAR_20->user_id = VAR_10;
      VAR_18 = VAR_20->L + VAR_12;
    }
    while (VAR_14) {
      VAR_18--;
      VAR_18->id = VAR_14->id;
      VAR_18->cat = VAR_14->cat;
      VAR_14 = VAR_14->next;
    }

    VAR_5++;
  }
}
