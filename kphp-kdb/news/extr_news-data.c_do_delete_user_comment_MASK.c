
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_news_user_comment_hide {int place; int item; int user_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lev_news_user_comment_hide* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int,int,int,int ) ;

int FUNC_3 (int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  if (!VAR_1 || !FUNC_1 (VAR_3, VAR_4, VAR_5)) {
    return -1;
  }
  struct lev_news_user_comment_hide *VAR_7 = FUNC_0 (VAR_0 + VAR_3, 20, VAR_4);
  VAR_7->place = VAR_5;
  VAR_7->item = VAR_6;
  VAR_7->user_id = VAR_2;

  return FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, 0);
}
