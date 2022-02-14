
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_buf_list {int map; int buf; } ;
struct TYPE_3__ {struct hns_roce_buf_list tptr_buf; } ;
struct hns_roce_v1_priv {TYPE_1__ tptr_table; } ;
struct hns_roce_dev {int tptr_size; int tptr_dma_addr; scalar_t__ priv; TYPE_2__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 struct hns_roce_buf_list *VAR_5;
 struct hns_roce_v1_priv *VAR_6;

 VAR_6 = (struct hns_roce_v1_priv *)VAR_3->priv;
 VAR_5 = &VAR_6->tptr_table.tptr_buf;







 VAR_5->buf = FUNC_0(VAR_4, VAR_2,
        &VAR_5->map, VAR_1);
 if (!VAR_5->buf)
  return -VAR_0;

 VAR_3->tptr_dma_addr = VAR_5->map;
 VAR_3->tptr_size = VAR_2;

 return 0;
}
