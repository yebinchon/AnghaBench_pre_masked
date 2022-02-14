
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct explicit_list_iterator {int pos; int* cur; int* last; void* jump_to; } ;
typedef scalar_t__ iterator_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;

int FUNC_1 (iterator_t VAR_2, int VAR_3) {
  struct explicit_list_iterator *VAR_4 = (struct explicit_list_iterator *) VAR_2;
  FUNC_0 (VAR_3 > VAR_4->pos);
  if (VAR_4->cur == VAR_4->last) {
    VAR_4->jump_to = VAR_1;
    return VAR_4->pos = VAR_0;
  }
  if (VAR_3 <= *VAR_4->cur) {
    return VAR_4->pos = *(VAR_4->cur++);
  }
  int *VAR_5 = VAR_4->cur;
  long VAR_6 = 0, VAR_7 = 1, VAR_8 = VAR_4->last - VAR_5;
  if (VAR_7 < VAR_8) {
    while (VAR_5[VAR_7] < VAR_3) {
      VAR_6 = VAR_7;
      VAR_7 <<= 1;
      if (VAR_7 >= VAR_8) {
 VAR_7 = VAR_8;
 break;
      }
    }
  }

  while (VAR_7 - VAR_6 > 1) {
    VAR_8 = (VAR_6 + VAR_7) >> 1;
    if (VAR_5[VAR_8] < VAR_3) {
      VAR_6 = VAR_8;
    } else {
      VAR_7 = VAR_8;
    }
  }
  VAR_5 += VAR_7;
  if (VAR_5 == VAR_4->last) {
    VAR_4->cur = VAR_5;
    VAR_4->jump_to = VAR_1;
    return VAR_4->pos = VAR_0;
  }
  VAR_4->cur = VAR_5 + 1;
  return VAR_4->pos = *VAR_5;
}
