
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct ip_fw_rule0 {int cmd_len; int _pad; TYPE_4__* cmd; int pcnt; int set; int rulenum; int act_ofs; } ;
struct ip_fw_bcounter0 {int dummy; } ;
struct ip_fw {int cmd_len; int flags; int cmd; int set; int rulenum; int act_ofs; } ;
struct TYPE_8__ {int conn_limit; } ;
typedef TYPE_2__ ipfw_insn_limit ;
struct TYPE_7__ {int kidx; int glob; } ;
struct TYPE_9__ {char* name; TYPE_1__ p; } ;
typedef TYPE_3__ ipfw_insn_if ;
struct TYPE_10__ {int opcode; int arg1; } ;
typedef TYPE_4__ ipfw_insn ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ip_fw*,struct ip_fw_bcounter0*) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (struct ip_fw_rule0*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ip_fw *VAR_4, struct ip_fw_rule0 *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 ipfw_insn *VAR_9;
 ipfw_insn_limit *VAR_10;
 ipfw_insn_if *VAR_11;


 FUNC_3(VAR_5, 0, VAR_6);
 VAR_5->act_ofs = VAR_4->act_ofs;
 VAR_5->cmd_len = VAR_4->cmd_len;
 VAR_5->rulenum = VAR_4->rulenum;
 VAR_5->set = VAR_4->set;
 if ((VAR_4->flags & VAR_0) != 0)
  VAR_5->_pad |= 1;


 FUNC_2(VAR_5->cmd, VAR_4->cmd, VAR_4->cmd_len * sizeof(uint32_t));


 FUNC_1(VAR_4, (struct ip_fw_bcounter0 *)&VAR_5->pcnt);







 VAR_8 = VAR_5->cmd_len;
 VAR_9 = VAR_5->cmd;
 VAR_7 = 0;

 for ( ; VAR_8 > 0 ; VAR_8 -= VAR_7, VAR_9 += VAR_7) {
  VAR_7 = FUNC_0(VAR_9);

  switch (VAR_9->opcode) {

  case 132:
  case 131:
  case 138:
  case 137:
  case 143:
  case 130:
  case 133:
  case 144:
  case 140:
  case 139:
  case 141:
   if (VAR_9->arg1 == VAR_3)
    VAR_9->arg1 = VAR_2;
   else if (VAR_9->arg1 == VAR_1)
    VAR_9->arg1 = 0;
   break;
  case 134:
  case 135:
   if (VAR_9->arg1 == VAR_3)
    VAR_9->arg1 = VAR_2;
   else
    VAR_9->arg1 &= ~0x8000;
   break;
  case 142:
   VAR_10 = (ipfw_insn_limit *)VAR_9;
   if (VAR_10->conn_limit == VAR_3)
    VAR_10->conn_limit = VAR_2;
   break;

  case 128:
  case 136:
  case 129:

   VAR_11 = (ipfw_insn_if *)VAR_9;
   if (VAR_11->name[0] != '\1')
    break;

   VAR_11->p.glob = VAR_11->p.kidx;
   break;
  }
 }
}
