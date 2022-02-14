
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_2, device_t VAR_3)
{
 if (!FUNC_3())
  return;


 if (FUNC_1(VAR_1, 0))
  return;





 if (FUNC_0(VAR_3, VAR_0, "xenpv", 0) == ((void*)0))
  FUNC_2("Unable to attach xenpv bus.");
}
