
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct lev_langs {int* langs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct lev_langs* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int *,int*,int) ;
 int * FUNC_2 (int) ;

int FUNC_3 (int VAR_2, int VAR_3) {
  user_t *VAR_4 = FUNC_2 (VAR_2);
  if (!VAR_4 || VAR_3 < 0 || VAR_3 >= VAR_1) {
    return 0;
  }

  struct lev_langs *VAR_5 = FUNC_0 (VAR_0 + 1, 12, VAR_2);
  VAR_5->langs[0] = VAR_3;

  return FUNC_1 (VAR_4, VAR_5->langs, 1);
}
