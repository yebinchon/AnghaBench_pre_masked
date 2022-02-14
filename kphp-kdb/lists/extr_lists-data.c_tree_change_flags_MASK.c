
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree_ext_small_t ;
typedef int tree_ext_large_t ;
struct TYPE_2__ {int flags; } ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3 (tree_ext_small_t *VAR_5) {
  tree_ext_large_t *VAR_6 = FUNC_0(VAR_5);
  if (!((FUNC_1 (VAR_6)->flags ^ VAR_3) & VAR_0)) {
    FUNC_2 (VAR_6, (FUNC_1 (VAR_6)->flags & VAR_1) ^ VAR_4);
    VAR_2++;
  }
  return 0;
}
