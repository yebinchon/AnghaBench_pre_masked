
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ freq; struct TYPE_6__* next; } ;
typedef TYPE_1__ word_t ;
struct TYPE_7__ {TYPE_1__** A; } ;
typedef TYPE_2__ word_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,long long,long long) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__**,long) ;

void FUNC_3 (word_t *VAR_2[], word_hash_t *VAR_3, long VAR_4) {
  int VAR_5;
  word_t **VAR_6 = VAR_2, **VAR_7 = VAR_6 + VAR_4, *VAR_8;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    for (VAR_8 = VAR_3->A[VAR_5]; VAR_8; VAR_8 = VAR_8->next) {
      if (VAR_8->freq > 0) {
        *VAR_6++ = VAR_8;
        FUNC_0 (VAR_6 <= VAR_7);
      }
    }
  }
  if (VAR_6 != VAR_7) {
    FUNC_1 (VAR_1, "expected %lld words, found %lld\n", (long long) VAR_4, (long long) (VAR_7 - VAR_2));
  }
  FUNC_0 (VAR_6 == VAR_7);
  FUNC_2 (VAR_2, VAR_4-1);
}
