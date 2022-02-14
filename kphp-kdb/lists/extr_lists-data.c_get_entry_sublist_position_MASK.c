
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int object_id_t ;
typedef int listree_t ;
typedef int list_t ;
typedef int list_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;

int FUNC_6 (list_id_t VAR_3, object_id_t VAR_4, int VAR_5) {
  if (VAR_2 && FUNC_4 (VAR_3, 1) < 0) {
    return -2;
  }
  list_t *VAR_6 = FUNC_0 (VAR_3, 2);
  if (!VAR_6) {
    return -1;
  }
  FUNC_5 (VAR_6);
  int VAR_7 = VAR_5 & (VAR_1-1);
  if (!(VAR_5 & (2*VAR_1-1))) {
    VAR_7 = -1;
  }
  listree_t VAR_8, *VAR_9 = &VAR_8;

  if (VAR_7 < 0) {
    return FUNC_2 (&VAR_0, VAR_4, 1);
  } else {
    FUNC_3 (VAR_9, VAR_7);
    return FUNC_1 (VAR_9, VAR_4, 1);
  }

}
