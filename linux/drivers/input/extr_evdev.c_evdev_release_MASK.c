
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct evdev_client* private_data; } ;
struct evdev_client {int * evmasks; struct evdev* evdev; } ;
struct evdev {int mutex; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct evdev*) ;
 int FUNC_2 (struct evdev*,struct evdev_client*) ;
 int FUNC_3 (struct evdev*,struct evdev_client*) ;
 int FUNC_4 (struct evdev_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 struct evdev_client *VAR_3 = VAR_2->private_data;
 struct evdev *VAR_4 = VAR_3->evdev;
 unsigned int VAR_5;

 FUNC_5(&VAR_4->mutex);
 FUNC_3(VAR_4, VAR_3);
 FUNC_6(&VAR_4->mutex);

 FUNC_2(VAR_4, VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  FUNC_0(VAR_3->evmasks[VAR_5]);

 FUNC_4(VAR_3);

 FUNC_1(VAR_4);

 return 0;
}
