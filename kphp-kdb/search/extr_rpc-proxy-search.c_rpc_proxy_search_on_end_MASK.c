
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct search_extra {int mode; int limit; scalar_t__ attempt; } ;
struct gather {int tot_num; struct search_extra* extra; TYPE_1__* List; scalar_t__ saved_query_len; } ;
struct TYPE_5__ {long long hash; int owner_id; int item_id; int value; } ;
typedef TYPE_2__ gh_entry_t ;
struct TYPE_4__ {scalar_t__ bytes; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct gather*) ;
 int FUNC_1 (int) ;
 long double VAR_6 ;
 int FUNC_2 (int ,char*,int,scalar_t__) ;
 int FUNC_3 (struct search_extra*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (long long) ;
 int FUNC_9 (struct gather*) ;
 int FUNC_10 (struct gather*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 () ;
 int* FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (long long) ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_15 (struct gather *VAR_11) {
  struct search_extra *VAR_12 = VAR_11->extra;
  int VAR_13 = VAR_12->mode;
  int VAR_14 = VAR_12->limit;
  FUNC_1 (VAR_13);
  int VAR_15;
  if ((VAR_13 & VAR_1) && VAR_11->saved_query_len && VAR_12->attempt == 0 && FUNC_0 (VAR_11) > 0) {
    VAR_12->attempt ++;
    return;
  }
  for (VAR_15 = 0; VAR_15 < VAR_11->tot_num; VAR_15++) if (VAR_11->List[VAR_15].bytes >= 0) {
    int VAR_16 = FUNC_5 (VAR_11->List[VAR_15].data, VAR_11->List[VAR_15].bytes);
    if (VAR_16 < 0) {
      VAR_7 ++;
    }

  } else {
    if (VAR_10 >= 4) {
      FUNC_2 (VAR_8, "Dropping result %d (num = %ld)\n", VAR_15, VAR_11->List[VAR_15].bytes);
    }
  }

  if (!FUNC_10 (VAR_11)) {
    FUNC_3 (VAR_11->extra);
    FUNC_9 (VAR_11);
    return;
  }

  FUNC_13 (VAR_5);
  FUNC_13 (VAR_3);
  FUNC_13 (VAR_4);
  int *VAR_17 = FUNC_12 (4);

  if (VAR_13 & VAR_0) {
    FUNC_7 (VAR_14);
  }
  int VAR_18 = 0;

  for (VAR_15 = 0; VAR_15 < VAR_14; ) {
    gh_entry_t *VAR_19 = FUNC_6 ();
    if (!VAR_19) { break; }
    if (VAR_13 & VAR_0) {
      long long VAR_20 = VAR_19->hash;
      if (!FUNC_8 (VAR_20)) {

        VAR_18++;
        FUNC_4 ();
        continue;
      }
    }

    if (VAR_3 == 2) {
      FUNC_13 (VAR_19->owner_id);
    }
    FUNC_13 (VAR_19->item_id);
    if (VAR_13 & VAR_2) {
      FUNC_13 (VAR_19->value);
    }
    if (VAR_13 & VAR_0) {
      FUNC_14 (VAR_19->hash);
    }
    FUNC_4 ();
    VAR_15++;
  }

  if ((VAR_13 & VAR_0) && VAR_15) {
    long double VAR_21 = ((long double) (VAR_15 + VAR_18)) / VAR_15;
    VAR_6 += VAR_21;
    VAR_9++;
  }

  *VAR_17 = VAR_15;
  FUNC_11 ();
  FUNC_3 (VAR_11->extra);
  FUNC_9 (VAR_11);
  return;
}
