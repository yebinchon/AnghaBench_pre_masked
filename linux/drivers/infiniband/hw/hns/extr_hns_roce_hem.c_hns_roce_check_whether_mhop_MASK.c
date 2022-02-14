
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int qpc_hop_num; int mpt_hop_num; int cqc_hop_num; int srqc_hop_num; int sccc_hop_num; int qpc_timer_hop_num; int cqc_timer_hop_num; int cqe_hop_num; int mtt_hop_num; int srqwqe_hop_num; int idx_hop_num; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
bool FUNC_0(struct hns_roce_dev *VAR_0, u32 VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1) {
 case 132:
  VAR_2 = VAR_0->caps.qpc_hop_num;
  break;
 case 134:
  VAR_2 = VAR_0->caps.mpt_hop_num;
  break;
 case 138:
  VAR_2 = VAR_0->caps.cqc_hop_num;
  break;
 case 129:
  VAR_2 = VAR_0->caps.srqc_hop_num;
  break;
 case 130:
  VAR_2 = VAR_0->caps.sccc_hop_num;
  break;
 case 131:
  VAR_2 = VAR_0->caps.qpc_timer_hop_num;
  break;
 case 137:
  VAR_2 = VAR_0->caps.cqc_timer_hop_num;
  break;
 case 136:
  VAR_2 = VAR_0->caps.cqe_hop_num;
  break;
 case 133:
  VAR_2 = VAR_0->caps.mtt_hop_num;
  break;
 case 128:
  VAR_2 = VAR_0->caps.srqwqe_hop_num;
  break;
 case 135:
  VAR_2 = VAR_0->caps.idx_hop_num;
  break;
 default:
  return 0;
 }

 return VAR_2 ? 1 : 0;
}
