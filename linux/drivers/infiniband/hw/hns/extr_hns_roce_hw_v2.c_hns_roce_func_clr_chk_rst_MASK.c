
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_v2_priv {struct hnae3_handle* handle; } ;
struct hns_roce_dev {unsigned long reset_cnt; scalar_t__ priv; } ;
struct hnae3_handle {TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {unsigned long (* ae_dev_reset_cnt ) (struct hnae3_handle*) ;int (* get_hw_reset_stat ) (struct hnae3_handle*) ;int (* ae_dev_resetting ) (struct hnae3_handle*) ;} ;
struct TYPE_2__ {struct hnae3_ae_ops* ops; } ;


 unsigned long FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hnae3_handle*) ;

__attribute__((used)) static bool FUNC_3(struct hns_roce_dev *VAR_0)
{
 struct hns_roce_v2_priv *VAR_1 = (struct hns_roce_v2_priv *)VAR_0->priv;
 struct hnae3_handle *VAR_2 = VAR_1->handle;
 const struct hnae3_ae_ops *VAR_3 = VAR_2->ae_algo->ops;
 unsigned long VAR_4;
 bool VAR_5;
 bool VAR_6;

 VAR_4 = VAR_3->ae_dev_reset_cnt(VAR_2);
 VAR_6 = VAR_3->get_hw_reset_stat(VAR_2);
 VAR_5 = VAR_3->ae_dev_resetting(VAR_2);

 if (VAR_4 != VAR_0->reset_cnt || VAR_6 || VAR_5)
  return 1;

 return 0;
}
