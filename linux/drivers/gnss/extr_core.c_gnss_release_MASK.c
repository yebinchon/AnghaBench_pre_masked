
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gnss_device {scalar_t__ count; int dev; int rwsem; int read_fifo; TYPE_1__* ops; scalar_t__ disconnected; } ;
struct file {struct gnss_device* private_data; } ;
struct TYPE_2__ {int (* close ) (struct gnss_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gnss_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct gnss_device *VAR_2 = VAR_1->private_data;

 FUNC_0(&VAR_2->rwsem);
 if (VAR_2->disconnected)
  goto unlock;

 if (--VAR_2->count == 0) {
  VAR_2->ops->close(VAR_2);
  FUNC_1(&VAR_2->read_fifo);
 }
unlock:
 FUNC_4(&VAR_2->rwsem);

 FUNC_2(&VAR_2->dev);

 return 0;
}
