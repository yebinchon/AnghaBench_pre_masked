
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {int sp; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static __inline bool
FUNC_1(const struct stack *VAR_0)
{
 bool VAR_1 = VAR_0->sp == -1;

 if (VAR_1)
  FUNC_0("stack empty");
 return VAR_1;
}
