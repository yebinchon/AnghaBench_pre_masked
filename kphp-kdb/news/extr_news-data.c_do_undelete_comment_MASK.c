
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_news_comment_hide {int place; int item; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lev_news_comment_hide* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 (int,int,int,int,int) ;

int FUNC_4 (int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  if (!FUNC_1 (VAR_2, VAR_3, VAR_4)) {
    return -1;
  }
  struct lev_news_comment_hide *VAR_6 = FUNC_0 (VAR_1 + VAR_2, 16, VAR_3);
  VAR_6->place = VAR_4;
  VAR_6->item = VAR_5;

  if (VAR_0) {
    return FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5, -1);
  } else {
    return FUNC_3 (VAR_2, VAR_3, VAR_4, VAR_5, -1);
  }
}
