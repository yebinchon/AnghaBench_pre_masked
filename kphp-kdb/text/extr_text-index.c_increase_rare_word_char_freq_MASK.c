
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long long freq; size_t len; struct TYPE_5__* next; scalar_t__* str; } ;
typedef TYPE_1__ word_t ;
struct TYPE_6__ {TYPE_1__** A; } ;
typedef TYPE_2__ word_hash_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

int FUNC_1 (long long VAR_1[], long long VAR_2[], word_hash_t *VAR_3, int VAR_4) {
  int VAR_5, VAR_6, VAR_7 = 0;
  long long VAR_8;
  word_t *VAR_9, **VAR_10;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    for (VAR_10 = &VAR_3->A[VAR_5], VAR_9 = *VAR_10; VAR_9; VAR_9 = *VAR_10) {
      VAR_8 = VAR_9->freq;
      if (VAR_8 <= VAR_4 && VAR_8 > 0) {
 *VAR_10 = VAR_9->next;
 VAR_9->freq = -VAR_8;
 VAR_7++;
 VAR_2[VAR_9->len] += VAR_8;
 for (VAR_6 = 0; VAR_6 < VAR_9->len; VAR_6++) {
   VAR_1[(unsigned char) VAR_9->str[VAR_6]] += VAR_8;
 }
 FUNC_0 (VAR_9, sizeof (word_t) + VAR_9->len);
      } else {
 VAR_10 = &VAR_9->next;
      }
    }
  }
  return VAR_7;
}
