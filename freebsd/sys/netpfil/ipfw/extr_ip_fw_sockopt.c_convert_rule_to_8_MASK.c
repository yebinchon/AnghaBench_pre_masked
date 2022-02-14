
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ip_fw_rule0 {int cmd_len; int timestamp; int bcnt; int pcnt; scalar_t__ id; struct ip_fw* next_rule; int act_ofs; int rulenum; int set; int _pad; struct ip_fw7* cmd; } ;
struct ip_fw7 {int cmd_len; scalar_t__ opcode; int timestamp; int bcnt; int pcnt; scalar_t__ next_rule; int act_ofs; int rulenum; int set; int _pad; struct ip_fw7* cmd; } ;
struct ip_fw {int dummy; } ;
typedef struct ip_fw7 ipfw_insn ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw7*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ip_fw7*,struct ip_fw7*,int) ;
 int FUNC_2 (struct ip_fw7*,int ) ;
 struct ip_fw7* FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_rule0 *VAR_6)
{

 struct ip_fw7 *VAR_7 = (struct ip_fw7 *) VAR_6;


 ipfw_insn *VAR_8, *VAR_9;
 int VAR_10 = 0, VAR_11 = 0;


 struct ip_fw7 *VAR_12 = FUNC_3(VAR_5, VAR_2, VAR_1 | VAR_3);
 if (VAR_12 == ((void*)0)) {
  return 1;
 }

 FUNC_1(VAR_7, VAR_12, VAR_5);

 for (VAR_10 = VAR_12->cmd_len, VAR_8 = VAR_12->cmd, VAR_9 = VAR_6->cmd ;
   VAR_10 > 0 ; VAR_10 -= VAR_11, VAR_8 += VAR_11, VAR_9 += VAR_11) {
  VAR_11 = FUNC_0(VAR_8);

  FUNC_1(VAR_8, VAR_9, FUNC_0(VAR_8)*sizeof(uint32_t));

  if (VAR_9->opcode > VAR_4)



   VAR_9->opcode++;

  if (VAR_11 > VAR_10) {
   FUNC_4("ipfw: opcode %d size truncated\n",
       VAR_8->opcode);
   return VAR_0;
  }
 }

 VAR_6->_pad = VAR_12->_pad;
 VAR_6->set = VAR_12->set;
 VAR_6->rulenum = VAR_12->rulenum;
 VAR_6->cmd_len = VAR_12->cmd_len;
 VAR_6->act_ofs = VAR_12->act_ofs;
 VAR_6->next_rule = (struct ip_fw *)VAR_12->next_rule;
 VAR_6->cmd_len = VAR_12->cmd_len;
 VAR_6->id = 0;
 VAR_6->pcnt = VAR_12->pcnt;
 VAR_6->bcnt = VAR_12->bcnt;
 VAR_6->timestamp = VAR_12->timestamp;

 FUNC_2 (VAR_12, VAR_2);
 return 0;
}
