
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ word; unsigned int freqs; } ;
typedef TYPE_1__ pair_word_freqs_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 void* FUNC_8 (char const*,int) ;

int FUNC_9 (const char *VAR_0, int VAR_1, int VAR_2, pair_word_freqs_t *VAR_3, int VAR_4, int VAR_5, long long VAR_6) {
  static char VAR_7[512];
  int VAR_8, VAR_9 = 1;
  const char *VAR_10 = 0;
  int VAR_11 = 0;
  unsigned VAR_12 = 0x10000;

  if (VAR_2) {
    VAR_3[VAR_11].word = FUNC_8 ("\x1f@@", 3);
    VAR_3[VAR_11].freqs = 0;
    VAR_11++;
  }

  if (VAR_5 && ((int) (VAR_6 >> 32))) {
    int VAR_13 = (int) VAR_6;
    if (VAR_13) {
      VAR_3[VAR_11].word = VAR_13 > 0 ? FUNC_5 ("O", 1, VAR_13) : FUNC_5 ("W", 1, -VAR_13);
      VAR_3[VAR_11].freqs = 0;
      VAR_11++;
    }
  }

  while (VAR_11 < VAR_4 && *VAR_0) {
    if (VAR_0 == VAR_10) {
      FUNC_4 ("error at %.30s\n", VAR_0);
      FUNC_1 (2);
    }
    VAR_10 = VAR_0 - VAR_9;
    int VAR_14 = VAR_9 ? 0 : FUNC_2 (VAR_0);
    VAR_9 = 0;
    if (VAR_14 < 0) {
      break;
    }
    while (VAR_14 > 0 && *VAR_0 != 0x1f) {
      if (*VAR_0 == '\t') {
        VAR_12 = 1;
      }
      VAR_0++;
      VAR_14--;
    }
    if (*VAR_0 == 0x1f) {
      VAR_14 = 1;
      while ((unsigned char) VAR_0[VAR_14] >= 0x40) {
        VAR_14++;
      }
      VAR_9 = 1;
    } else {
      VAR_14 = FUNC_3 (VAR_0);
    }
    if (!VAR_14) {
      continue;
    }
    FUNC_0 (VAR_14 > 0 && VAR_14 < 511);
    if (*VAR_0 == 0x1f) {
      VAR_3[VAR_11].word = FUNC_8 (VAR_0, VAR_14);
      VAR_3[VAR_11].freqs = 0;
      VAR_11++;
    } else {
      int VAR_15 = FUNC_6 (VAR_7, VAR_0, VAR_14);
      FUNC_0 (VAR_15 <= 510);
      VAR_3[VAR_11].word = FUNC_8 (VAR_7, VAR_15);
      VAR_3[VAR_11].freqs = VAR_12;
      VAR_11++;
    }
    VAR_0 += VAR_14;
  }

  int VAR_16 = 0;
  if (VAR_11 > 0) {
    FUNC_7 (VAR_3, 0, VAR_11 - 1);
    int VAR_17;
    for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 = VAR_17) {
      unsigned VAR_18 = VAR_3[VAR_8].freqs;
      for (VAR_17 = VAR_8 + 1; VAR_17 < VAR_11 && VAR_3[VAR_17].word == VAR_3[VAR_8].word; VAR_17++) {
        VAR_18 += VAR_3[VAR_17].freqs;
      }
      VAR_3[VAR_16].word = VAR_3[VAR_8].word;
      VAR_3[VAR_16].freqs = VAR_18;

      VAR_16++;
    }
  }
  return VAR_16;
}
