
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_client {int dummy; } ;
struct evdev {scalar_t__ grab; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct evdev_client*) ;

__attribute__((used)) static int FUNC_2(struct evdev *VAR_1, struct evdev_client *VAR_2)
{
 int VAR_3;

 if (VAR_1->grab)
  return -VAR_0;

 VAR_3 = FUNC_0(&VAR_1->handle);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_1->grab, VAR_2);

 return 0;
}
