
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int freqs; } ;
typedef TYPE_1__ pair_word_freqs_t ;



unsigned FUNC_0 (pair_word_freqs_t *VAR_0, int VAR_1) {
  int VAR_2;
  unsigned VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    if (VAR_0[VAR_2].freqs >= 0x10000) {
      VAR_3 += 0x10000;
    }
    if (VAR_0[VAR_2].freqs) {
      VAR_3++;
    }
  }
  return VAR_3;
}
