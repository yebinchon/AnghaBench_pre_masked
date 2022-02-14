
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_bayes_set {int type; int text_len; int text; } ;


 int FUNC_0 (int ,int ,int) ;

int FUNC_1 (struct lev_bayes_set *VAR_0) {
  return FUNC_0 (VAR_0->text, VAR_0->text_len, VAR_0->type & 15);
}
