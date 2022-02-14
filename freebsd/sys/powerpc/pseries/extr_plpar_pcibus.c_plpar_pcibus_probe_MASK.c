
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 phandle_t VAR_3;

 if (FUNC_3(VAR_2) == -1 || !FUNC_4())
  return (VAR_1);

 VAR_3 = FUNC_0("/rtas");
 if (!FUNC_1(VAR_3, "ibm,hypertas-functions"))
  return (VAR_1);

 FUNC_2(VAR_2, "POWER Hypervisor PCI bus");

 return (VAR_0);
}
