
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_ivars {char* xd_node; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct xenbus_device_ivars* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;

int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct xenbus_device_ivars *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = 0;

 VAR_3 += FUNC_1(VAR_0, VAR_1);
 VAR_3 += FUNC_3(" at %s", VAR_2->xd_node);
 VAR_3 += FUNC_0(VAR_0, VAR_1);

 return (VAR_3);
}
