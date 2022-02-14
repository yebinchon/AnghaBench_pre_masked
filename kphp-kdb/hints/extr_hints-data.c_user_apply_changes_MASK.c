
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_4__* chg_list_global; TYPE_4__* chg_list_cur; } ;
typedef TYPE_1__ user ;
struct TYPE_7__ {scalar_t__ number; int type; int x; struct TYPE_7__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int ) ;

void FUNC_3 (user *VAR_1) {
  FUNC_0 (VAR_1->flags & VAR_0);
  while (VAR_1->chg_list_cur->next != ((void*)0) || VAR_1->chg_list_global->next != ((void*)0)) {
    if (VAR_1->chg_list_global->next == ((void*)0) || (VAR_1->chg_list_cur->next != ((void*)0) &&
        VAR_1->chg_list_cur->next->number < VAR_1->chg_list_global->next->number)) {
      VAR_1->chg_list_cur = VAR_1->chg_list_cur->next;
      FUNC_1 (VAR_1, VAR_1->chg_list_cur);
    } else {
      VAR_1->chg_list_global = VAR_1->chg_list_global->next;
      int VAR_2 = VAR_1->chg_list_global->type;
      if (VAR_2 >= 256) {
        VAR_2 -= 256;
      } else if (VAR_2 < 0) {
        VAR_2 = -VAR_2;
      }
      if (FUNC_2 (VAR_1, VAR_2, VAR_1->chg_list_global->x)) {
        FUNC_1 (VAR_1, VAR_1->chg_list_global);
      }
    }
  }
}
