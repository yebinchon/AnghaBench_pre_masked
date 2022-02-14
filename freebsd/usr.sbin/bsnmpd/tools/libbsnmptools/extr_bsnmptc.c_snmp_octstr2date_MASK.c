
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char,char,char,...) ;

__attribute__((used)) static char *
FUNC_1(uint32_t VAR_1, char *VAR_2, char *VAR_3)
{
 int VAR_4;
 char *VAR_5;

 if (VAR_1 != VAR_0 || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3[0]= '\0';
 VAR_4 = (VAR_2[0] << 8);
 VAR_4 += (VAR_2[1]);

 VAR_5 = VAR_3;
 VAR_5 += FUNC_0(VAR_5, "%4.4d-%.2d-%.2d, ", VAR_4, VAR_2[2],VAR_2[3]);
 VAR_5 += FUNC_0(VAR_5, "%2.2d:%2.2d:%2.2d.%.2d, ", VAR_2[4],VAR_2[5],
     VAR_2[6],VAR_2[7]);
 VAR_5 += FUNC_0(VAR_5, "%c%.2d:%.2d", VAR_2[8],VAR_2[9],VAR_2[10]);

 return (VAR_3);
}
