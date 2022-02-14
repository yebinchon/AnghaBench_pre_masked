
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerpc_operand {int flags; long shift; } ;


 int VAR_0 ;

__attribute__((used)) static inline long
FUNC_0 (const struct powerpc_operand *VAR_1)
{
  if ((VAR_1->flags & VAR_0) != 0)
    return (VAR_1+1)->shift;
  return 0;
}
