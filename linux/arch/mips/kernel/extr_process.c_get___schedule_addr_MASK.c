
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ opcode; int target; } ;
union mips_instruction {TYPE_1__ j_format; } ;


 unsigned long FUNC_0 (union mips_instruction*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned long FUNC_1(void)
{
 union mips_instruction *VAR_2 = (void *)VAR_1;
 int VAR_3 = 8;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2++) {
  if (VAR_2->j_format.opcode == VAR_0)
   return FUNC_0(VAR_2, VAR_2->j_format.target);
 }
 return 0;
}
