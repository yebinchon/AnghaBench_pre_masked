
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct net_device {int name; int dev_addr; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_6__ {unsigned long long uverbs_cmd_mask; int phys_port_cnt; int iw_ifname; TYPE_2__ dev; int num_comp_vectors; int node_guid; int node_type; } ;
struct i40iw_ib_device {TYPE_3__ ibdev; struct i40iw_device* iwdev; } ;
struct TYPE_4__ {scalar_t__ dev_context; } ;
struct i40iw_device {int ceqs_count; struct i40iw_ib_device* iwibdev; TYPE_1__ hw; struct net_device* netdev; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
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
 int VAR_20 ;
 int FUNC_0 (int *,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (char*) ;
 struct i40iw_ib_device* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int VAR_23 ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static struct i40iw_ib_device *FUNC_5(struct i40iw_device *VAR_24)
{
 struct i40iw_ib_device *VAR_25;
 struct net_device *VAR_26 = VAR_24->netdev;
 struct pci_dev *VAR_27 = (struct pci_dev *)VAR_24->hw.dev_context;

 VAR_25 = FUNC_2(VAR_22, VAR_23);
 if (!VAR_25) {
  FUNC_1("iwdev == NULL\n");
  return ((void*)0);
 }
 VAR_24->iwibdev = VAR_25;
 VAR_25->iwdev = VAR_24;

 VAR_25->ibdev.node_type = VAR_20;
 FUNC_0((u8 *)&VAR_25->ibdev.node_guid, VAR_26->dev_addr);

 VAR_25->ibdev.uverbs_cmd_mask =
     (1ull << VAR_10) |
     (1ull << VAR_15) |
     (1ull << VAR_16) |
     (1ull << VAR_0) |
     (1ull << VAR_5) |
     (1ull << VAR_18) |
     (1ull << VAR_6) |
     (1ull << VAR_2) |
     (1ull << VAR_3) |
     (1ull << VAR_8) |
     (1ull << VAR_19) |
     (1ull << VAR_4) |
     (1ull << VAR_11) |
     (1ull << VAR_17) |
     (1ull << VAR_12) |
     (1ull << VAR_1) |
     (1ull << VAR_7) |
     (1ull << VAR_9) |
     (1ull << VAR_13) |
     (1ull << VAR_14);
 VAR_25->ibdev.phys_port_cnt = 1;
 VAR_25->ibdev.num_comp_vectors = VAR_24->ceqs_count;
 VAR_25->ibdev.dev.parent = &VAR_27->dev;
 FUNC_4(VAR_25->ibdev.iw_ifname, VAR_26->name,
        sizeof(VAR_25->ibdev.iw_ifname));
 FUNC_3(&VAR_25->ibdev, &VAR_21);

 return VAR_25;
}
