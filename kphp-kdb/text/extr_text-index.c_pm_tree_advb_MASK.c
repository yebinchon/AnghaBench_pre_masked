
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pm_tree_builder {int* next; size_t choice; long long* freq; } ;
struct TYPE_4__ {int left; int right; } ;
typedef TYPE_1__ pm_cell_t ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct pm_tree_builder*) ;

__attribute__((used)) static void FUNC_2 (pm_cell_t *VAR_1, struct pm_tree_builder *VAR_2) {
  ++VAR_2;
  int VAR_3 = VAR_2->next[VAR_2->choice];
  if (!VAR_3) {
    --VAR_2;
    VAR_2->next[1] = 0;
    VAR_2->freq[1] = VAR_0;
    VAR_2->choice = 0;
    return;
  }
  long long VAR_4 = VAR_2->freq[VAR_2->choice];
  FUNC_1 (VAR_1, VAR_2);
  int VAR_5 = VAR_2->next[VAR_2->choice];
  if (!VAR_5) {
    --VAR_2;
    VAR_2->next[1] = 0;
    VAR_2->freq[1] = VAR_0;
    VAR_2->choice = 0;
    return;
  }
  VAR_4 += VAR_2->freq[VAR_2->choice];
  FUNC_1 (VAR_1, VAR_2);
  int VAR_6 = VAR_1[0].left;
  if (VAR_6) {
    VAR_1[0].left = VAR_1[VAR_6].left;
  } else {
    VAR_6 = --VAR_1[0].right;
    FUNC_0 (VAR_6 && "Out of package-merge cell memory" != 0);
  }
  VAR_1[VAR_6].left = VAR_3;
  VAR_1[VAR_6].right = VAR_5;
  --VAR_2;
  VAR_2->next[1] = VAR_6;
  VAR_2->freq[1] = VAR_4;
  VAR_2->choice = (VAR_4 < VAR_2->freq[0]);
}
