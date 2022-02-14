
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hints_extra {int limit; scalar_t__ op; scalar_t__ sent_op; } ;
struct gather {int tot_num; struct hints_extra* extra; TYPE_1__* List; } ;
struct TYPE_5__ {int rating; int object_id; int type; } ;
typedef TYPE_2__ gh_entry_t ;
struct TYPE_4__ {scalar_t__ bytes; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct hints_extra*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (struct gather*) ;
 scalar_t__ FUNC_6 (struct gather*) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int* FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,char*,int,scalar_t__) ;

void FUNC_12 (struct gather *VAR_3) {
  struct hints_extra *VAR_4 = VAR_3->extra;
  FUNC_0 ();
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_3->tot_num; VAR_5++) {
    if (VAR_3->List[VAR_5].bytes >= 0) {
      int VAR_6 = FUNC_3 (VAR_3->List[VAR_5].data, VAR_3->List[VAR_5].bytes);
      if (VAR_6 < 0) {
        VAR_2++;
      }
    } else {
      FUNC_11 (4, "Dropping result %d (num = %d)\n", VAR_5, VAR_3->List[VAR_5].bytes);
    }
  }

  if (FUNC_6 (VAR_3)) {
    FUNC_10 (VAR_1);
    FUNC_10 (VAR_0);
    int *VAR_7 = FUNC_9 (4);

    for (VAR_5 = 0; VAR_5 < VAR_4->limit; VAR_5++) {
      gh_entry_t *VAR_8 = FUNC_4 ();
      if (VAR_8 == ((void*)0)) {
        break;
      }

      FUNC_10 (VAR_8->type);
      FUNC_10 (VAR_8->object_id);
      if (VAR_4->op == VAR_4->sent_op) {
        FUNC_7 (VAR_8->rating);
      }

      FUNC_2 ();
    }

    *VAR_7 = VAR_5;
    FUNC_8 ();
  }

  FUNC_1 (VAR_3->extra);
  FUNC_5 (VAR_3);
  return;
}
