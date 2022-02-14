
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lev_news_recommend {int type; int action; int item_creation_time; int place; int owner; int user_id; } ;
struct TYPE_5__ {int total_items; TYPE_2__* first; } ;
typedef TYPE_1__ recommend_user_t ;
struct TYPE_6__ {int type; int action; scalar_t__ date; int item_creation_time; int place; int owner; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_2__ recommend_item_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4 (struct lev_news_recommend *VAR_4) {
  if (VAR_3 < VAR_2) {
    return 0;
  }
  recommend_user_t *VAR_5 = (recommend_user_t *) FUNC_0 (VAR_4->user_id, 1);
  int VAR_6 = VAR_4->type & 0xff;
  if (!VAR_5 || !VAR_0 || !FUNC_3 (VAR_6)) {
    return -1;
  }

  recommend_item_t *VAR_7, *VAR_8 = VAR_5->first;

  VAR_7 = FUNC_1 ();

  VAR_7->next = VAR_8;
  VAR_8->prev = VAR_7;
  VAR_7->prev = (recommend_item_t *) VAR_5;
  VAR_5->first = VAR_7;
  VAR_5->total_items++;

  VAR_7->owner = VAR_4->owner;
  VAR_7->place = VAR_4->place;

  VAR_7->item_creation_time = VAR_4->item_creation_time;
  VAR_7->date = VAR_3;
  VAR_7->type = VAR_6;
  VAR_7->action = VAR_4->action;

  VAR_1 += FUNC_2 (VAR_5);

  return 1;
}
