
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_news_set_recommend_rate {double rate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lev_news_set_recommend_rate* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (struct lev_news_set_recommend_rate*) ;
 int FUNC_3 (int) ;

int FUNC_4 (int VAR_3, int VAR_4, double VAR_5) {
  if (!VAR_1 || !FUNC_3 (VAR_3)) {
    return -1;
  }
  if (VAR_4 < 0 || VAR_4 > 255) {
    return -1;
  }
  if (FUNC_1 (VAR_2[(VAR_3 << 8) + VAR_4] - VAR_5) < 1e-9) {
    return -1;
  }
  struct lev_news_set_recommend_rate *VAR_6 = FUNC_0 (VAR_0 + VAR_3, sizeof (*VAR_6), VAR_4);
  VAR_6->rate = VAR_5;
  return FUNC_2 (VAR_6);
}
