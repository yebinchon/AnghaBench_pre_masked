
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int map; int buf; } ;
struct TYPE_7__ {int map; int buf; } ;
struct TYPE_6__ {int map; int buf; } ;
struct TYPE_9__ {TYPE_3__ qpc_buf; TYPE_2__ mtpt_buf; TYPE_1__ cqc_buf; } ;
struct hns_roce_v1_priv {TYPE_4__ bt_table; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_5__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_10__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;
 struct hns_roce_v1_priv *VAR_3;

 VAR_3 = (struct hns_roce_v1_priv *)VAR_1->priv;

 FUNC_0(VAR_2, VAR_0,
  VAR_3->bt_table.cqc_buf.buf, VAR_3->bt_table.cqc_buf.map);

 FUNC_0(VAR_2, VAR_0,
  VAR_3->bt_table.mtpt_buf.buf, VAR_3->bt_table.mtpt_buf.map);

 FUNC_0(VAR_2, VAR_0,
  VAR_3->bt_table.qpc_buf.buf, VAR_3->bt_table.qpc_buf.map);
}
