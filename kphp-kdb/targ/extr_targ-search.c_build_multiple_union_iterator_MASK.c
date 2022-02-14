
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct union_iterator {long cnt; TYPE_1__** H; } ;
typedef TYPE_1__* iterator_t ;
struct TYPE_4__ {int pos; int jump_to; } ;


 int VAR_0 ;

iterator_t FUNC_0 (iterator_t VAR_1) {
  struct union_iterator *VAR_2 = (struct union_iterator *) VAR_1;
  long VAR_3 = VAR_2->cnt, VAR_4;



  VAR_1->jump_to = VAR_0;
  for (VAR_4 = VAR_3 >> 1; VAR_4 >= 1; VAR_4--) {
    iterator_t VAR_5 = VAR_2->H[VAR_4];
    int VAR_6 = VAR_5->pos;
    long VAR_7 = VAR_4;
    while (1) {
      long VAR_8 = VAR_7 << 1;
      if (VAR_8 > VAR_3) {
 break;
      }
      if (VAR_8 < VAR_3 && VAR_2->H[VAR_8]->pos > VAR_2->H[VAR_8 + 1]->pos) {
 ++VAR_8;
      }
      if (VAR_6 <= VAR_2->H[VAR_8]->pos) {
 break;
      }
      VAR_2->H[VAR_7] = VAR_2->H[VAR_8];
      VAR_7 = VAR_8;
    }
    VAR_2->H[VAR_7] = VAR_5;
  }
  VAR_1->pos = VAR_2->H[1]->pos;
  return VAR_1;
}
