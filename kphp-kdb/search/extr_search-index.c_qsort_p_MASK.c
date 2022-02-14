
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ word; scalar_t__ doc_id; } ;
typedef TYPE_1__ pair_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0 (int VAR_1, int VAR_2) {
  int VAR_3, VAR_4;
  pair_t VAR_5, VAR_6;
  if (VAR_1 >= VAR_2) { return; }
  VAR_5 = VAR_0[(VAR_1+VAR_2)>>1];
  VAR_3 = VAR_1;
  VAR_4 = VAR_2;
  do {
    while (VAR_0[VAR_3].word < VAR_5.word || (VAR_0[VAR_3].word == VAR_5.word && VAR_0[VAR_3].doc_id < VAR_5.doc_id)) { VAR_3++; }
    while (VAR_0[VAR_4].word > VAR_5.word || (VAR_0[VAR_4].word == VAR_5.word && VAR_0[VAR_4].doc_id > VAR_5.doc_id)) { VAR_4--; }
    if (VAR_3 <= VAR_4) {
      VAR_6 = VAR_0[VAR_3]; VAR_0[VAR_3++] = VAR_0[VAR_4]; VAR_0[VAR_4--] = VAR_6;
    }
  } while (VAR_3 <= VAR_4);
  FUNC_0 (VAR_1, VAR_4);
  FUNC_0 (VAR_3, VAR_2);
}
