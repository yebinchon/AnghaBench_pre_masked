
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct targ_extra {int mode; int limit; } ;
struct gather {int tot_num; TYPE_1__* List; struct targ_extra* extra; } ;
struct TYPE_5__ {scalar_t__ ad_id; scalar_t__ views; } ;
typedef TYPE_2__ gh_entry_t ;
struct TYPE_4__ {scalar_t__ bytes; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (struct gather*) ;
 scalar_t__ FUNC_6 (struct gather*) ;
 int FUNC_7 (scalar_t__*,int,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__*,int) ;
 int VAR_8 ;
 int FUNC_11 (struct targ_extra*,int) ;

void FUNC_12 (struct gather *VAR_9) {
  struct targ_extra *VAR_10 = VAR_9->extra;
  if (FUNC_6 (VAR_9) < 0) {
    FUNC_11 (VAR_10, sizeof (*VAR_10));
    FUNC_5 (VAR_9);
    return;
  }

  int VAR_11 = VAR_10->mode & 7;
  FUNC_0 (VAR_11);

  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_9->tot_num; VAR_12++) if (VAR_9->List[VAR_12].bytes >= 0) {
    int VAR_13 = FUNC_3 (VAR_9->List[VAR_12].data, VAR_9->List[VAR_12].bytes);
    if (VAR_13 < 0) {
      VAR_6 ++;
    }
  } else {
    if (VAR_8 >= 4) {
      FUNC_1 (VAR_7, "Dropping result %d (num = %ld)\n", VAR_12, VAR_9->List[VAR_12].bytes);
    }
  }

  FUNC_9 (VAR_3);
  FUNC_9 (VAR_0);
  int VAR_14 = -2;

  while (1) {
    gh_entry_t *VAR_15 = FUNC_4 ();
    if (!VAR_15) { break; }

    if (VAR_14 >= 0 && VAR_15->ad_id == VAR_2[VAR_14]) {
      VAR_2[VAR_14 + 1] += VAR_15->views;
    } else {
      VAR_14 += 2;
      VAR_2[VAR_14] = VAR_15->ad_id;
      VAR_2[VAR_14 + 1] = VAR_15->views;
      if (VAR_14 >= VAR_1) { break; }
    }
    FUNC_2 ();
  }

  if (VAR_14 < 0) {
    FUNC_9 (0);
  } else {
    VAR_14 += 2;
    if (VAR_10->mode & 1) {
      FUNC_7 (VAR_2, VAR_14 / 2, 8, (VAR_10->mode & 4) ? VAR_4 : VAR_5);
    }
    VAR_14 /= 2;
    if (VAR_14 > VAR_10->limit) {
      VAR_14 = VAR_10->limit;
    }
    FUNC_9 (VAR_14);
    FUNC_10 (VAR_2, VAR_14 * 8);
  }
  FUNC_8 ();
  FUNC_11 (VAR_10, sizeof (*VAR_10));
  FUNC_5 (VAR_9);
  return;
}
