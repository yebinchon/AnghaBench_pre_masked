
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void tree_ext_large_t ;
typedef int object_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int *,int ,int*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static inline int FUNC_6 (object_id_t VAR_3) {
  int VAR_4 = VAR_2;
  if (VAR_4 & 0x7c0) {
    int VAR_5 = -1;
    tree_ext_large_t *VAR_6 = FUNC_4 (&VAR_0, VAR_3, &VAR_5);
    FUNC_1 (VAR_6);
    if (VAR_6 != (void *)-1) {
      return FUNC_3 (FUNC_0(VAR_6));
    } else {
      return FUNC_2 (0, VAR_5);
    }
  } else {
    FUNC_5 (&VAR_1, VAR_3);
  }
  return 0;
}
