
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct TYPE_5__ {void* instance_state; } ;
struct hnae3_handle {TYPE_2__ rinfo; TYPE_3__* pdev; TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {scalar_t__ (* get_hw_reset_stat ) (struct hnae3_handle*) ;scalar_t__ (* ae_dev_resetting ) (struct hnae3_handle*) ;} ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_4__ {struct hnae3_ae_ops* ops; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int VAR_4 ;
 struct pci_device_id* FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct hnae3_handle*) ;
 scalar_t__ FUNC_4 (struct hnae3_handle*) ;
 scalar_t__ FUNC_5 (struct hnae3_handle*) ;
 scalar_t__ FUNC_6 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_7(struct hnae3_handle *VAR_5)
{
 const struct hnae3_ae_ops *VAR_6 = VAR_5->ae_algo->ops;
 const struct pci_device_id *VAR_7;
 struct device *VAR_8 = &VAR_5->pdev->dev;
 int VAR_9;

 VAR_5->rinfo.instance_state = VAR_1;

 if (VAR_6->ae_dev_resetting(VAR_5) || VAR_6->get_hw_reset_stat(VAR_5)) {
  VAR_5->rinfo.instance_state = VAR_3;
  goto reset_chk_err;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5->pdev);
 if (!VAR_7)
  return 0;

 VAR_9 = FUNC_0(VAR_5);
 if (VAR_9) {
  VAR_5->rinfo.instance_state = VAR_3;
  FUNC_1(VAR_8, "RoCE instance init failed! ret = %d\n", VAR_9);
  if (VAR_6->ae_dev_resetting(VAR_5) ||
      VAR_6->get_hw_reset_stat(VAR_5))
   goto reset_chk_err;
  else
   return VAR_9;
 }

 VAR_5->rinfo.instance_state = VAR_2;


 return 0;

reset_chk_err:
 FUNC_1(VAR_8, "Device is busy in resetting state.\n"
       "please retry later.\n");

 return -VAR_0;
}
