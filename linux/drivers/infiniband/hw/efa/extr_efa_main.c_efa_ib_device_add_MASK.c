
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_7__ {int phys_port_cnt; int num_comp_vectors; unsigned long long uverbs_cmd_mask; unsigned long long uverbs_ex_cmd_mask; TYPE_1__ dev; int node_type; } ;
struct TYPE_8__ {int db_bar; } ;
struct efa_dev {TYPE_2__ ibdev; int edev; TYPE_5__ dev_attr; struct pci_dev* pdev; } ;
struct efa_com_get_network_attr_result {int dummy; } ;
struct efa_com_get_hw_hints_result {int dummy; } ;


 int VAR_0 ;
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
 int VAR_18 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *,struct efa_com_get_hw_hints_result*) ;
 int FUNC_3 (int *,struct efa_com_get_network_attr_result*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_19 ;
 int FUNC_5 (struct efa_dev*) ;
 int FUNC_6 (struct efa_dev*) ;
 int FUNC_7 (struct efa_dev*) ;
 int FUNC_8 (struct efa_dev*,struct efa_com_get_hw_hints_result*) ;
 int FUNC_9 (struct efa_dev*,struct efa_com_get_network_attr_result*) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_13(struct efa_dev *VAR_20)
{
 struct efa_com_get_network_attr_result VAR_21;
 struct efa_com_get_hw_hints_result VAR_22;
 struct pci_dev *VAR_23 = VAR_20->pdev;
 int VAR_24;

 FUNC_7(VAR_20);

 VAR_24 = FUNC_1(&VAR_20->edev, &VAR_20->dev_attr);
 if (VAR_24)
  return VAR_24;

 FUNC_0(&VAR_20->pdev->dev, "Doorbells bar (%d)\n", VAR_20->dev_attr.db_bar);
 VAR_24 = FUNC_6(VAR_20);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_3(&VAR_20->edev, &VAR_21);
 if (VAR_24)
  goto err_release_doorbell_bar;

 FUNC_9(VAR_20, &VAR_21);

 VAR_24 = FUNC_2(&VAR_20->edev, &VAR_22);
 if (VAR_24)
  goto err_release_doorbell_bar;

 FUNC_8(VAR_20, &VAR_22);


 VAR_24 = FUNC_4(&VAR_20->edev, VAR_0);
 if (VAR_24)
  goto err_release_doorbell_bar;

 VAR_20->ibdev.node_type = VAR_18;
 VAR_20->ibdev.phys_port_cnt = 1;
 VAR_20->ibdev.num_comp_vectors = 1;
 VAR_20->ibdev.dev.parent = &VAR_23->dev;

 VAR_20->ibdev.uverbs_cmd_mask =
  (1ull << VAR_11) |
  (1ull << VAR_13) |
  (1ull << VAR_14) |
  (1ull << VAR_1) |
  (1ull << VAR_6) |
  (1ull << VAR_16) |
  (1ull << VAR_7) |
  (1ull << VAR_3) |
  (1ull << VAR_4) |
  (1ull << VAR_9) |
  (1ull << VAR_5) |
  (1ull << VAR_12) |
  (1ull << VAR_15) |
  (1ull << VAR_10) |
  (1ull << VAR_2) |
  (1ull << VAR_8);

 VAR_20->ibdev.uverbs_ex_cmd_mask =
  (1ull << VAR_17);

 FUNC_11(&VAR_20->ibdev, &VAR_19);

 VAR_24 = FUNC_10(&VAR_20->ibdev, "efa_%d");
 if (VAR_24)
  goto err_release_doorbell_bar;

 FUNC_12(&VAR_20->ibdev, "IB device registered\n");

 return 0;

err_release_doorbell_bar:
 FUNC_5(VAR_20);
 return VAR_24;
}
