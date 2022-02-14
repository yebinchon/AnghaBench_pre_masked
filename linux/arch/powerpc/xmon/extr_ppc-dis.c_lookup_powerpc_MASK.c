
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerpc_operand {int (* extract ) (unsigned long,int,int*) ;} ;
struct powerpc_opcode {unsigned long mask; unsigned long opcode; int flags; int deprecated; unsigned char* operands; } ;
typedef int ppc_cpu_t ;


 int VAR_0 ;
 struct powerpc_opcode* VAR_1 ;
 struct powerpc_operand* VAR_2 ;
 int FUNC_0 (unsigned long,int,int*) ;

__attribute__((used)) static const struct powerpc_opcode *
FUNC_1 (unsigned long VAR_3, ppc_cpu_t VAR_4)
{
  const struct powerpc_opcode *VAR_5;
  const struct powerpc_opcode *VAR_6;

  VAR_6 = VAR_1 + VAR_0;

  for (VAR_5 = VAR_1; VAR_5 < VAR_6; ++VAR_5)
    {
      const unsigned char *VAR_7;
      const struct powerpc_operand *VAR_8;
      int VAR_9;

      if ((VAR_3 & VAR_5->mask) != VAR_5->opcode
   || (VAR_4 != (ppc_cpu_t) -1
       && ((VAR_5->flags & VAR_4) == 0
    || (VAR_5->deprecated & VAR_4) != 0)))
 continue;


      VAR_9 = 0;
      for (VAR_7 = VAR_5->operands; *VAR_7 != 0; VAR_7++)
 {
   VAR_8 = VAR_2 + *VAR_7;
   if (VAR_8->extract)
     (*VAR_8->extract) (VAR_3, VAR_4, &VAR_9);
 }
      if (VAR_9)
 continue;

      return VAR_5;
    }

  return ((void*)0);
}
