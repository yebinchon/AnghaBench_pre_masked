
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int platform_t ;
typedef int phandle_t ;
typedef int model ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(platform_t VAR_2)
{
 phandle_t VAR_3;
 char VAR_4[32];

 VAR_3 = FUNC_0("/");

 if (FUNC_1(VAR_3, "model", VAR_4, sizeof(VAR_4)) > 0) {
  if (FUNC_2(VAR_4, "RB800") == 0)
   return (VAR_0);
 }

 return (VAR_1);
}
