
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct condition_with_iterator {int Iter; void* false_branch; void* true_branch; int eval; } ;
typedef int iterator_t ;
typedef void* condition_t ;


 int VAR_0 ;
 struct condition_with_iterator* FUNC_0 (int) ;

condition_t FUNC_1 (iterator_t VAR_1, condition_t VAR_2, condition_t VAR_3) {
  struct condition_with_iterator *VAR_4 = FUNC_0 (sizeof (struct condition_with_iterator));
  VAR_4->eval = VAR_0;
  VAR_4->true_branch = VAR_2;
  VAR_4->false_branch = VAR_3;
  VAR_4->Iter = VAR_1;
  return (condition_t) VAR_4;
}
