
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct hns_roce_v2_priv {struct hnae3_handle* handle; } ;
struct TYPE_11__ {TYPE_3__** netdevs; scalar_t__* phy_port; } ;
struct TYPE_9__ {int node_guid; } ;
struct TYPE_8__ {int num_ports; } ;
struct hns_roce_dev {int cmd_mod; int reset_cnt; scalar_t__ loop_idc; int * irq; TYPE_4__ iboe; TYPE_2__ ib_dev; TYPE_1__ caps; int reg_base; int sdb_offset; int odb_offset; int * dfx; int * hw; struct hns_roce_v2_priv* priv; } ;
struct TYPE_12__ {scalar_t__ base_vector; TYPE_3__* netdev; int roce_io_base; } ;
struct hnae3_handle {TYPE_7__* ae_algo; TYPE_5__ rinfo; int pdev; } ;
struct TYPE_14__ {TYPE_6__* ops; } ;
struct TYPE_13__ {int (* ae_dev_reset_cnt ) (struct hnae3_handle*) ;} ;
struct TYPE_10__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_4,
      struct hnae3_handle *VAR_5)
{
 struct hns_roce_v2_priv *VAR_6 = VAR_4->priv;
 int VAR_7;

 VAR_4->hw = &VAR_3;
 VAR_4->dfx = &VAR_2;
 VAR_4->sdb_offset = VAR_1;
 VAR_4->odb_offset = VAR_4->sdb_offset;


 VAR_4->reg_base = VAR_5->rinfo.roce_io_base;
 VAR_4->caps.num_ports = 1;
 VAR_4->iboe.netdevs[0] = VAR_5->rinfo.netdev;
 VAR_4->iboe.phy_port[0] = 0;

 FUNC_0((u8 *)&VAR_4->ib_dev.node_guid,
       VAR_4->iboe.netdevs[0]->dev_addr);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_4->irq[VAR_7] = FUNC_1(VAR_5->pdev,
      VAR_7 + VAR_5->rinfo.base_vector);


 VAR_4->cmd_mod = 1;
 VAR_4->loop_idc = 0;

 VAR_4->reset_cnt = VAR_5->ae_algo->ops->ae_dev_reset_cnt(VAR_5);
 VAR_6->handle = VAR_5;

 return 0;
}
