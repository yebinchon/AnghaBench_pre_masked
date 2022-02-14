
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lev_news_comment {int type; int item; int group; int user; int place; int owner; } ;
struct TYPE_6__ {int place; int owner; int type; int tot_comments; TYPE_2__* first; } ;
typedef TYPE_1__ place_t ;
struct TYPE_7__ {int random_tag; scalar_t__ date; int item; int group; int user; struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_2__ comment_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 TYPE_1__* FUNC_1 (int,int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,char*,int ,int ,int ,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6 (struct lev_news_comment *VAR_5) {
  if (VAR_4 < VAR_3) {
    return 0;
  }
  int VAR_6 = VAR_5->type & 0xff;
  if (!FUNC_0 (VAR_6, VAR_5->owner, VAR_5->place) || !VAR_0) {
    return -1;
  }
  if (VAR_1) {
    return 0;
  }

  place_t *VAR_7 = FUNC_1 (VAR_6, VAR_5->owner, VAR_5->place, 1);

  comment_t *VAR_8 = FUNC_3 (), *VAR_9 = VAR_7->first;

  VAR_8->next = VAR_9;
  VAR_9->prev = VAR_8;
  VAR_8->prev = (comment_t *) VAR_7;
  VAR_7->first = VAR_8;
  VAR_7->tot_comments++;

  VAR_8->date = VAR_4;
  VAR_8->random_tag = FUNC_2() & 0x7fffffff;

  VAR_8->user = VAR_5->user;
  VAR_8->group = VAR_5->group;
  VAR_8->item = VAR_5->item;

  FUNC_5 (2, "new comment stored: place=%d:%d:%d item=%d date=%d tag=%d\n", VAR_7->type, VAR_7->owner, VAR_7->place, VAR_8->item, VAR_8->date, VAR_8->random_tag);

  VAR_2 += FUNC_4 (VAR_7);
  return 1;
}
