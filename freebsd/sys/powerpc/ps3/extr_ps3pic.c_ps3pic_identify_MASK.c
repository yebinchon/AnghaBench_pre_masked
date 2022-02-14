
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int BUS_ADD_CHILD (int ,int ,char*,int ) ;
 int * device_find_child (int ,char*,int) ;
 int installed_platform () ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static void
ps3pic_identify(driver_t *driver, device_t parent)
{
 if (strcmp(installed_platform(), "ps3") != 0)
  return;

 if (device_find_child(parent, "ps3pic", -1) == ((void*)0))
  BUS_ADD_CHILD(parent, 0, "ps3pic", 0);
}
