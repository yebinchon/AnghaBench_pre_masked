
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int message_id; int hc; int hashes; struct TYPE_3__* prev; } ;
typedef TYPE_1__ message_t ;
struct TYPE_4__ {int pos_to; int neg_to; int delmsg_cnt; int* delmsg_list; TYPE_1__* msgs; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_5 (void) {
  message_t *VAR_9;
  int VAR_10 = 0, VAR_11 = 0, VAR_12 = -0x7fffffff, VAR_13 = 0x7fffffff;

  VAR_3 = 0;

  FUNC_3();

  if (VAR_5) {
    for (VAR_9 = VAR_5->msgs; VAR_9; VAR_9 = VAR_9->prev) {
      if (VAR_9->message_id < 0 && VAR_9->message_id > VAR_12) {
 VAR_12 = VAR_9->message_id;
      }
      if (VAR_9->message_id > 0 && VAR_9->message_id < VAR_13) {
 VAR_13 = VAR_9->message_id;
      }
      if (FUNC_4 (VAR_9->hashes, VAR_9->hc)) {
 VAR_2[VAR_3++] = VAR_9->message_id;
 if (VAR_3 >= VAR_0) {
   return VAR_3;
 }
      }
    }
    VAR_11 = VAR_5->pos_to;
    VAR_10 = VAR_5->neg_to;
    if (VAR_8 > 0) {
      FUNC_2 (VAR_7, "recent_search(): %d messages found\n", VAR_3);
    }
  }

  VAR_4 = VAR_3;
  VAR_3 = 0;
  if (VAR_6 > 0) {
    FUNC_1 (VAR_11, VAR_10, VAR_13, VAR_12);
  }

  VAR_3 += VAR_4;
  VAR_1 = VAR_2;

  if (VAR_5 && VAR_5->delmsg_cnt) {
    int *VAR_14 = VAR_5->delmsg_list, *VAR_15 = VAR_14 + VAR_5->delmsg_cnt - 1;
    int VAR_16, VAR_17 = 0, VAR_18;
    if (VAR_8 > 0) {
      FUNC_2 (VAR_7, "user has %d deleted messages %d %d %d ..., pruning\n", VAR_5->delmsg_cnt, VAR_14[0], VAR_14[1], VAR_14[2]);
    }
    FUNC_0 (VAR_14);
    for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
      VAR_18 = VAR_2[VAR_16];
      if (VAR_18 < 0) {
 while (VAR_14 <= VAR_15 && *VAR_14 < VAR_18) { VAR_14++; }
 if (VAR_14 <= VAR_15 && *VAR_14 == VAR_18) {
   VAR_14++;
 } else {
   VAR_2[VAR_17++] = VAR_18;
 }
      } else {
 while (VAR_14 <= VAR_15 && *VAR_15 > VAR_18) { VAR_15--; }
 if (VAR_14 <= VAR_15 && *VAR_15 == VAR_18) {
   VAR_15--;
 } else {
   VAR_2[VAR_17++] = VAR_18;
 }
      }
    }
    if (VAR_8 > 0) {
      FUNC_2 (VAR_7, "pruned: resulting list contains %d, original %d\n", VAR_17, VAR_3);
    }
    VAR_3 = VAR_17;
  }

  return VAR_3;
}
