
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_isearch_black_list {int type; int text; } ;


 int FUNC_0 (int ,int) ;

int FUNC_1 (struct lev_isearch_black_list *VAR_0) {
  FUNC_0 (VAR_0->text, VAR_0->type & 1);
  return 1;
}
