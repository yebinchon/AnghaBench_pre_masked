
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int dummy; } ;
struct lev_del_entry {int dummy; } ;
typedef int object_id_t ;
typedef int list_id_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct lev_del_entry* FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,struct lev_generic*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (struct lev_del_entry*,int ,int ) ;

int FUNC_6 (list_id_t VAR_3, object_id_t VAR_4) {
  if (FUNC_2 (VAR_3) < 0) {
    return -1;
  }
  if (VAR_2 && FUNC_4 (VAR_3, 1) < 0) {
    return -2;
  }

  struct lev_del_entry *VAR_5 = FUNC_1 (VAR_0, sizeof (struct lev_del_entry) + VAR_1, FUNC_0 (VAR_3));
  FUNC_5 (VAR_5, VAR_3, VAR_4);

  return FUNC_3 (VAR_3, VAR_4, 1, (struct lev_generic *)VAR_5);
}
