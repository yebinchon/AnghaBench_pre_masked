
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerpc_operand {int flags; } ;
typedef int ppc_cpu_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct powerpc_operand const*,unsigned long,int ) ;
 struct powerpc_operand* VAR_2 ;
 scalar_t__ FUNC_1 (struct powerpc_operand const*) ;

__attribute__((used)) static int
FUNC_2 (const unsigned char *VAR_3,
   unsigned long VAR_4, ppc_cpu_t VAR_5)
{
  const struct powerpc_operand *VAR_6;

  for (; *VAR_3 != 0; VAR_3++)
    {
      VAR_6 = &VAR_2[*VAR_3];
      if ((VAR_6->flags & VAR_0) != 0
   || ((VAR_6->flags & VAR_1) != 0
       && FUNC_0 (VAR_6, VAR_4, VAR_5) !=
   FUNC_1 (VAR_6)))
 return 0;
    }

  return 1;
}
