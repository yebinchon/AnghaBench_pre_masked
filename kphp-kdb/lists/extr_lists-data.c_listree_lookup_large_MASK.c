
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void tree_ext_large_t ;
typedef int object_id_t ;
struct TYPE_5__ {void** root; int N; } ;
typedef TYPE_1__ listree_direct_t ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static tree_ext_large_t *FUNC_7 (listree_direct_t *VAR_2, object_id_t VAR_3, int *VAR_4) {
  int VAR_5;
  tree_ext_large_t *VAR_6 = FUNC_0 (FUNC_6 (FUNC_2 (*VAR_2->root), VAR_3));
  if (FUNC_2 (VAR_6) == VAR_0) {
    VAR_5 = FUNC_3 (VAR_2, VAR_3);
    if (VAR_5 == 0) {
      return 0;
    }
    VAR_5 = VAR_2->N - VAR_5;
    if (!FUNC_5 (FUNC_4 (VAR_2, VAR_5), VAR_3)) {
      return 0;
    }
    *VAR_4 = VAR_5;
    return (void *)-1;
  } else {
    if (FUNC_1 (VAR_6) == VAR_1) {
      return 0;
    }
    return VAR_6;
  }
}
