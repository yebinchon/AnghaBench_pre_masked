
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ opcode; int rt; } ;
struct TYPE_3__ {scalar_t__ func; int rs; } ;
union mips_instruction {TYPE_2__ i_format; TYPE_1__ r_format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(union mips_instruction *VAR_2)
{

 if (VAR_2->r_format.func == VAR_0 && VAR_2->r_format.rs == 31)
  return 1;

 if (VAR_2->i_format.opcode == VAR_1 && VAR_2->i_format.rt == 28)
  return 1;
 return 0;
}
