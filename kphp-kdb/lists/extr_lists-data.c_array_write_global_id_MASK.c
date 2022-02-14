
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int listree_t ;
typedef int global_id_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (listree_t *VAR_1, int VAR_2) {
  if (sizeof (global_id_t) == sizeof (int)) {
    FUNC_1 (VAR_0[VAR_2]);
  } else if (sizeof (global_id_t) == sizeof (long long)) {
    FUNC_2 (VAR_0[VAR_2]);
  } else {
    FUNC_0 (0);
  }
  return 0;
}
