
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {int pc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct stackframe *VAR_0, void *VAR_1)
{
 unsigned int *VAR_2 = VAR_1;

 if (*VAR_2) {
  FUNC_0(VAR_0->pc);
  (*VAR_2)--;
 }

 return *VAR_2 == 0;
}
