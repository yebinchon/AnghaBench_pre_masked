
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ip_fw {int cmd_len; TYPE_1__* cmd; } ;
struct TYPE_3__ {int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int FUNC_0 (TYPE_1__*) ;





int
FUNC_1(struct ip_fw *VAR_0)
{
 int VAR_1, VAR_2;
 ipfw_insn *VAR_3;

 VAR_2 = VAR_0->cmd_len;
 VAR_3 = VAR_0->cmd;
 VAR_1 = 0;
 for ( ; VAR_2 > 0 ; VAR_2 -= VAR_1, VAR_3 += VAR_1) {
  VAR_1 = FUNC_0(VAR_3);

  switch (VAR_3->opcode) {
  case 129:
  case 130:
  case 128:
  case 131:
   return (1);
  }
 }

 return (0);
}
