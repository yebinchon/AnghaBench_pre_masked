
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_news_recommend {int owner; int place; int action; int item; int item_creation_time; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lev_news_recommend* FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lev_news_recommend*) ;
 int * FUNC_3 (int,int,int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int,int,int,int,int) ;

int FUNC_6 (int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8) {
  if (FUNC_1 (VAR_2) < 0 || !VAR_1 || !FUNC_4 (VAR_3)) {
    return -1;
  }
  if (FUNC_3 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6) != ((void*)0)) {
    FUNC_5 (4, "recommend_item_f (%d, %d, %d, %d, %d) returns not NULL.\n", VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    return 0;
  }

  struct lev_news_recommend *VAR_9 = FUNC_0 (VAR_0 + VAR_3, sizeof (*VAR_9), VAR_2);
  VAR_9->owner = VAR_4;
  VAR_9->place = VAR_5;
  VAR_9->action = VAR_6;
  VAR_9->item = VAR_7;

  VAR_9->item_creation_time = VAR_8;

  return FUNC_2 (VAR_9);
}
