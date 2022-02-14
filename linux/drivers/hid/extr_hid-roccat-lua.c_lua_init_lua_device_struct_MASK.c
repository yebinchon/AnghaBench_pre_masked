
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct lua_device {int lua_lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_0,
  struct lua_device *VAR_1)
{
 FUNC_0(&VAR_1->lua_lock);

 return 0;
}
