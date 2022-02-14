
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ word; scalar_t__ doc_id; int position; } ;
typedef TYPE_1__ pair_t ;



__attribute__((used)) static inline int FUNC_0 (pair_t *VAR_0, pair_t *VAR_1) {
  if (VAR_0->word < VAR_1->word) {
    return -1;
  }
  if (VAR_0->word > VAR_1->word) {
    return 1;
  }
  if (VAR_0->doc_id < VAR_1->doc_id) {
    return -1;
  }
  if (VAR_0->doc_id > VAR_1->doc_id) {
    return 1;
  }
  return VAR_0->position - VAR_1->position;
}
