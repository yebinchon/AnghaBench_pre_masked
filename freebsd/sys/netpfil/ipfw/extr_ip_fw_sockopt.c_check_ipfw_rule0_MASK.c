
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rule_check_info {int dummy; } ;
struct ip_fw_rule0 {int cmd_len; int act_ofs; int rulenum; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct rule_check_info*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(struct ip_fw_rule0 *VAR_2, int VAR_3,
    struct rule_check_info *VAR_4)
{
 int VAR_5;

 if (VAR_3 < sizeof(*VAR_2)) {
  FUNC_1("ipfw: rule too short\n");
  return (VAR_0);
 }


 VAR_5 = sizeof(*VAR_2) + VAR_2->cmd_len * 4 - 4;
 if (VAR_5 != VAR_3) {
  FUNC_1("ipfw: size mismatch (have %d want %d)\n", VAR_3, VAR_5);
  return (VAR_0);
 }
 if (VAR_2->act_ofs >= VAR_2->cmd_len) {
  FUNC_1("ipfw: bogus action offset (%u > %u)\n",
      VAR_2->act_ofs, VAR_2->cmd_len - 1);
  return (VAR_0);
 }

 if (VAR_2->rulenum > VAR_1 - 1)
  return (VAR_0);

 return (FUNC_0(VAR_2->cmd, VAR_2->cmd_len, VAR_4));
}
