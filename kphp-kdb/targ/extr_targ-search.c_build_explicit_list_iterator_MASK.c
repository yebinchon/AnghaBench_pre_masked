
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct explicit_list_iterator {int* last; int* cur; int pos; int jump_to; } ;
typedef int iterator_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct explicit_list_iterator* FUNC_1 (int) ;

iterator_t FUNC_2 (int *VAR_1, int VAR_2) {
  if (VAR_2 <= 0) {
    return FUNC_0 ();
  }
  struct explicit_list_iterator *VAR_3 = FUNC_1 (sizeof (struct explicit_list_iterator));
  VAR_3->jump_to = VAR_0;
  VAR_3->last = VAR_1 + VAR_2;
  VAR_3->cur = VAR_1 + 1;
  VAR_3->pos = VAR_1[0];

  return (iterator_t) VAR_3;
}
