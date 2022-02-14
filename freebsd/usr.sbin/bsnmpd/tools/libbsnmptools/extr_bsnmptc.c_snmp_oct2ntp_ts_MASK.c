
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_1(uint32_t VAR_1, char *VAR_2, char *VAR_3)
{
 char *VAR_4;
 uint32_t VAR_5;

 if (VAR_1 != VAR_0 || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3[0]= '\0';

 VAR_4 = VAR_3;
 VAR_5 = VAR_2[0] * 1000 + VAR_2[1] * 100 + VAR_2[2] * 10 + VAR_2[3];
 VAR_4 += FUNC_0(VAR_4, "%4.4d", VAR_5);
 VAR_5 = VAR_2[4] * 1000 + VAR_2[5] * 100 + VAR_2[6] * 10 + VAR_2[7];
 VAR_4 += FUNC_0(VAR_4, ".%4.4d", VAR_5);

 return (VAR_3);
}
