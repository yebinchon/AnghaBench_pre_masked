
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_sublist_flags {int xor_cond; int and_cond; scalar_t__ xor_set; scalar_t__ and_set; } ;
struct lev_generic {int dummy; } ;
struct lev_del_sublist {int dummy; } ;
typedef int list_id_t ;


 int FUNC_0 (int ) ;
 struct lev_sublist_flags* FUNC_1 (struct lev_sublist_flags*) ;
 int VAR_0 ;
 struct lev_sublist_flags* FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int,struct lev_generic*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (struct lev_sublist_flags*,int ) ;

int FUNC_7 (list_id_t VAR_3, int VAR_4, int VAR_5) {
  if (FUNC_3 (VAR_3) < 0) {
    return -1;
  }
  if (VAR_2 && FUNC_5 (VAR_3, 1) < 0) {
    return -2;
  }
  struct lev_sublist_flags *VAR_6, *VAR_7 = FUNC_2 (VAR_0, sizeof (struct lev_del_sublist) + VAR_1, FUNC_0 (VAR_3));
  FUNC_6 (VAR_7, VAR_3);
  VAR_6 = FUNC_1(VAR_7);
  VAR_6->xor_cond = VAR_4;
  VAR_6->and_cond = VAR_5;
  VAR_6->and_set = 0;
  VAR_6->xor_set = 0;
  return FUNC_4 (VAR_3, *(int *) &(VAR_6->xor_cond), (struct lev_generic *)VAR_7);
}
