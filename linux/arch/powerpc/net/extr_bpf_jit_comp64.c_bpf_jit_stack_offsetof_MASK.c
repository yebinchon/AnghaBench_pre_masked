
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codegen_context {int stack_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct codegen_context*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct codegen_context *VAR_2, int VAR_3)
{
 if (VAR_3 >= VAR_0 && VAR_3 < 32)
  return (FUNC_1(VAR_2) ?
   (VAR_1 + VAR_2->stack_size) : 0)
    - (8 * (32 - VAR_3));

 FUNC_2("BPF JIT is asking about unknown registers");
 FUNC_0();
}
