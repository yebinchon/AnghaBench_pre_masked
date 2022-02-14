
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 char const* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 const char* VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 != ((void*)0) && FUNC_3(FUNC_2(VAR_2), "ppm") == 0 &&
     FUNC_3(VAR_3, "jbus-ppm") == 0) {
  FUNC_0(VAR_2, "JBus power management");
  return (VAR_0);
 }
 return (VAR_1);
}
