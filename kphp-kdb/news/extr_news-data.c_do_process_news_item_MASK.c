
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_news_item {int user; int group; int owner; int place; int item; int user_id; int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lev_news_item* FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lev_news_item*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int ,int ) ;

int FUNC_5 (int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8) {
  if (FUNC_1 (VAR_2) < 0 || !VAR_1 || !FUNC_3 (VAR_3)) {
    return -1;
  }

  struct lev_news_item *VAR_9 = FUNC_0 (VAR_0 + VAR_3, 28, VAR_2);
  VAR_9->user = VAR_4;
  VAR_9->group = VAR_5;
  VAR_9->owner = VAR_6;
  VAR_9->place = VAR_7;
  VAR_9->item = VAR_8;

  FUNC_4 (2, "created news item type %08x, user_id=%d\n", VAR_9->type, VAR_9->user_id);

  return FUNC_2 (VAR_9);
}
