
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_ivars {int xd_lock; int xd_node; int xd_state; } ;
typedef int device_t ;


 int FUNC_0 (int ,char const*) ;
 struct xenbus_device_ivars* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void
FUNC_6(device_t VAR_0, device_t VAR_1, const char *VAR_2)
{

 if (FUNC_2(VAR_2, "/state") != 0) {
  struct xenbus_device_ivars *VAR_3;

  VAR_3 = FUNC_1(VAR_1);
  FUNC_3(&VAR_3->xd_lock);
  VAR_3->xd_state = FUNC_5(VAR_3->xd_node);
  FUNC_4(&VAR_3->xd_lock);
 }
 FUNC_0(VAR_1, VAR_2);
}
