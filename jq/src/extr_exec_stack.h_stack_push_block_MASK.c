
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {scalar_t__ limit; scalar_t__ bound; } ;
typedef scalar_t__ stack_ptr ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 scalar_t__* FUNC_1 (struct stack*,scalar_t__) ;
 int FUNC_2 (struct stack*,int) ;

__attribute__((used)) static stack_ptr FUNC_3(struct stack* VAR_1, stack_ptr VAR_2, size_t VAR_3) {
  int VAR_4 = FUNC_0(VAR_3) + VAR_0;
  stack_ptr VAR_5 = VAR_1->limit - VAR_4;
  if (VAR_5 < VAR_1->bound) {
    FUNC_2(VAR_1, VAR_4);
  }
  VAR_1->limit = VAR_5;
  *FUNC_1(VAR_1, VAR_5) = VAR_2;
  return VAR_5;
}
