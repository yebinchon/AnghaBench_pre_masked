
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_interests {int len; int text; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lev_interests* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (struct lev_interests*,int) ;

int FUNC_3 (int VAR_2, const char *VAR_3, int VAR_4, int VAR_5) {
  if (VAR_5 < 1 || VAR_5 > VAR_1 || (unsigned) VAR_4 > 65520) {
    return 0;
  }
  struct lev_interests *VAR_6 = FUNC_0 (VAR_0 + VAR_5, VAR_4 + 11, VAR_2);
  VAR_6->len = VAR_4;
  FUNC_1 (VAR_6->text, VAR_3, VAR_4);
  FUNC_2 (VAR_6, VAR_4 + 11);
  return 1;
}
