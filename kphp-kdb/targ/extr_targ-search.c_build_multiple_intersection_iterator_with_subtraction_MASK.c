
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intersection_condition_iterator {int (* jump_to ) (scalar_t__,int ) ;scalar_t__ Cond; } ;
typedef scalar_t__ iterator_t ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

iterator_t FUNC_3 (iterator_t VAR_0) {
  struct intersection_condition_iterator *VAR_1 = (struct intersection_condition_iterator *)VAR_0;
  if (VAR_1->Cond) {
    VAR_1->jump_to = FUNC_1;
  } else {
    VAR_1->jump_to = FUNC_0;
  }
  VAR_1->jump_to (VAR_0, 0);
  return VAR_0;
}
