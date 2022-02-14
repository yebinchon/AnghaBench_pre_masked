
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 const char *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_2, "psim-iobus") != 0)
  return (VAR_0);

 FUNC_0(VAR_1, "PSIM local bus");
 return (0);
}
