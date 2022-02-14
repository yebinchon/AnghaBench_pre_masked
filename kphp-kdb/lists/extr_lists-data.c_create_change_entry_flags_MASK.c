
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_set_flags {int dummy; } ;
struct lev_generic {int a; } ;
struct lev_change_flags_long {int and_mask; int xor_mask; int type; } ;
typedef int object_id_t ;
typedef int list_id_t ;


 int FUNC_0 (int ) ;
 struct lev_change_flags_long* FUNC_1 (struct lev_change_flags_long*) ;
 int VAR_0 ;
 int FUNC_2 (struct lev_set_flags*) ;
 int FUNC_3 (struct lev_change_flags_long*,int ,int ) ;

int FUNC_4 (list_id_t VAR_1, object_id_t VAR_2, int VAR_3, int VAR_4) {
  static char VAR_5[1024];
  struct lev_change_flags_long *VAR_6 = (void *)VAR_5;
  VAR_6->type = VAR_0;
  ((struct lev_generic *)VAR_6)->a = FUNC_0(VAR_1);
  FUNC_3 (VAR_6, VAR_1, VAR_2);
  struct lev_change_flags_long *VAR_7 = FUNC_1 (VAR_6);
  VAR_7->and_mask = VAR_3;
  VAR_7->xor_mask = VAR_4;
  return FUNC_2 ((struct lev_set_flags *) VAR_6);
}
