
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_data {int readq; int read_wait; } ;
struct file {struct vhci_data* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 struct vhci_data *VAR_6 = VAR_4->private_data;

 FUNC_0(VAR_4, &VAR_6->read_wait, VAR_5);

 if (!FUNC_1(&VAR_6->readq))
  return VAR_0 | VAR_2;

 return VAR_1 | VAR_3;
}
