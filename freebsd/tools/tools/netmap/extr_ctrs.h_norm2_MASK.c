
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int units ;
typedef int u_int ;


 int FUNC_0 (char*,char*,double,char*) ;

__attribute__((used)) static const char *
FUNC_1(char *VAR_0, double VAR_1, char *VAR_2, int VAR_3)
{
 char *VAR_4[] = { "", "K", "M", "G", "T" };
 u_int VAR_5;
 if (VAR_3)
  for (VAR_5 = 0; VAR_1 >=1000 && VAR_5 < sizeof(VAR_4)/sizeof(char *) - 1; VAR_5++)
   VAR_1 /= 1000;
 else
  VAR_5=0;
 FUNC_0(VAR_0, VAR_2, VAR_1, VAR_4[VAR_5]);
 return VAR_0;
}
