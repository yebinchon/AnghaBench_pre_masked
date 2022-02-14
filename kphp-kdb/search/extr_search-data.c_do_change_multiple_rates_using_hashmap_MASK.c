
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hashmap_int_int {TYPE_1__* h; } ;
struct TYPE_8__ {TYPE_5__* cur; } ;
typedef TYPE_2__ iheap_en_t ;
struct TYPE_9__ {int item_id; } ;
struct TYPE_7__ {int value; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_5__*,int) ;
 scalar_t__ FUNC_5 (struct hashmap_int_int*,int,int*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int,int ) ;
 int VAR_3 ;

int FUNC_8 (struct hashmap_int_int *VAR_4, int VAR_5) {
  VAR_1 = 0;
  FUNC_0 ();

  if (!FUNC_7 (VAR_0, VAR_3, 1, 0)) {
    return 0;
  }

  iheap_en_t *VAR_6 = VAR_0;
  while (VAR_6->cur) {
    int VAR_7;
    int VAR_8 = FUNC_4 (VAR_6->cur, VAR_5);
    if (VAR_8 && FUNC_5 (VAR_4, VAR_8, &VAR_7)) {
      int VAR_9 = VAR_4->h[VAR_7].value;
      if (VAR_8 != VAR_9) {
        VAR_2++;
        FUNC_1 (VAR_6->cur->item_id, VAR_5, VAR_9);
        FUNC_2 ();
      }
    }
    FUNC_6 (VAR_6);
  }
  FUNC_3 ();
  return 1;
}
