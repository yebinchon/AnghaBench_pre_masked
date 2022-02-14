
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct condition_filter_iterator {int pos; TYPE_1__* A; int Cond; int (* jump_to ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__* iterator_t ;
typedef int condition_t ;
struct TYPE_5__ {int pos; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 struct condition_filter_iterator* FUNC_1 (int) ;

iterator_t FUNC_2 (iterator_t VAR_0, condition_t VAR_1) {
  struct condition_filter_iterator *VAR_2 = FUNC_1 (sizeof (struct condition_filter_iterator));
  VAR_2->jump_to = FUNC_0;
  VAR_2->Cond = VAR_1;
  VAR_2->A = VAR_0;
  VAR_2->pos = VAR_0->pos;
  FUNC_0 ((iterator_t) VAR_2, VAR_0->pos);
  return (iterator_t) VAR_2;
}
