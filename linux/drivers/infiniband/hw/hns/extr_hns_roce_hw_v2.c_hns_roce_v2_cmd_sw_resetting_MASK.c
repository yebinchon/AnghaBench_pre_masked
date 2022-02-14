
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_v2_priv {struct hnae3_handle* handle; } ;
struct hns_roce_dev {int dis_db; scalar_t__ reset_cnt; int is_reset; scalar_t__ priv; } ;
struct hnae3_handle {TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {scalar_t__ (* ae_dev_reset_cnt ) (struct hnae3_handle*) ;} ;
struct TYPE_2__ {struct hnae3_ae_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_v2_priv *VAR_2 = (struct hns_roce_v2_priv *)VAR_1->priv;
 struct hnae3_handle *VAR_3 = VAR_2->handle;
 const struct hnae3_ae_ops *VAR_4 = VAR_3->ae_algo->ops;





 VAR_1->dis_db = 1;
 if (VAR_4->ae_dev_reset_cnt(VAR_3) != VAR_1->reset_cnt)
  VAR_1->is_reset = 1;

 return VAR_0;
}
