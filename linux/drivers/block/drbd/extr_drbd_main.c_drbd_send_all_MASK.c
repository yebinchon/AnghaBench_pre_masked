
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct drbd_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_connection*,struct socket*,void*,size_t,unsigned int) ;

int FUNC_1(struct drbd_connection *VAR_1, struct socket *VAR_2, void *VAR_3,
    size_t VAR_4, unsigned VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 != VAR_4)
  return -VAR_0;
 return 0;
}
