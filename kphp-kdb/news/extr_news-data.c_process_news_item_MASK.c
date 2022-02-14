
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tot_items; TYPE_2__* first; } ;
typedef TYPE_1__ user_t ;
struct lev_news_item {int type; scalar_t__ item; scalar_t__ place; scalar_t__ owner; scalar_t__ user; scalar_t__ group; int user_id; } ;
struct TYPE_7__ {scalar_t__ date; int type; scalar_t__ item; scalar_t__ place; scalar_t__ owner; scalar_t__ user; scalar_t__ group; int random_tag; struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_2__ item_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int ,int,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6 (struct lev_news_item *VAR_4) {
  if (VAR_3 < VAR_2) {
    return 0;
  }
  user_t *VAR_5 = FUNC_0 (VAR_4->user_id, 1);
  int VAR_6 = VAR_4->type & 0xff;
  if (!VAR_5 || !VAR_0 || !FUNC_4 (VAR_6)) {
    return -1;
  }






  item_t *VAR_7, *VAR_8 = VAR_5->first;

  if (VAR_8 != (item_t *) VAR_5 && VAR_8->date == VAR_3 && VAR_8->type == VAR_6 &&
      VAR_8->item == VAR_4->item && VAR_8->place == VAR_4->place && VAR_8->owner == VAR_4->owner &&
      VAR_8->user == VAR_4->user && VAR_8->group == VAR_4->group) {
    return 0;
  }

  VAR_7 = FUNC_2 ();

  VAR_7->next = VAR_8;
  VAR_8->prev = VAR_7;
  VAR_7->prev = (item_t *) VAR_5;
  VAR_5->first = VAR_7;
  VAR_5->tot_items++;

  VAR_7->type = VAR_6;
  VAR_7->date = VAR_3;
  VAR_7->random_tag = FUNC_1() & 0x7fffffff;

  VAR_7->user = VAR_4->user;
  VAR_7->group = VAR_4->group;
  VAR_7->owner = VAR_4->owner;
  VAR_7->place = VAR_4->place;
  VAR_7->item = VAR_4->item;

  FUNC_5 (2, "new record stored: user_id=%d type=%d date=%d tag=%d\n", VAR_4->user_id, VAR_7->type, VAR_7->date, VAR_7->random_tag);

  VAR_1 += FUNC_3 (VAR_5);

  return 1;
}
