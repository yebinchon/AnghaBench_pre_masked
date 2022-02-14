
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rule_check_info {int dummy; } ;
struct ip_fw_rule {int act_ofs; int cmd_len; int rulenum; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_fw_rule*) ;
 int FUNC_1 (int ,int,struct rule_check_info*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_rule *VAR_2, int VAR_3,
    struct rule_check_info *VAR_4)
{
 int VAR_5;

 if (VAR_3 < sizeof(*VAR_2)) {
  FUNC_2("ipfw: rule too short\n");
  return (VAR_0);
 }


 VAR_5 = FUNC_3(FUNC_0(VAR_2), sizeof(uint64_t));
 if (VAR_5 != VAR_3) {
  FUNC_2("ipfw: size mismatch (have %d want %d)\n", VAR_3, VAR_5);
  return (VAR_0);
 }
 if (VAR_2->act_ofs >= VAR_2->cmd_len) {
  FUNC_2("ipfw: bogus action offset (%u > %u)\n",
      VAR_2->act_ofs, VAR_2->cmd_len - 1);
  return (VAR_0);
 }

 if (VAR_2->rulenum > VAR_1 - 1)
  return (VAR_0);

 return (FUNC_1(VAR_2->cmd, VAR_2->cmd_len, VAR_4));
}
