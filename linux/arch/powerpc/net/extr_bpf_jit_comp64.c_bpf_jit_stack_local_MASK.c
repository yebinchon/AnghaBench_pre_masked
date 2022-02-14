
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codegen_context {int stack_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct codegen_context*) ;

__attribute__((used)) static int FUNC_1(struct codegen_context *VAR_2)
{
 if (FUNC_0(VAR_2))
  return VAR_1 + VAR_2->stack_size;
 else
  return -(VAR_0 + 16);
}
