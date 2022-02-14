
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rs; int rt; scalar_t__ opcode; } ;
union mips_instruction {TYPE_1__ i_format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(union mips_instruction *VAR_2)
{

 if (VAR_2->i_format.rs != 29 || VAR_2->i_format.rt != 29)
  return 0;
 if (VAR_2->i_format.opcode == VAR_0 || VAR_2->i_format.opcode == VAR_1)
  return 1;
 return 0;
}
