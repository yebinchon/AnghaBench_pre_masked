
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_data {int dummy; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {struct vhci_data* private_data; } ;
typedef int ssize_t ;


 int FUNC_0 (struct vhci_data*,struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_1(struct kiocb *VAR_0, struct iov_iter *VAR_1)
{
 struct file *VAR_2 = VAR_0->ki_filp;
 struct vhci_data *VAR_3 = VAR_2->private_data;

 return FUNC_0(VAR_3, VAR_1);
}
