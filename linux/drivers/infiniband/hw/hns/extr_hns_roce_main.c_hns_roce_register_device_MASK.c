
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct device* parent; } ;
struct ib_device {unsigned int phys_port_cnt; unsigned long long uverbs_cmd_mask; unsigned long long uverbs_ex_cmd_mask; int num_comp_vectors; int local_dma_lkey; TYPE_1__ dev; int node_type; } ;
struct TYPE_8__ {int notifier_call; } ;
struct hns_roce_ib_iboe {TYPE_4__ nb; int * netdevs; int lock; } ;
struct TYPE_7__ {unsigned int num_ports; int flags; int num_comp_vectors; int reserved_lkey; } ;
struct hns_roce_dev {int active; struct hns_roce_ib_iboe iboe; TYPE_3__ caps; TYPE_2__* hw; struct ib_device ib_dev; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int * hns_roce_dev_ops; int * hns_roce_dev_srq_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 unsigned long long VAR_22 ;
 unsigned long long VAR_23 ;
 unsigned long long VAR_24 ;
 unsigned long long VAR_25 ;
 unsigned long long VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (struct hns_roce_dev*) ;
 int FUNC_2 (struct ib_device*,int ,unsigned int) ;
 int FUNC_3 (struct ib_device*,char*) ;
 int FUNC_4 (struct ib_device*,int *) ;
 int FUNC_5 (struct ib_device*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct hns_roce_dev *VAR_34)
{
 int VAR_35;
 struct hns_roce_ib_iboe *VAR_36 = ((void*)0);
 struct ib_device *VAR_37 = ((void*)0);
 struct device *VAR_38 = VAR_34->dev;
 unsigned int VAR_39;

 VAR_36 = &VAR_34->iboe;
 FUNC_7(&VAR_36->lock);

 VAR_37 = &VAR_34->ib_dev;

 VAR_37->node_type = VAR_27;
 VAR_37->dev.parent = VAR_38;

 VAR_37->phys_port_cnt = VAR_34->caps.num_ports;
 VAR_37->local_dma_lkey = VAR_34->caps.reserved_lkey;
 VAR_37->num_comp_vectors = VAR_34->caps.num_comp_vectors;
 VAR_37->uverbs_cmd_mask =
  (1ULL << VAR_16) |
  (1ULL << VAR_20) |
  (1ULL << VAR_21) |
  (1ULL << VAR_5) |
  (1ULL << VAR_11) |
  (1ULL << VAR_24) |
  (1ULL << VAR_12) |
  (1ULL << VAR_6) |
  (1ULL << VAR_7) |
  (1ULL << VAR_13) |
  (1ULL << VAR_8) |
  (1ULL << VAR_17) |
  (1ULL << VAR_22) |
  (1ULL << VAR_14);

 VAR_37->uverbs_ex_cmd_mask |=
  (1ULL << VAR_26);

 if (VAR_34->caps.flags & VAR_2) {
  VAR_37->uverbs_cmd_mask |= (1ULL << VAR_25);
  FUNC_4(VAR_37, &VAR_29);
 }


 if (VAR_34->caps.flags & VAR_1) {
  VAR_37->uverbs_cmd_mask |=
     (1ULL << VAR_4) |
     (1ULL << VAR_10);
  FUNC_4(VAR_37, &VAR_30);
 }


 if (VAR_34->caps.flags & VAR_0)
  FUNC_4(VAR_37, &VAR_28);


 if (VAR_34->caps.flags & VAR_3) {
  VAR_37->uverbs_cmd_mask |=
    (1ULL << VAR_9) |
    (1ULL << VAR_18) |
    (1ULL << VAR_23) |
    (1ULL << VAR_15) |
    (1ULL << VAR_19);
  FUNC_4(VAR_37, &VAR_32);
  FUNC_4(VAR_37, VAR_34->hw->hns_roce_dev_srq_ops);
 }

 FUNC_4(VAR_37, VAR_34->hw->hns_roce_dev_ops);
 FUNC_4(VAR_37, &VAR_31);
 for (VAR_39 = 0; VAR_39 < VAR_34->caps.num_ports; VAR_39++) {
  if (!VAR_34->iboe.netdevs[VAR_39])
   continue;

  VAR_35 = FUNC_2(VAR_37, VAR_34->iboe.netdevs[VAR_39],
        VAR_39 + 1);
  if (VAR_35)
   return VAR_35;
 }
 VAR_35 = FUNC_3(VAR_37, "hns_%d");
 if (VAR_35) {
  FUNC_0(VAR_38, "ib_register_device failed!\n");
  return VAR_35;
 }

 VAR_35 = FUNC_1(VAR_34);
 if (VAR_35) {
  FUNC_0(VAR_38, "setup_mtu_mac failed!\n");
  goto error_failed_setup_mtu_mac;
 }

 VAR_36->nb.notifier_call = VAR_33;
 VAR_35 = FUNC_6(&VAR_36->nb);
 if (VAR_35) {
  FUNC_0(VAR_38, "register_netdevice_notifier failed!\n");
  goto error_failed_setup_mtu_mac;
 }

 VAR_34->active = 1;
 return 0;

error_failed_setup_mtu_mac:
 FUNC_5(VAR_37);

 return VAR_35;
}
