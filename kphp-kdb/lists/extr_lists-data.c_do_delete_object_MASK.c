
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_del_obj {int dummy; } ;
typedef int object_id_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (void*,int ) ;

int FUNC_5 (object_id_t VAR_3) {
  if (VAR_2 && FUNC_3 (VAR_3, 1) < 0) {
    return -2;
  }
  void *VAR_4 = FUNC_1 (VAR_0, sizeof (struct lev_del_obj) + VAR_1, FUNC_0(VAR_3));
  FUNC_4 (VAR_4, VAR_3);
  return FUNC_2 (VAR_3);
}
