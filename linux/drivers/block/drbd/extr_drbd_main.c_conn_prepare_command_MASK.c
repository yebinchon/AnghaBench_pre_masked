
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_socket {int mutex; } ;
struct drbd_connection {int dummy; } ;


 void* FUNC_0 (struct drbd_connection*,struct drbd_socket*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void *FUNC_3(struct drbd_connection *VAR_0, struct drbd_socket *VAR_1)
{
 void *VAR_2;

 FUNC_1(&VAR_1->mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  FUNC_2(&VAR_1->mutex);

 return VAR_2;
}
