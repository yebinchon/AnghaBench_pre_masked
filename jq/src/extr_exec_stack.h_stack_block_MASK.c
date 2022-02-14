
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {scalar_t__ mem_end; } ;
typedef scalar_t__ stack_ptr ;



__attribute__((used)) static void* FUNC_0(struct stack* VAR_0, stack_ptr VAR_1) {
  return (void*)(VAR_0->mem_end + VAR_1);
}
