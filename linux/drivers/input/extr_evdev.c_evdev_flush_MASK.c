
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct evdev_client* private_data; } ;
struct evdev_client {int revoked; struct evdev* evdev; } ;
struct evdev {int mutex; int handle; scalar_t__ exist; } ;
typedef int fl_owner_t ;


 int FUNC_0 (int *,struct file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, fl_owner_t VAR_1)
{
 struct evdev_client *VAR_2 = VAR_0->private_data;
 struct evdev *VAR_3 = VAR_2->evdev;

 FUNC_1(&VAR_3->mutex);

 if (VAR_3->exist && !VAR_2->revoked)
  FUNC_0(&VAR_3->handle, VAR_0);

 FUNC_2(&VAR_3->mutex);
 return 0;
}
