
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_news_notify {int user; int owner; int place; int item; int user_id; int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lev_news_notify* FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lev_news_notify*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int ,int ) ;

int FUNC_5 (int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  if (FUNC_1 (VAR_2) < 0 || !VAR_1 || !FUNC_3 (VAR_3)) {
    return -1;
  }

  struct lev_news_notify *VAR_8 = FUNC_0 (VAR_0 + VAR_3, sizeof (struct lev_news_notify), VAR_2);
  VAR_8->user = VAR_4;
  VAR_8->owner = VAR_5;
  VAR_8->place = VAR_6;
  VAR_8->item = VAR_7;

  FUNC_4 (2, "created news item type %08x, user_id=%d\n", VAR_8->type, VAR_8->user_id);

  return FUNC_2 (VAR_8);
}
