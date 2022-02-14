
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_sopt_handler {scalar_t__ opcode; scalar_t__ version; int * handler; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct ipfw_sopt_handler *VAR_2, *VAR_3;

 VAR_2 = (const struct ipfw_sopt_handler *)VAR_0;
 VAR_3 = (const struct ipfw_sopt_handler *)VAR_1;

 if (VAR_2->opcode < VAR_3->opcode)
  return (-1);
 else if (VAR_2->opcode > VAR_3->opcode)
  return (1);

 if (VAR_2->version < VAR_3->version)
  return (-1);
 else if (VAR_2->version > VAR_3->version)
  return (1);


 if (VAR_2->handler == ((void*)0))
  return (0);

 if ((uintptr_t)VAR_2->handler < (uintptr_t)VAR_3->handler)
  return (-1);
 else if ((uintptr_t)VAR_2->handler > (uintptr_t)VAR_3->handler)
  return (1);

 return (0);
}
