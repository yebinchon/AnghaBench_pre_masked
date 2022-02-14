
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pm_tree_builder {int* next; long long* freq; int choice; } ;
struct TYPE_5__ {TYPE_1__* w; } ;
typedef TYPE_2__ pm_cell_t ;
struct TYPE_4__ {long long freq; } ;


 long long VAR_0 ;

__attribute__((used)) static void FUNC_0 (pm_cell_t *VAR_1, struct pm_tree_builder *VAR_2) {
  if (!VAR_2->next[0]) {
    return;
  }
  int VAR_3 = ++VAR_2->next[0];
  if (!VAR_3) {
    VAR_2->freq[0] = VAR_0;
    VAR_2->choice = (VAR_2->next[1] != 0);
    return;
  }
  long long VAR_4 = VAR_1[VAR_3].w->freq;
  VAR_2->freq[0] = VAR_4;
  VAR_2->choice = (VAR_2->freq[1] < VAR_4);
}
