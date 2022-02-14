
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;
typedef int u_int ;
typedef int type ;
typedef int portid ;
typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static phandle_t
FUNC_5(phandle_t VAR_0, uint32_t VAR_1, u_int VAR_2)
{
 char VAR_3[sizeof("cpu")];
 phandle_t VAR_4;
 uint32_t VAR_5;

 for (; VAR_0 != 0; VAR_0 = FUNC_2(VAR_0)) {
  VAR_4 = FUNC_0(VAR_0);
  if (VAR_4 > 0) {
   VAR_4 = FUNC_5(VAR_4, VAR_1, VAR_2);
   if (VAR_4 > 0)
    return (VAR_4);
  } else {
   if (FUNC_1(VAR_0, "device_type", VAR_3,
       sizeof(VAR_3)) <= 0)
    continue;
   if (FUNC_4(VAR_3, "cpu") != 0)
    continue;
   if (FUNC_1(VAR_0, FUNC_3(VAR_2),
       &VAR_5, sizeof(VAR_5)) <= 0)
    continue;
   if (VAR_5 == VAR_1)
    return (VAR_0);
  }
 }
 return (0);
}
