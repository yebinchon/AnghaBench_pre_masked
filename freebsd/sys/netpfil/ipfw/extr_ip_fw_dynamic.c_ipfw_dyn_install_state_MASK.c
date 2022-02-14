
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct ipfw_dyn_info {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct ip_fw_args {int m; int f_id; } ;
struct ip_fw {int dummy; } ;
struct TYPE_4__ {int opcode; int arg1; } ;
struct TYPE_5__ {TYPE_1__ o; scalar_t__ limit_mask; int conn_limit; } ;
typedef TYPE_2__ ipfw_insn_limit ;


 scalar_t__ FUNC_0 (struct ip_fw_chain*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ip_fw_args const*) ;
 int FUNC_4 (int *,int ,int ,void const*,int,struct ip_fw*,struct ipfw_dyn_info*,scalar_t__,scalar_t__,int ,int ) ;

int
FUNC_5(struct ip_fw_chain *VAR_1, struct ip_fw *VAR_2,
    const ipfw_insn_limit *VAR_3, const struct ip_fw_args *VAR_4,
    const void *VAR_5, int VAR_6, struct ipfw_dyn_info *VAR_7,
    uint32_t VAR_8)
{
 uint32_t VAR_9;
 uint16_t VAR_10;

 if (VAR_3->o.opcode == VAR_0) {
  VAR_9 = FUNC_0(VAR_1, VAR_3->conn_limit, VAR_9);
  VAR_10 = VAR_3->limit_mask;
 } else {
  VAR_9 = 0;
  VAR_10 = 0;
 }
 return (FUNC_4(&VAR_4->f_id,



     0, FUNC_2(VAR_4->m), VAR_5, VAR_6, VAR_2, VAR_7, VAR_9,
     VAR_10, VAR_3->o.arg1, VAR_3->o.opcode));
}
