
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int phandle_t ;
typedef int freq ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,void*,int) ;

uint32_t
FUNC_2(void)
{
 phandle_t VAR_0;
 static uint32_t VAR_1;

 if (VAR_1 != 0)
  return (VAR_1);

 VAR_0 = FUNC_0("/soc");


 FUNC_1(VAR_0, "bus-frequency", (void *)&VAR_1, sizeof(VAR_1));

 return (VAR_1);
}
