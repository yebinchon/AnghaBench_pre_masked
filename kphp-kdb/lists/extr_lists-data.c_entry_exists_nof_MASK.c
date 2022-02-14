
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void tree_ext_large_t ;
typedef int object_id_t ;
typedef int list_t ;
typedef int list_id_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int *,int ,int*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7 (list_id_t VAR_2, object_id_t VAR_3) {
  list_t *VAR_4 = FUNC_0 (VAR_2, -1);
  if (VAR_1 & 1) {
    if (!VAR_4) {
      return 1;
    }
    FUNC_6 (VAR_4);
    int VAR_5;
    tree_ext_large_t *VAR_6 = FUNC_4 (&VAR_0, VAR_3, &VAR_5);
    if ((VAR_6 && (VAR_6 != (void *)-1)) || ((VAR_6 == (void *)-1) && FUNC_3 (VAR_2) >= 0)) {
      return 1;
    } else {
      return 0;
    }
  }
  if (VAR_1) {
    if (!VAR_4) {
      return 1;
    }


    int VAR_7 = FUNC_3 (VAR_2);
    if (VAR_7 < 0) {
      return 1;
    }
    if (!FUNC_1 (VAR_7, -1)) {
      return 1;
    }
    FUNC_5 (VAR_4);
  }
  return FUNC_2 (VAR_2, VAR_3);
}
