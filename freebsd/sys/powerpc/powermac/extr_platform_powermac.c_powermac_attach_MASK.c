
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int platform_t ;
typedef int phandle_t ;
typedef int model ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(platform_t VAR_0)
{
 phandle_t VAR_1;
 char VAR_2[32];
 VAR_1 = FUNC_0("/");
 if (FUNC_1(VAR_1, "model", VAR_2, sizeof(VAR_2)) > 0) {
  if (FUNC_3(VAR_2, "PowerMac11,2") == 0 ||
      FUNC_3(VAR_2, "PowerMac12,1") == 0) {
   FUNC_2();
  }
 }

 return (0);
}
