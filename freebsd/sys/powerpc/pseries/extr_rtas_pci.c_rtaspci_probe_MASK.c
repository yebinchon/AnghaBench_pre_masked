
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 const char *VAR_3;

 if (!FUNC_4())
  return (VAR_1);

 VAR_3 = FUNC_3(VAR_2);

 if (FUNC_0(FUNC_2(VAR_2), "used-by-rtas") < 0)
  return (VAR_1);
 if (VAR_3 == ((void*)0) || FUNC_5(VAR_3, "pci") != 0)
  return (VAR_1);

 FUNC_1(VAR_2, "RTAS Host-PCI bridge");
 return (VAR_0);
}
