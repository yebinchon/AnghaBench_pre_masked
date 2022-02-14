
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_news_place_delete {int place; } ;


 scalar_t__ VAR_0 ;
 struct lev_news_place_delete* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

int FUNC_3 (int VAR_1, int VAR_2, int VAR_3) {
  if (!FUNC_1 (VAR_1, VAR_2, VAR_3)) {
    return -1;
  }

  struct lev_news_place_delete *VAR_4 = FUNC_0 (VAR_0 + VAR_1, 12, VAR_2);
  VAR_4->place = VAR_3;

  return FUNC_2 (VAR_1, VAR_2, VAR_3);
}
