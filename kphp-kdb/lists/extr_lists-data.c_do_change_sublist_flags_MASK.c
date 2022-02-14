
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_sublist_flags {int xor_cond; int and_cond; int and_set; int xor_set; } ;
struct lev_generic {int dummy; } ;
typedef int list_id_t ;


 int FUNC_0 (int ) ;
 struct lev_sublist_flags* FUNC_1 (struct lev_sublist_flags*) ;
 int VAR_0 ;
 struct lev_sublist_flags* FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int,struct lev_generic*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (struct lev_sublist_flags*,int ) ;

int FUNC_7 (list_id_t VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  if (FUNC_4 (VAR_3) < 0) {
    return -1;
  }
  if (VAR_2 && FUNC_5 (VAR_3, 1) < 0) {
    return -2;
  }
  struct lev_sublist_flags *VAR_8, *VAR_9 = FUNC_2 (VAR_0, sizeof (struct lev_sublist_flags) + VAR_1, FUNC_0 (VAR_3));
  FUNC_6 (VAR_9, VAR_3);
  VAR_8 = FUNC_1(VAR_9);
  VAR_8->xor_cond = VAR_4;
  VAR_8->and_cond = VAR_5;
  VAR_8->and_set = VAR_6;
  VAR_8->xor_set = VAR_7;
  return FUNC_3 (VAR_3, *(int *) &(VAR_8->xor_cond), (struct lev_generic *)VAR_9);
}
