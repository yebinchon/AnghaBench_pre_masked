
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct mbox_test_device {int waitq; } ;
struct file {struct mbox_test_device* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mbox_test_device*) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t
FUNC_2(struct file *VAR_2, struct poll_table_struct *VAR_3)
{
 struct mbox_test_device *VAR_4 = VAR_2->private_data;

 FUNC_1(VAR_2, &VAR_4->waitq, VAR_3);

 if (FUNC_0(VAR_4))
  return VAR_0 | VAR_1;
 return 0;
}
