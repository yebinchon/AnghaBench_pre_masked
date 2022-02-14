
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct tid_info {int dummy; } ;
struct rule_check_info {scalar_t__ object_opcodes; } ;
struct obj_idx {int off; } ;
struct ip_fw_chain {int dummy; } ;
struct ip_fw {int cmd_len; int * cmd; } ;
typedef int ipfw_insn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*,int *,struct obj_idx*,struct obj_idx*,struct tid_info*) ;
 int FUNC_4 (struct ip_fw_chain*,int *,struct tid_info*,struct obj_idx*,int*) ;
 int FUNC_5 (struct ip_fw_chain*,int *,struct obj_idx*,struct obj_idx*) ;

__attribute__((used)) static int
FUNC_6(struct ip_fw_chain *VAR_0, struct ip_fw *VAR_1,
    struct rule_check_info *VAR_2, struct obj_idx *VAR_3, struct tid_info *VAR_4)
{
 struct obj_idx *VAR_5;
 ipfw_insn *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_5 = VAR_3;
 VAR_9 = VAR_1->cmd_len;
 VAR_6 = VAR_1->cmd;
 VAR_7 = 0;
 VAR_8 = 0;

 FUNC_1(VAR_0);


 for ( ; VAR_9 > 0 ; VAR_9 -= VAR_7, VAR_6 += VAR_7) {
  VAR_7 = FUNC_0(VAR_6);
  VAR_10 = 0;

  VAR_8 = FUNC_4(VAR_0, VAR_6, VAR_4, VAR_5, &VAR_10);
  if (VAR_8 != 0)
   break;




  if (VAR_10 != 0) {
   VAR_5->off = VAR_1->cmd_len - VAR_9;
   VAR_5++;
  }
 }

 if (VAR_8 != 0) {

  FUNC_5(VAR_0, VAR_1->cmd, VAR_3, VAR_5);
  FUNC_2(VAR_0);
  return (VAR_8);
 }
 FUNC_2(VAR_0);


 if (VAR_5 != VAR_3)
  VAR_8 = FUNC_3(VAR_0, VAR_1->cmd, VAR_3, VAR_5, VAR_4);


 VAR_2->object_opcodes = (uint16_t)(VAR_5 - VAR_3);

 return (VAR_8);
}
