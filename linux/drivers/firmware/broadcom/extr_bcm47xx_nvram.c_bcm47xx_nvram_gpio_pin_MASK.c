
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvram_var ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char const*,char*) ;

int FUNC_3(const char *VAR_3)
{
 int VAR_4, VAR_5;
 char VAR_6[] = "gpioXX";
 char VAR_7[VAR_2];


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = FUNC_1(VAR_6, sizeof(VAR_6), "gpio%i", VAR_4);
  if (VAR_5 <= 0)
   continue;
  VAR_5 = FUNC_0(VAR_6, VAR_7, sizeof(VAR_7));
  if (VAR_5 <= 0)
   continue;
  if (!FUNC_2(VAR_3, VAR_7))
   return VAR_4;
 }
 return -VAR_0;
}
