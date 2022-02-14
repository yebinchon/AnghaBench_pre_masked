
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct lev_proposal {int len; int text; int user_id; } ;


 int VAR_0 ;
 struct lev_proposal* FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;

int FUNC_5 (int VAR_1, const char *VAR_2, int VAR_3) {
  if (VAR_3 < 0 || VAR_3 >= 1024 || FUNC_1 (VAR_1) < 0) {
    return 0;
  }
  struct lev_proposal *VAR_4 = FUNC_0 (VAR_0, 11+VAR_3, VAR_1);

  VAR_4->len = VAR_3;
  FUNC_2 (VAR_4->text, VAR_2, VAR_3);

  user_t *VAR_5 = FUNC_3 (VAR_4->user_id);

  if (VAR_5) {
    return FUNC_4 (VAR_5, VAR_4->text, VAR_3);
  } else {
    return 0;
  }
}
