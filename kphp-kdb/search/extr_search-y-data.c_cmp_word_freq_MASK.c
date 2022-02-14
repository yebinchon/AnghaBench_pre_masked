
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ word; scalar_t__ position; } ;
typedef TYPE_1__ searchy_pair_word_position_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const searchy_pair_word_position_t *VAR_2 = (const searchy_pair_word_position_t *) VAR_0,
                                     *VAR_3 = (const searchy_pair_word_position_t *) VAR_1;
  if (VAR_2->word < VAR_3->word) {
    return -1;
  }
  if (VAR_2->word > VAR_3->word) {
    return 1;
  }
  return VAR_2->position < VAR_3->position ? -1 : VAR_2->position > VAR_3->position ? 1 : 0;
}
