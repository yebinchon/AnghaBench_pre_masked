
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct btmrvl_private {struct btmrvl_debugfs_data* debugfs_data; } ;
struct btmrvl_debugfs_data {int status_dir; int config_dir; } ;


 int FUNC_0 (int ) ;
 struct btmrvl_private* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct btmrvl_debugfs_data*) ;

void FUNC_3(struct hci_dev *VAR_0)
{
 struct btmrvl_private *VAR_1 = FUNC_1(VAR_0);
 struct btmrvl_debugfs_data *VAR_2 = VAR_1->debugfs_data;

 if (!VAR_2)
  return;

 FUNC_0(VAR_2->config_dir);
 FUNC_0(VAR_2->status_dir);

 FUNC_2(VAR_2);
}
