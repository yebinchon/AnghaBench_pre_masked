
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_v2_priv {struct hnae3_handle* handle; } ;
struct hns_roce_dev {unsigned long reset_cnt; int dis_db; int is_reset; int dev; scalar_t__ priv; } ;
struct TYPE_4__ {unsigned long instance_state; } ;
struct hnae3_handle {TYPE_2__ rinfo; TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {unsigned long (* ae_dev_reset_cnt ) (struct hnae3_handle*) ;int (* get_hw_reset_stat ) (struct hnae3_handle*) ;int (* ae_dev_resetting ) (struct hnae3_handle*) ;} ;
struct TYPE_3__ {struct hnae3_ae_ops* ops; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct hnae3_handle*) ;
 int FUNC_5 (struct hnae3_handle*) ;
 int FUNC_6 (struct hnae3_handle*) ;
 unsigned long FUNC_7 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_8(struct hns_roce_dev *VAR_3, int VAR_4,
          int VAR_5)
{
 struct hns_roce_v2_priv *VAR_6 = (struct hns_roce_v2_priv *)VAR_3->priv;
 struct hnae3_handle *VAR_7 = VAR_6->handle;
 const struct hnae3_ae_ops *VAR_8 = VAR_7->ae_algo->ops;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 bool VAR_12;
 bool VAR_13;

 VAR_9 = VAR_7->rinfo.instance_state;
 VAR_10 = VAR_8->ae_dev_reset_cnt(VAR_7);
 VAR_13 = VAR_8->get_hw_reset_stat(VAR_7);
 VAR_12 = VAR_8->ae_dev_resetting(VAR_7);

 if (VAR_10 != VAR_3->reset_cnt) {
  VAR_3->dis_db = 1;
  VAR_3->is_reset = 1;
  FUNC_0(VAR_3->dev, "Func clear success after reset.\n");
 } else if (VAR_13) {
  VAR_3->dis_db = 1;

  FUNC_1(VAR_3->dev,
    "Func clear is pending, device in resetting state.\n");
  VAR_11 = VAR_2;
  while (VAR_11) {
   if (!VAR_8->get_hw_reset_stat(VAR_7)) {
    VAR_3->is_reset = 1;
    FUNC_0(VAR_3->dev,
      "Func clear success after reset.\n");
    return;
   }
   FUNC_2(VAR_1);
   VAR_11 -= VAR_1;
  }

  FUNC_1(VAR_3->dev, "Func clear failed.\n");
 } else if (VAR_12 && VAR_9 == VAR_0) {
  VAR_3->dis_db = 1;

  FUNC_1(VAR_3->dev,
    "Func clear is pending, device in resetting state.\n");
  VAR_11 = VAR_2;
  while (VAR_11) {
   if (VAR_8->ae_dev_reset_cnt(VAR_7) !=
       VAR_3->reset_cnt) {
    VAR_3->is_reset = 1;
    FUNC_0(VAR_3->dev,
      "Func clear success after sw reset\n");
    return;
   }
   FUNC_2(VAR_1);
   VAR_11 -= VAR_1;
  }

  FUNC_1(VAR_3->dev, "Func clear failed because of unfinished sw reset\n");
 } else {
  if (VAR_4 && !VAR_5)
   FUNC_1(VAR_3->dev,
     "Func clear read failed, ret = %d.\n", VAR_4);

  FUNC_1(VAR_3->dev, "Func clear failed.\n");
 }
}
