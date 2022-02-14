
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_socket {int dummy; } ;
struct drbd_connection {struct drbd_socket meta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drbd_connection*,struct drbd_socket*) ;
 int FUNC_1 (struct drbd_connection*,struct drbd_socket*,int ,int ,int *,int ) ;

int FUNC_2(struct drbd_connection *VAR_2)
{
 struct drbd_socket *VAR_3;

 VAR_3 = &VAR_2->meta;
 if (!FUNC_0(VAR_2, VAR_3))
  return -VAR_0;
 return FUNC_1(VAR_2, VAR_3, VAR_1, 0, ((void*)0), 0);
}
