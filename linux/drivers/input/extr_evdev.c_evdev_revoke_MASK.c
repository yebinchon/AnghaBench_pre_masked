
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct evdev_client {int revoked; } ;
struct evdev {int wait; int handle; } ;


 int FUNC_0 (struct evdev*,struct evdev_client*) ;
 int FUNC_1 (int *,struct file*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct evdev *VAR_0, struct evdev_client *VAR_1,
   struct file *VAR_2)
{
 VAR_1->revoked = 1;
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(&VAR_0->handle, VAR_2);
 FUNC_2(&VAR_0->wait);

 return 0;
}
