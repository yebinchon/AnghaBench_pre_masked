
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ip_fw_rule0 {int cmd_len; scalar_t__ opcode; struct ip_fw_rule0* cmd; int timestamp; int bcnt; int pcnt; scalar_t__ next_rule; int act_ofs; int rulenum; int set; } ;
struct ip_fw7 {int cmd_len; struct ip_fw_rule0* cmd; int timestamp; int bcnt; int pcnt; struct ip_fw7* next_rule; int act_ofs; int rulenum; int set; } ;
typedef struct ip_fw_rule0 ipfw_insn ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_rule0*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ip_fw_rule0*,struct ip_fw_rule0*,int) ;
 int FUNC_2 (struct ip_fw_rule0*,int ) ;
 struct ip_fw_rule0* FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_rule0 *VAR_6)
{

 struct ip_fw7 *VAR_7 = (struct ip_fw7 *)VAR_6;

 struct ip_fw_rule0 *VAR_8;


 ipfw_insn *VAR_9, *VAR_10;
 int VAR_11 = 0, VAR_12 = 0;

 VAR_8 = FUNC_3(VAR_5, VAR_2, VAR_1 | VAR_3);
 if (VAR_8 == ((void*)0)) {
  return 1;
 }
 FUNC_1(VAR_6, VAR_8, VAR_5);



 VAR_7->set = VAR_8->set;
 VAR_7->rulenum = VAR_8->rulenum;
 VAR_7->cmd_len = VAR_8->cmd_len;
 VAR_7->act_ofs = VAR_8->act_ofs;
 VAR_7->next_rule = (struct ip_fw7 *)VAR_8->next_rule;
 VAR_7->cmd_len = VAR_8->cmd_len;
 VAR_7->pcnt = VAR_8->pcnt;
 VAR_7->bcnt = VAR_8->bcnt;
 VAR_7->timestamp = VAR_8->timestamp;


 for (VAR_11 = VAR_8->cmd_len, VAR_9 = VAR_8->cmd, VAR_10 = VAR_7->cmd ;
   VAR_11 > 0 ; VAR_11 -= VAR_12, VAR_9 += VAR_12, VAR_10 += VAR_12) {
  VAR_12 = FUNC_0(VAR_9);

  FUNC_1(VAR_9, VAR_10, FUNC_0(VAR_9)*sizeof(uint32_t));

  if (VAR_10->opcode > VAR_4)



   VAR_10->opcode--;

  if (VAR_12 > VAR_11) {
   FUNC_4("ipfw: opcode %d size truncated\n",
    VAR_9->opcode);
   return VAR_0;
  }
 }
 FUNC_2(VAR_8, VAR_2);

 return 0;
}
