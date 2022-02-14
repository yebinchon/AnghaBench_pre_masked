
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct targ_extra {int mode; int limit; } ;
struct gather {int tot_num; TYPE_1__* List; struct targ_extra* extra; } ;
struct TYPE_5__ {int views; int ad_id; } ;
typedef TYPE_2__ gh_entry_t ;
struct TYPE_4__ {scalar_t__ bytes; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (struct gather*) ;
 scalar_t__ FUNC_6 (struct gather*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 () ;
 int* FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (struct targ_extra*,int) ;

void FUNC_11 (struct gather *VAR_5) {
  struct targ_extra *VAR_6 = VAR_5->extra;
  if (FUNC_6 (VAR_5) < 0) {
    FUNC_10 (VAR_6, sizeof (*VAR_6));
    FUNC_5 (VAR_5);
    return;
  }

  int VAR_7 = (VAR_6->mode & 7) | 16;
  if (!(VAR_7 & 1)) {
    VAR_7 |= 8;
  }
  FUNC_0 (VAR_7);

  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_5->tot_num; VAR_8++) if (VAR_5->List[VAR_8].bytes >= 0) {
    int VAR_9 = FUNC_3 (VAR_5->List[VAR_8].data, VAR_5->List[VAR_8].bytes);
    if (VAR_9 < 0) {
      VAR_2 ++;
    }
  } else {
    if (VAR_4 >= 4) {
      FUNC_1 (VAR_3, "Dropping result %d (num = %ld)\n", VAR_8, VAR_5->List[VAR_8].bytes);
    }
  }

  FUNC_9 (VAR_1);
  FUNC_9 (VAR_0);
  int *VAR_10 = FUNC_8 (4);
  *VAR_10 = 0;


  while (1) {
    if (*VAR_10 >= VAR_6->limit) { break; }
    gh_entry_t *VAR_11 = FUNC_4 ();
    if (!VAR_11) { break; }

    FUNC_9 (VAR_11->ad_id);
    if (!(VAR_7 & 8)) {
      FUNC_9 (VAR_11->views);
    }
    (*VAR_10) ++;
    FUNC_2 ();
  }
  FUNC_7 ();
  FUNC_10 (VAR_6, sizeof (*VAR_6));
  FUNC_5 (VAR_5);
  return;
}
