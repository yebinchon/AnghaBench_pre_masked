
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int total_items; TYPE_2__* last; } ;
typedef TYPE_1__ recommend_user_t ;
struct TYPE_6__ {int date; struct TYPE_6__* next; struct TYPE_6__* prev; } ;
typedef TYPE_2__ recommend_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2 (recommend_user_t *VAR_4) {
  FUNC_0 (VAR_1);
  int VAR_5 = VAR_4->total_items, VAR_6;
  if (!VAR_5) {
    return 0;
  }
  VAR_6 = VAR_3 - (VAR_2 + 1) * 86400;

  recommend_item_t *VAR_7 = VAR_4->last, *VAR_8;
  const int VAR_9 = VAR_5;
  while (VAR_7 != (recommend_item_t *) VAR_4 && (VAR_5 > VAR_0 || VAR_7->date <= VAR_6)) {
    VAR_8 = VAR_7->prev;
    FUNC_1 (VAR_7);
    VAR_5--;
    VAR_7 = VAR_8;
  }
  VAR_4->last = VAR_7;
  VAR_7->next = (recommend_item_t *) VAR_4;
  VAR_4->total_items = VAR_5;
  FUNC_0 (VAR_4->total_items >= 0);
  return VAR_9 - VAR_5;
}
