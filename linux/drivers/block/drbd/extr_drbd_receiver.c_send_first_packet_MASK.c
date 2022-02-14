
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_socket {int dummy; } ;
struct drbd_connection {int dummy; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_connection*,struct drbd_socket*) ;
 int FUNC_1 (struct drbd_connection*,struct drbd_socket*,int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct drbd_connection *VAR_1, struct drbd_socket *VAR_2,
        enum drbd_packet VAR_3)
{
 if (!FUNC_0(VAR_1, VAR_2))
  return -VAR_0;
 return FUNC_1(VAR_1, VAR_2, VAR_3, 0, ((void*)0), 0);
}
