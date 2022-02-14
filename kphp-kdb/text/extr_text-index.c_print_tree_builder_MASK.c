
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pm_tree_builder {int choice; size_t* next; int * freq; } ;
struct TYPE_3__ {int right; int left; } ;
typedef TYPE_1__ pm_cell_t ;


 struct pm_tree_builder* VAR_0 ;
 int FUNC_0 (int ,char*,int,int,size_t,int ,size_t,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1 (pm_cell_t *VAR_2, struct pm_tree_builder *VAR_3) {
  FUNC_0 (VAR_1, "TB[%d]: %d {%zu, %d} {%zu: (%d, %d), %d}\n", (int) (VAR_3 - VAR_0), VAR_3->choice, VAR_3->next[0], VAR_3->freq[0], VAR_3->next[1], VAR_2[VAR_3->next[1]].left, VAR_2[VAR_3->next[1]].right, VAR_3->freq[1]);
}
