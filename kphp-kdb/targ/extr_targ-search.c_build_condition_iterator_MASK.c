
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct condition_iterator {int pos; int (* jump_to ) (int ,int ) ;int Cond; } ;
typedef int iterator_t ;
typedef int condition_t ;


 int FUNC_0 (int ,int ) ;
 struct condition_iterator* FUNC_1 (int) ;

iterator_t FUNC_2 (condition_t VAR_0) {
  struct condition_iterator *VAR_1 = FUNC_1 (sizeof (struct condition_iterator));
  VAR_1->pos = -1;
  VAR_1->Cond = VAR_0;
  VAR_1->jump_to = FUNC_0;
  FUNC_0 ((iterator_t) VAR_1, 0);
  return (iterator_t) VAR_1;
}
