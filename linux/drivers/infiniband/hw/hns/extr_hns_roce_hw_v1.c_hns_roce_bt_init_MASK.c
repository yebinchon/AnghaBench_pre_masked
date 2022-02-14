
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int map; void* buf; } ;
struct TYPE_8__ {int map; void* buf; } ;
struct TYPE_7__ {void* buf; int map; } ;
struct TYPE_10__ {TYPE_4__ qpc_buf; TYPE_3__ mtpt_buf; TYPE_2__ cqc_buf; } ;
struct hns_roce_v1_priv {TYPE_5__ bt_table; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct device*,int ,int *,int ) ;
 int FUNC_1 (struct device*,int ,void*,int ) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 struct hns_roce_v1_priv *VAR_5;
 int VAR_6;

 VAR_5 = (struct hns_roce_v1_priv *)VAR_3->priv;

 VAR_5->bt_table.qpc_buf.buf = FUNC_0(VAR_4,
  VAR_2, &VAR_5->bt_table.qpc_buf.map,
  VAR_1);
 if (!VAR_5->bt_table.qpc_buf.buf)
  return -VAR_0;

 VAR_5->bt_table.mtpt_buf.buf = FUNC_0(VAR_4,
  VAR_2, &VAR_5->bt_table.mtpt_buf.map,
  VAR_1);
 if (!VAR_5->bt_table.mtpt_buf.buf) {
  VAR_6 = -VAR_0;
  goto err_failed_alloc_mtpt_buf;
 }

 VAR_5->bt_table.cqc_buf.buf = FUNC_0(VAR_4,
  VAR_2, &VAR_5->bt_table.cqc_buf.map,
  VAR_1);
 if (!VAR_5->bt_table.cqc_buf.buf) {
  VAR_6 = -VAR_0;
  goto err_failed_alloc_cqc_buf;
 }

 return 0;

err_failed_alloc_cqc_buf:
 FUNC_1(VAR_4, VAR_2,
  VAR_5->bt_table.mtpt_buf.buf, VAR_5->bt_table.mtpt_buf.map);

err_failed_alloc_mtpt_buf:
 FUNC_1(VAR_4, VAR_2,
  VAR_5->bt_table.qpc_buf.buf, VAR_5->bt_table.qpc_buf.map);

 return VAR_6;
}
