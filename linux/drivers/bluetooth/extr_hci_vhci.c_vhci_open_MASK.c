
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_data {int open_timeout; int open_mutex; int read_wait; int readq; } ;
struct inode {int dummy; } ;
struct file {struct vhci_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct vhci_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct file*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct file *VAR_4)
{
 struct vhci_data *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct vhci_data), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_7(&VAR_5->readq);
 FUNC_1(&VAR_5->read_wait);

 FUNC_4(&VAR_5->open_mutex);
 FUNC_0(&VAR_5->open_timeout, VAR_2);

 VAR_4->private_data = VAR_5;
 FUNC_5(VAR_3, VAR_4);

 FUNC_6(&VAR_5->open_timeout, FUNC_3(1000));

 return 0;
}
