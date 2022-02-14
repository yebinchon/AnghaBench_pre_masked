
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ opcode; scalar_t__ arg1; } ;
typedef TYPE_1__ ipfw_insn ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(ipfw_insn *VAR_1, uint16_t *VAR_2, uint8_t *VAR_3)
{

 FUNC_0("opcode %d, arg1 %d", VAR_1->opcode, VAR_1->arg1);

 if (VAR_1->arg1 == 0 &&
     VAR_1->opcode == VAR_0)
  return (1);

 *VAR_2 = VAR_1->arg1;
 *VAR_3 = 0;
 return (0);
}
