
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ tree_t ;
typedef int hash_entry_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,char const*,int) ;

hash_entry_t *FUNC_1 (const char *VAR_1, int VAR_2) {
  tree_t *VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  if (!VAR_3) {
    return 0;
  } else {
    return VAR_3->x;
  }
}
