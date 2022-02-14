
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void tree_ext_large_t ;
typedef int object_id_t ;
typedef scalar_t__ global_id_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int**,int ) ;

__attribute__((used)) static inline int FUNC_5 (object_id_t VAR_3, global_id_t VAR_4) {
  int VAR_5 = VAR_2;
  if (VAR_5 & 0x6c0) {
    int VAR_6 = -1;
    tree_ext_large_t *VAR_7 = FUNC_3 (&VAR_0, VAR_3, &VAR_6);
    if (VAR_7 != (void *) -1) {
      return FUNC_2 (FUNC_0(VAR_7));
    } else {
      return FUNC_1 (0, VAR_6);
    }
  } else {
    int *VAR_8 = VAR_1;
    FUNC_4 (&VAR_8, VAR_3);
    if (VAR_5 & 256) {
      *VAR_8++ = (int)VAR_4;
    }
    VAR_1 = VAR_8;
  }
  return 0;
}
