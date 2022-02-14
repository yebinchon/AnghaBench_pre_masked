
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ position; scalar_t__ word; } ;
typedef TYPE_1__ searchy_pair_word_position_t ;
typedef scalar_t__ hash_t ;



inline int FUNC_0 (searchy_pair_word_position_t *VAR_0, searchy_pair_word_position_t *VAR_1, hash_t *VAR_2, hash_t *VAR_3) {
  while (VAR_0 != VAR_1 && VAR_2 != VAR_3) {
    int VAR_4 = 0;
    searchy_pair_word_position_t *VAR_5 = VAR_0;
    do {
      if (VAR_5->word == VAR_2[0]) {
        VAR_4 = 1;
      }
      VAR_5++;
    } while (VAR_5 != VAR_1 && VAR_5->position == VAR_0->position);
    if (!VAR_4) {
      return 0;
    }
    VAR_0 = VAR_5;
    VAR_2++;
  }
  return VAR_3 == VAR_2;
}
