
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct stack {size_t sp; int * stack; } ;
typedef size_t ssize_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *,char const*,int ) ;
 int FUNC_1 (char,int *) ;

void
FUNC_2(FILE *VAR_0, const struct stack *VAR_1, const char *VAR_2, u_int VAR_3)
{
 ssize_t VAR_4;

 for (VAR_4 = VAR_1->sp; VAR_4 >= 0; VAR_4--) {
  FUNC_0(VAR_0, &VAR_1->stack[VAR_4], VAR_2, VAR_3);
  FUNC_1('\n', VAR_0);
 }
}
