
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ word; int freqs; } ;
typedef TYPE_1__ pair_word_freqs_t ;
typedef scalar_t__ hash_t ;



__attribute__((used)) static void FUNC_0 (pair_word_freqs_t *VAR_0, int VAR_1, int VAR_2) {
  int VAR_3, VAR_4;
  hash_t VAR_5, VAR_6;
  int VAR_7;
  if (VAR_1 >= VAR_2) { return; }
  VAR_5 = VAR_0[(VAR_1+VAR_2)>>1].word;
  VAR_3 = VAR_1;
  VAR_4 = VAR_2;
  do {
    while (VAR_0[VAR_3].word < VAR_5) { VAR_3++; }
    while (VAR_0[VAR_4].word > VAR_5) { VAR_4--; }
    if (VAR_3 <= VAR_4) {
      VAR_6 = VAR_0[VAR_3].word; VAR_0[VAR_3].word = VAR_0[VAR_4].word; VAR_0[VAR_4].word = VAR_6;
      VAR_7 = VAR_0[VAR_3].freqs; VAR_0[VAR_3].freqs = VAR_0[VAR_4].freqs; VAR_0[VAR_4].freqs = VAR_7;
      VAR_3++; VAR_4--;
    }
  } while (VAR_3 <= VAR_4);
  FUNC_0 (VAR_0, VAR_1, VAR_4);
  FUNC_0 (VAR_0, VAR_3, VAR_2);
}
