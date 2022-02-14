
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int words; TYPE_1__** E; } ;
typedef TYPE_2__ searchy_iheap_phrase_t ;
typedef int pos ;
typedef int o ;
struct TYPE_4__ {int* positions; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static int FUNC_3 (searchy_iheap_phrase_t *VAR_1) {
  const int VAR_2 = VAR_1->words;

  int VAR_3, *VAR_4 = FUNC_0 (sizeof (VAR_4[0]) * VAR_2), **VAR_5 = FUNC_0 (sizeof (VAR_5[0]) * VAR_2);
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    VAR_5[VAR_3] = VAR_1->E[VAR_3]->positions;
    FUNC_1 (VAR_5[VAR_3]);
    (VAR_5[VAR_3])++;
  }
  FUNC_2 (VAR_4, 0, sizeof (VAR_4[0]) * VAR_2);
  int VAR_6 = VAR_0;
  for (VAR_3 = 0; VAR_3 < VAR_5[0][-1]; VAR_3++) {
    int VAR_7 = VAR_5[0][VAR_3], VAR_8;
    for (VAR_8 = 1; VAR_8 < VAR_2; VAR_8++) {
      int VAR_9 = VAR_5[VAR_8][-1];
      while (VAR_4[VAR_8] < VAR_9 && VAR_5[VAR_8][VAR_4[VAR_8]] <= VAR_7) {
        VAR_4[VAR_8]++;
      }
      if (VAR_4[VAR_8] >= VAR_9) {
        return VAR_6 - VAR_2;
      }
      VAR_7 = VAR_5[VAR_8][VAR_4[VAR_8]];
    }
    const int VAR_10 = VAR_7 - VAR_5[0][VAR_3] + 1;
    if (VAR_6 > VAR_10) {

      VAR_6 = VAR_10;
    }
  }
  return VAR_6 - VAR_2;
}
