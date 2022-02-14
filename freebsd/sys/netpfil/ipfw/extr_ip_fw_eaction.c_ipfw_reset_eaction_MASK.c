
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ip_fw_chain {int dummy; } ;
struct ip_fw {int cmd_len; TYPE_1__* cmd; int rulenum; } ;
struct TYPE_4__ {scalar_t__ opcode; scalar_t__ arg1; } ;
typedef TYPE_1__ ipfw_insn ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_5 (struct ip_fw*) ;

int
FUNC_6(struct ip_fw_chain *VAR_2, struct ip_fw *VAR_3,
    uint16_t VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
 ipfw_insn *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);





 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7->opcode != VAR_0 ||
     VAR_7->arg1 != VAR_4)
  return (0);
 VAR_9 = VAR_3->cmd + VAR_3->cmd_len - VAR_7;
 if (VAR_9 > 1) {
  FUNC_4(FUNC_1(VAR_7) == 1);
  VAR_8 = VAR_7 + 1;
  if (VAR_8->opcode == VAR_1 &&
      VAR_6 != 0 && VAR_8->arg1 != VAR_6)
   return (0);






  FUNC_0("truncate rule %d: len %u -> %u",
      VAR_3->rulenum, VAR_3->cmd_len,
      VAR_3->cmd_len - FUNC_1(VAR_8));
  VAR_3->cmd_len -= FUNC_1(VAR_8);
  FUNC_4(((uint32_t *)VAR_8 -
      (uint32_t *)VAR_3->cmd) == VAR_3->cmd_len);
 }

 VAR_7->arg1 = VAR_5;



 return (1);
}
