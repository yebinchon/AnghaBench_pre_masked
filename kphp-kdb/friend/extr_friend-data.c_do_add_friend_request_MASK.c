
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
struct lev_add_friend {int friend_id; int cat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,int) ;
 struct lev_add_friend* FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int * FUNC_4 (int) ;

int FUNC_5 (int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  user_t *VAR_7;
  if (FUNC_2 (VAR_3) < 0 || VAR_4 <= 0 || VAR_5 < 0 || (unsigned) VAR_6 > 2) {
    return -1;
  }

  struct lev_add_friend *VAR_8 = FUNC_1 (VAR_6 ? (VAR_6 > 1 ? VAR_1 : VAR_0) : VAR_2, 16, VAR_3);
  VAR_8->friend_id = VAR_4;
  VAR_8->cat = VAR_5;

  VAR_7 = (VAR_6 ? FUNC_4 (VAR_3) : FUNC_3 (VAR_3));
  return FUNC_0 (VAR_7, VAR_4, VAR_5, VAR_6);
}
