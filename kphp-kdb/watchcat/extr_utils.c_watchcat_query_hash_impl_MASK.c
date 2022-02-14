
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int phrases_cnt; TYPE_2__* phrases; } ;
typedef TYPE_1__ watchcat_query_t ;
struct TYPE_5__ {int words; scalar_t__* H; scalar_t__ minus_flag; } ;
typedef TYPE_2__ watchcat_query_phrase_t ;



long long FUNC_0 (watchcat_query_t *VAR_0) {
  long long VAR_1 = 0x1234123412341234LL;
  int VAR_2 = 0;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0->phrases_cnt; VAR_3++) {
    watchcat_query_phrase_t *VAR_4 = &VAR_0->phrases[VAR_3];
    VAR_1 *= 0x4321432143214321LL;
    long long VAR_5 = 0x1234567812345678LL;
    if (VAR_4->minus_flag) {
      VAR_5++;
    } else {
      VAR_2 = 1;
    }
    VAR_5 += VAR_4->minus_flag;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_4->words; VAR_6++) {
      VAR_5 *= 0x8765432187654321LL;
      VAR_5 += VAR_4->H[VAR_6];
    }

    VAR_1 += VAR_5;
  }

  if (!VAR_2) {


    return -1;
  }

  return VAR_1;
}
