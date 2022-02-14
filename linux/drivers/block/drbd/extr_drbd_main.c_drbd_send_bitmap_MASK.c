
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_socket {int mutex; scalar_t__ socket; } ;
struct drbd_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* connection; } ;
struct TYPE_3__ {struct drbd_socket data; } ;


 int FUNC_0 (struct drbd_device*) ;
 TYPE_2__* FUNC_1 (struct drbd_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drbd_device *VAR_0)
{
 struct drbd_socket *VAR_1 = &FUNC_1(VAR_0)->connection->data;
 int VAR_2 = -1;

 FUNC_2(&VAR_1->mutex);
 if (VAR_1->socket)
  VAR_2 = !FUNC_0(VAR_0);
 FUNC_3(&VAR_1->mutex);
 return VAR_2;
}
