
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_client {int dummy; } ;
struct evdev {int handle; int grab; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct evdev_client* FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct evdev *VAR_1, struct evdev_client *VAR_2)
{
 struct evdev_client *VAR_3 = FUNC_3(VAR_1->grab,
     FUNC_1(&VAR_1->mutex));

 if (VAR_3 != VAR_2)
  return -VAR_0;

 FUNC_2(VAR_1->grab, ((void*)0));
 FUNC_4();
 FUNC_0(&VAR_1->handle);

 return 0;
}
