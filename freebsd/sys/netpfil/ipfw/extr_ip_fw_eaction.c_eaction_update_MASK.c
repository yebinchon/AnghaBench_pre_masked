
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int arg1; int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(ipfw_insn *VAR_0, uint16_t VAR_1)
{

 VAR_0->arg1 = VAR_1;
 FUNC_0("opcode %d, arg1 -> %d", VAR_0->opcode, VAR_0->arg1);
}
