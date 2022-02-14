
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_data {int readq; struct hci_dev* hdev; int open_timeout; } ;
struct inode {int dummy; } ;
struct hci_dev {int dummy; } ;
struct file {struct vhci_data* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct vhci_data*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct vhci_data *VAR_2 = VAR_1->private_data;
 struct hci_dev *VAR_3;

 FUNC_0(&VAR_2->open_timeout);

 VAR_3 = VAR_2->hdev;

 if (VAR_3) {
  FUNC_2(VAR_3);
  FUNC_1(VAR_3);
 }

 FUNC_4(&VAR_2->readq);
 VAR_1->private_data = ((void*)0);
 FUNC_3(VAR_2);

 return 0;
}
