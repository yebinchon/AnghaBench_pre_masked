
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* first; } ;
typedef TYPE_1__ recommend_user_t ;
struct TYPE_5__ {int owner; int place; int type; int action; struct TYPE_5__* next; } ;
typedef TYPE_2__ recommend_item_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static recommend_item_t *FUNC_1 (int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  recommend_user_t *VAR_6 = (recommend_user_t *) FUNC_0 (VAR_1, 0);
  if (VAR_6 == ((void*)0)) {
    return ((void*)0);
  }
  int VAR_7 = VAR_0;
  recommend_item_t *VAR_8 = VAR_6->first;
  while (VAR_7 > 0 && VAR_8 != (recommend_item_t *) VAR_6) {
    if (VAR_8->owner == VAR_3 && VAR_8->place == VAR_4 && VAR_8->type == VAR_2 && VAR_8->action == VAR_5) {
      return VAR_8;
    }
    VAR_8 = VAR_8->next;
    VAR_7--;
  }
  return ((void*)0);
}
