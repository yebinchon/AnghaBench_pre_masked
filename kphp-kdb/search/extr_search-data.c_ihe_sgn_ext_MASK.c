
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ word; TYPE_1__* item; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_8__ {scalar_t__ word; } ;
typedef TYPE_3__ iheap_en_t ;
struct TYPE_6__ {long long item_id; } ;



__attribute__((used)) static inline int FUNC_0 (tree_t *VAR_0, iheap_en_t *VAR_1, long long VAR_2) {
  if (VAR_0->word < VAR_1->word) {
    return -2;
  }
  if (VAR_0->word > VAR_1->word) {
    return 2;
  }
  if (VAR_0->item->item_id < VAR_2) {
    return -1;
  }
  if (VAR_0->item->item_id > VAR_2) {
    return 1;
  }
  return 0;
}
