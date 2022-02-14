
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_0, device_t VAR_1)
{

 if (FUNC_2("ram", 0))
  return;
 if (FUNC_0(VAR_1, 0, "ram", 0) == ((void*)0))
  FUNC_1("ram_identify");
}
