
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hashset_ll {int dummy; } ;
struct TYPE_7__ {TYPE_4__* cur; } ;
typedef TYPE_1__ iheap_en_t ;
struct TYPE_8__ {int item_id; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 long long FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 scalar_t__ FUNC_6 (struct hashset_ll*,long long const) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int,int ) ;
 int VAR_3 ;

int FUNC_9 (struct hashset_ll *VAR_4, int VAR_5, int VAR_6) {
  VAR_1 = 0;
  FUNC_0 ();

  if (!FUNC_8 (VAR_0, VAR_3, 1, 0)) {
    return 0;
  }

  iheap_en_t *VAR_7 = VAR_0;
  while (VAR_7->cur) {
    const long long VAR_8 = FUNC_4 (VAR_7->cur);
    if (VAR_8 && FUNC_6 (VAR_4, VAR_8)) {
      int VAR_9 = FUNC_5 (VAR_7->cur, VAR_5);
      if (VAR_9 < VAR_6) {
        VAR_2++;
        FUNC_1 (VAR_7->cur->item_id, VAR_5, VAR_6);
        FUNC_2 ();
      }
    }
    FUNC_7 (VAR_7);
  }
  FUNC_3 ();
  return 1;
}
