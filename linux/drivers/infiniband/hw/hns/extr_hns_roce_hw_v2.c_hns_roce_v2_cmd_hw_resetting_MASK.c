
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_v2_priv {struct hnae3_handle* handle; } ;
struct hns_roce_dev {int dis_db; int is_reset; scalar_t__ priv; } ;
struct hnae3_handle {TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {int (* get_hw_reset_stat ) (struct hnae3_handle*) ;} ;
struct TYPE_2__ {struct hnae3_ae_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_4,
     unsigned long VAR_5,
     unsigned long VAR_6)
{
 struct hns_roce_v2_priv *VAR_7 = (struct hns_roce_v2_priv *)VAR_4->priv;
 struct hnae3_handle *VAR_8 = VAR_7->handle;
 const struct hnae3_ae_ops *VAR_9 = VAR_8->ae_algo->ops;
 VAR_4->dis_db = 1;
 if (!VAR_9->get_hw_reset_stat(VAR_8))
  VAR_4->is_reset = 1;

 if (!VAR_4->is_reset || VAR_6 == VAR_3 ||
     VAR_5 == VAR_2)
  return VAR_0;

 return VAR_1;
}
