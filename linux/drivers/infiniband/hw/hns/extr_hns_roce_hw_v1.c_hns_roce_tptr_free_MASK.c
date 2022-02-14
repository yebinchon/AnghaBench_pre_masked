
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_buf_list {int map; int buf; } ;
struct TYPE_4__ {struct hns_roce_buf_list tptr_buf; } ;
struct hns_roce_v1_priv {TYPE_2__ tptr_table; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;
 struct hns_roce_buf_list *VAR_3;
 struct hns_roce_v1_priv *VAR_4;

 VAR_4 = (struct hns_roce_v1_priv *)VAR_1->priv;
 VAR_3 = &VAR_4->tptr_table.tptr_buf;

 FUNC_0(VAR_2, VAR_0,
     VAR_3->buf, VAR_3->map);
}
