
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_tree_builder {scalar_t__ choice; } ;
typedef int pm_cell_t ;


 int FUNC_0 (int *,struct pm_tree_builder*) ;
 int FUNC_1 (int *,struct pm_tree_builder*) ;

__attribute__((used)) static void FUNC_2 (pm_cell_t *VAR_0, struct pm_tree_builder *VAR_1) {
  if (VAR_1->choice) {
    FUNC_1 (VAR_0, VAR_1);
  } else {
    FUNC_0 (VAR_0, VAR_1);
  }
}
