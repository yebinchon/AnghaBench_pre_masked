
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int word; int freqs; } ;
typedef TYPE_1__ pair_word_freqs_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,int,int) ;
 void* FUNC_6 (char*,int,int) ;
 void* FUNC_7 (char const*,int) ;

int FUNC_8 (const char *VAR_0, int VAR_1, int VAR_2, pair_word_freqs_t *VAR_3, int VAR_4, int VAR_5, long long VAR_6, int *VAR_7) {
  int VAR_8 = 1;
  const char *VAR_9 = 0;
  int VAR_10 = 0;
  *VAR_7 = 0;

  if (VAR_2) {
    VAR_3[VAR_10].word = FUNC_7 ("\x1f@@", 3);
    VAR_3[VAR_10].freqs = 0;
    VAR_10++;
  }

  if (VAR_5 && ((int) (VAR_6 >> 32))) {
    int VAR_11 = (int) VAR_6;
    if (VAR_11) {
      VAR_3[VAR_10].word = VAR_11 > 0 ? FUNC_5 ("O", 1, VAR_11) : FUNC_5 ("W", 1, -VAR_11);
      VAR_3[VAR_10].word &= 0x7fffffffffffffffULL;
      VAR_3[VAR_10].freqs = 0;
      VAR_10++;
    }
  }

  while (VAR_10 < VAR_4 && *VAR_0) {
    if (VAR_0 == VAR_9) {
      FUNC_4 ("error at %.30s\n", VAR_0);
      FUNC_1 (2);
    }
    VAR_9 = VAR_0 - VAR_8;
    int VAR_12 = VAR_8 ? 0 : FUNC_2 (VAR_0);
    VAR_8 = 0;
    if (VAR_12 < 0) {
      break;
    }
    while (VAR_12 > 0 && *VAR_0 != 0x1f) {
      VAR_0++;
      VAR_12--;
    }
    if (*VAR_0 == 0x1f) {
      VAR_12 = 1;
      while ((unsigned char) VAR_0[VAR_12] >= 0x40) {
        VAR_12++;
      }
      VAR_8 = 1;
    } else {
      VAR_12 = FUNC_3 (VAR_0);
    }
    if (!VAR_12) {
      continue;
    }
    FUNC_0 (VAR_12 > 0 && VAR_12 < 511);
    if (*VAR_0 == 0x1f) {
      VAR_3[VAR_10].word = FUNC_7 (VAR_0, VAR_12);
      VAR_3[VAR_10++].freqs = 0;
    } else {
      (*VAR_7)++;
      VAR_3[VAR_10].word = FUNC_6 ((char *) VAR_0, VAR_12, 0);
      VAR_3[VAR_10++].freqs = *VAR_7;
      if (!VAR_8 && VAR_10 < VAR_4) {
        VAR_3[VAR_10].word = FUNC_6 ((char *) VAR_0, VAR_12, 1);
        if (VAR_3[VAR_10].word != VAR_3[VAR_10-1].word) {
          VAR_3[VAR_10++].freqs = *VAR_7;
        }
      }
    }
    VAR_0 += VAR_12;
  }

  return VAR_10;
}
