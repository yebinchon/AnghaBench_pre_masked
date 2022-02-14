
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 int * FUNC_0 (int *,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 int VAR_4;
 device_t VAR_5 = ((void*)0);

 FUNC_5();
 FUNC_3(VAR_3);

 if (FUNC_7()) {

  VAR_0 = 1;
  VAR_1 = 1;
  VAR_2 = 1;

  VAR_5 = FUNC_0(VAR_3, 10, "acpi", 0);
  if (VAR_5 == ((void*)0))
   FUNC_6("Unable to add ACPI bus to Xen Dom0");
 }

 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_7() && (VAR_4 == 0))
  FUNC_1(FUNC_4(VAR_5));

 return (VAR_4);
}
