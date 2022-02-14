
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ip_fw_rule {int cmd_len; int cmd; int id; int flags; int set; int rulenum; int act_ofs; } ;
struct ip_fw_bcounter {int dummy; } ;
struct ip_fw {int cmd_len; int cmd; int id; int flags; int set; int rulenum; int act_ofs; } ;
struct TYPE_2__ {int length; int type; } ;
typedef TYPE_1__ ipfw_obj_tlv ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw*,struct ip_fw_bcounter*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ip_fw *VAR_1, caddr_t VAR_2, int VAR_3, int VAR_4)
{
 struct ip_fw_bcounter *VAR_5;
 struct ip_fw_rule *VAR_6;
 ipfw_obj_tlv *VAR_7;


 VAR_7 = (ipfw_obj_tlv *)VAR_2;
 VAR_7->type = VAR_0;
 VAR_7->length = VAR_3;

 if (VAR_4 != 0) {

  VAR_5 = (struct ip_fw_bcounter *)(VAR_7 + 1);
  VAR_6 = (struct ip_fw_rule *)(VAR_5 + 1);
  FUNC_0(VAR_1, VAR_5);
 } else
  VAR_6 = (struct ip_fw_rule *)(VAR_7 + 1);


 VAR_6->act_ofs = VAR_1->act_ofs;
 VAR_6->cmd_len = VAR_1->cmd_len;
 VAR_6->rulenum = VAR_1->rulenum;
 VAR_6->set = VAR_1->set;
 VAR_6->flags = VAR_1->flags;
 VAR_6->id = VAR_1->id;


 FUNC_1(VAR_6->cmd, VAR_1->cmd, VAR_1->cmd_len * sizeof(uint32_t));
}
