
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_callback {scalar_t__* args; } ;
struct drbd_resource {int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct netlink_callback *VAR_1, int VAR_2)
{
 if (VAR_1->args[0]) {
  struct drbd_resource *VAR_3 =
   (struct drbd_resource *)VAR_1->args[0];
  FUNC_0(&VAR_3->kref, VAR_0);
 }

 return 0;
}
