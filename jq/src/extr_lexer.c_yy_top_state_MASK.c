
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yyscan_t ;
struct yyguts_t {int* yy_start_stack; int yy_start_stack_ptr; } ;



__attribute__((used)) static int FUNC_0 (yyscan_t VAR_0)
{
    struct yyguts_t * VAR_1 = (struct yyguts_t*)VAR_0;
 return VAR_1->yy_start_stack[VAR_1->yy_start_stack_ptr - 1];
}
