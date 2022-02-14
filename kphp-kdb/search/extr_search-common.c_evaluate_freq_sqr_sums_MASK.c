
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int freqs; } ;
typedef TYPE_1__ pair_word_freqs_t ;



void FUNC_0 (pair_word_freqs_t *VAR_0, int VAR_1, unsigned *VAR_2, unsigned *VAR_3, unsigned *VAR_4) {
  int VAR_5;
  *VAR_2 = *VAR_3 = *VAR_4 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
    unsigned VAR_6 = VAR_0[VAR_5].freqs >> 16, VAR_7 = VAR_0[VAR_5].freqs & 0xffff;
    *VAR_2 += VAR_6 * VAR_6;
    *VAR_3 += VAR_6 * VAR_7;
    *VAR_4 += VAR_7 * VAR_7;
  }
}
