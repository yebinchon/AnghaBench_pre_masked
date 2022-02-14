
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {scalar_t__ limit; } ;
typedef scalar_t__ stack_ptr ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 scalar_t__* FUNC_1 (struct stack*,scalar_t__) ;

__attribute__((used)) static stack_ptr FUNC_2(struct stack* VAR_1, stack_ptr VAR_2, size_t VAR_3) {
  stack_ptr VAR_4 = *FUNC_1(VAR_1, VAR_2);
  if (VAR_2 == VAR_1->limit) {
    int VAR_5 = FUNC_0(VAR_3) + VAR_0;
    VAR_1->limit += VAR_5;
  }
  return VAR_4;
}
