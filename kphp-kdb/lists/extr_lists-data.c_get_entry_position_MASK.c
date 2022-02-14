
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int object_id_t ;
typedef int list_t ;
typedef int list_id_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

int FUNC_4 (list_id_t VAR_2, object_id_t VAR_3) {
  if (VAR_1 && FUNC_2 (VAR_2, 1) < 0) {
    return -2;
  }
  list_t *VAR_4 = FUNC_0 (VAR_2, 2);
  if (!VAR_4) {
    return -1;
  }
  FUNC_3 (VAR_4);

  return FUNC_1 (&VAR_0, VAR_3, 1);
}
