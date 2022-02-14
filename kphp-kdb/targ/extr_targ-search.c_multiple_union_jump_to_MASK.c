
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct union_iterator {long cnt; int pos; TYPE_1__** H; } ;
struct binary_operation_iterator {TYPE_1__* B; TYPE_1__* A; } ;
typedef TYPE_1__* iterator_t ;
struct TYPE_5__ {int pos; int (* jump_to ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3 (iterator_t VAR_1, int VAR_2) {
  struct union_iterator *VAR_3 = (struct union_iterator *)VAR_1;
  long VAR_4 = VAR_3->cnt;
  while (VAR_3->H[1]->pos < VAR_2) {
    int VAR_5 = VAR_3->H[1]->jump_to (VAR_3->H[1], VAR_2);
    iterator_t VAR_6 = VAR_3->H[1];
    if (VAR_5 == VAR_0) {
      if (VAR_4 <= 3) {
 FUNC_0 (VAR_4 == 3);
 VAR_1->jump_to = FUNC_1;
 ((struct binary_operation_iterator *)VAR_1)->A = VAR_3->H[2];
 ((struct binary_operation_iterator *)VAR_1)->B = VAR_3->H[3];
 return FUNC_1 (VAR_1, VAR_2);
      }
      VAR_6 = VAR_3->H[VAR_4];
      VAR_3->cnt = --VAR_4;
      VAR_5 = VAR_6->pos;
    }
    long VAR_7 = 1;
    while (1) {
      long VAR_8 = VAR_7 << 1;
      if (VAR_8 > VAR_4) {
 break;
      }
      if (VAR_8 < VAR_4 && VAR_3->H[VAR_8]->pos > VAR_3->H[VAR_8 + 1]->pos) {
 ++VAR_8;
      }
      if (VAR_5 <= VAR_3->H[VAR_8]->pos) {
 break;
      }
      VAR_3->H[VAR_7] = VAR_3->H[VAR_8];
      VAR_7 = VAR_8;
    }
    VAR_3->H[VAR_7] = VAR_6;
  }
  return VAR_3->pos = VAR_3->H[1]->pos;
}
