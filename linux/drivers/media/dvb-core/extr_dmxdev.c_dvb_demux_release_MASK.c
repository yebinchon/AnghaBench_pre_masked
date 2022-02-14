
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct dmxdev_filter* private_data; } ;
struct dmxdev_filter {struct dmxdev* dev; } ;
struct dmxdev {int exit; int mutex; TYPE_1__* dvbdev; } ;
struct TYPE_2__ {int users; int wait_queue; } ;


 int FUNC_0 (struct dmxdev*,struct dmxdev_filter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct dmxdev_filter *VAR_2 = VAR_1->private_data;
 struct dmxdev *VAR_3 = VAR_2->dev;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);

 FUNC_1(&VAR_3->mutex);
 VAR_3->dvbdev->users--;
 if (VAR_3->dvbdev->users == 1 && VAR_3->exit == 1) {
  FUNC_2(&VAR_3->mutex);
  FUNC_3(&VAR_3->dvbdev->wait_queue);
 } else
  FUNC_2(&VAR_3->mutex);

 return VAR_4;
}
