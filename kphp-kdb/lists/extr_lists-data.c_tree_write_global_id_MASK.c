
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree_ext_small_t ;
typedef int global_id_t ;
struct TYPE_2__ {int global_id; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 (tree_ext_small_t *VAR_0) {
  if (sizeof (global_id_t) == sizeof (int)) {
    FUNC_2 (FUNC_0(VAR_0)->global_id);
  } else if (sizeof (global_id_t) == sizeof (long long)) {
    FUNC_3 (FUNC_0(VAR_0)->global_id);
  } else {
    FUNC_1 (0);
  }
  return 0;
}
