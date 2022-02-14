
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rx_drops; int rx_pkts; int rx_bytes; int tx_pkts; int tx_bytes; } ;
union efa_com_get_stats_result {TYPE_2__ basic_stats; } ;
struct efa_com_get_stats_params {int scope_modifier; int scope; int type; } ;
struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct TYPE_4__ {int opcode; } ;
struct efa_admin_aq_get_stats_cmd {int scope_modifier; int scope; int type; TYPE_1__ aq_common_descriptor; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct TYPE_6__ {int rx_drops; int rx_pkts; int rx_bytes; int tx_pkts; int tx_bytes; } ;
struct efa_admin_acq_get_stats_resp {TYPE_3__ basic_stats; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int) ;

int FUNC_2(struct efa_com_dev *VAR_1,
        struct efa_com_get_stats_params *VAR_2,
        union efa_com_get_stats_result *VAR_3)
{
 struct efa_com_admin_queue *VAR_4 = &VAR_1->aq;
 struct efa_admin_aq_get_stats_cmd VAR_5 = {};
 struct efa_admin_acq_get_stats_resp VAR_6;
 int VAR_7;

 VAR_5.aq_common_descriptor.opcode = VAR_0;
 VAR_5.type = VAR_2->type;
 VAR_5.scope = VAR_2->scope;
 VAR_5.scope_modifier = VAR_2->scope_modifier;

 VAR_7 = FUNC_0(VAR_4,
          (struct efa_admin_aq_entry *)&VAR_5,
          sizeof(VAR_5),
          (struct efa_admin_acq_entry *)&VAR_6,
          sizeof(VAR_6));
 if (VAR_7) {
  FUNC_1(
   VAR_1->efa_dev,
   "Failed to get stats type-%u scope-%u.%u [%d]\n",
   VAR_5.type, VAR_5.scope, VAR_5.scope_modifier, VAR_7);
  return VAR_7;
 }

 VAR_3->basic_stats.tx_bytes = VAR_6.basic_stats.tx_bytes;
 VAR_3->basic_stats.tx_pkts = VAR_6.basic_stats.tx_pkts;
 VAR_3->basic_stats.rx_bytes = VAR_6.basic_stats.rx_bytes;
 VAR_3->basic_stats.rx_pkts = VAR_6.basic_stats.rx_pkts;
 VAR_3->basic_stats.rx_drops = VAR_6.basic_stats.rx_drops;

 return 0;
}
