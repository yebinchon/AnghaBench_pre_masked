
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int freq; struct TYPE_4__* next; } ;
typedef TYPE_1__ word_t ;
struct TYPE_5__ {TYPE_1__** A; } ;
typedef TYPE_2__ word_hash_t ;


 int VAR_0 ;

long FUNC_0 (long long *VAR_1, const word_hash_t *VAR_2) {
  long VAR_3 = 0;
  int VAR_4;
  const word_t *VAR_5;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    for (VAR_5 = VAR_2->A[VAR_4]; VAR_5; VAR_5 = VAR_5->next) {
      if (VAR_5->freq > 0) {
 *VAR_1++ = VAR_5->freq;
 VAR_3++;
      }
    }
  }
  return VAR_3;
}
