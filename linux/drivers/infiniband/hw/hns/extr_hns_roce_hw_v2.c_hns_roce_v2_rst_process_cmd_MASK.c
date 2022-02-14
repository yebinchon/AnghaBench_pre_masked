
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_v2_priv {struct hnae3_handle* handle; } ;
struct hns_roce_dev {unsigned long reset_cnt; scalar_t__ is_reset; scalar_t__ priv; } ;
struct TYPE_4__ {unsigned long instance_state; unsigned long reset_state; } ;
struct hnae3_handle {TYPE_2__ rinfo; TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {unsigned long (* ae_dev_reset_cnt ) (struct hnae3_handle*) ;int (* get_hw_reset_stat ) (struct hnae3_handle*) ;int (* ae_dev_resetting ) (struct hnae3_handle*) ;} ;
struct TYPE_3__ {struct hnae3_ae_ops* ops; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct hns_roce_dev*,unsigned long,unsigned long) ;
 int FUNC_1 (struct hns_roce_dev*,unsigned long,unsigned long) ;
 int FUNC_2 (struct hns_roce_dev*) ;
 unsigned long FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct hnae3_handle*) ;
 int FUNC_5 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_2)
{
 struct hns_roce_v2_priv *VAR_3 = (struct hns_roce_v2_priv *)VAR_2->priv;
 struct hnae3_handle *VAR_4 = VAR_3->handle;
 const struct hnae3_ae_ops *VAR_5 = VAR_4->ae_algo->ops;
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 bool VAR_9;
 bool VAR_10;

 if (VAR_2->is_reset)
  return VAR_0;
 VAR_6 = VAR_4->rinfo.instance_state;
 VAR_7 = VAR_4->rinfo.reset_state;
 VAR_8 = VAR_5->ae_dev_reset_cnt(VAR_4);
 VAR_10 = VAR_5->get_hw_reset_stat(VAR_4);
 VAR_9 = VAR_5->ae_dev_resetting(VAR_4);

 if (VAR_8 != VAR_2->reset_cnt)
  return FUNC_0(VAR_2, VAR_6,
        VAR_7);
 else if (VAR_10)
  return FUNC_1(VAR_2, VAR_6,
          VAR_7);
 else if (VAR_9 && VAR_6 == VAR_1)
  return FUNC_2(VAR_2);

 return 0;
}
