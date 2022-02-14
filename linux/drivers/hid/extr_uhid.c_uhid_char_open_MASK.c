
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_device {int running; int worker; int report_wait; int waitq; int qlock; int report_lock; int devlock; } ;
struct inode {int dummy; } ;
struct file {struct uhid_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct uhid_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct file*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct file *VAR_4)
{
 struct uhid_device *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_3(&VAR_5->devlock);
 FUNC_3(&VAR_5->report_lock);
 FUNC_4(&VAR_5->qlock);
 FUNC_1(&VAR_5->waitq);
 FUNC_1(&VAR_5->report_wait);
 VAR_5->running = 0;
 FUNC_0(&VAR_5->worker, VAR_2);

 VAR_4->private_data = VAR_5;
 FUNC_5(VAR_3, VAR_4);

 return 0;
}
