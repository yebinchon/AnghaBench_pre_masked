
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_raq_table {TYPE_2__* e_raq_buf; } ;
struct hns_roce_v1_priv {struct hns_roce_raq_table raq_table; } ;
struct hns_roce_dev {scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int map; int buf; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;
 struct hns_roce_v1_priv *VAR_3;
 struct hns_roce_raq_table *VAR_4;

 VAR_3 = (struct hns_roce_v1_priv *)VAR_1->priv;
 VAR_4 = &VAR_3->raq_table;

 FUNC_0(VAR_2, VAR_0, VAR_4->e_raq_buf->buf,
     VAR_4->e_raq_buf->map);
 FUNC_1(VAR_4->e_raq_buf);
}
