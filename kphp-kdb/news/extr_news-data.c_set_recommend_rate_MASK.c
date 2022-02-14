
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_news_set_recommend_rate {int action; int type; int rate; } ;


 int * VAR_0 ;

__attribute__((used)) static int FUNC_0 (struct lev_news_set_recommend_rate *VAR_1) {
  if (VAR_1->action < 0 || VAR_1->action > 255) {
    return 0;
  }
  VAR_0[((VAR_1->type & 31) << 8) + VAR_1->action] = VAR_1->rate;
  return 1;
}
