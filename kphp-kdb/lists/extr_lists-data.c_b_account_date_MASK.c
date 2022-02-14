
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void tree_ext_large_t ;
typedef int object_id_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int *,int ,int*) ;

__attribute__((used)) static inline int FUNC_4 (object_id_t VAR_1) {
  int VAR_2 = -1;
  tree_ext_large_t *VAR_3 = FUNC_3 (&VAR_0, VAR_1, &VAR_2);
  if (VAR_3 != (void *) -1) {
    return FUNC_2 (FUNC_0(VAR_3));
  } else {
    return FUNC_1 (0, VAR_2);
  }
}
