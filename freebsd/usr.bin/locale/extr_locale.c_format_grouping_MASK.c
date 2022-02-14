
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rval ;


 char VAR_0 ;
 int FUNC_0 (char*,int,char*,char const) ;

char *
FUNC_1(char *VAR_1)
{
 static char VAR_2[64];
 const char *VAR_3;
 size_t VAR_4;
 int VAR_5;





 if (*VAR_1 == VAR_0)
  return (VAR_1);

 VAR_2[0] = '\0';
 VAR_4 = 0;
 for (VAR_3 = VAR_1; *VAR_3 != '\0'; ++VAR_3) {




  VAR_5 = FUNC_0(&VAR_2[VAR_4], sizeof(VAR_2) - VAR_4, "%u;", *VAR_3);
  if (VAR_5 < 0 || (unsigned)VAR_5 >= sizeof(VAR_2) - VAR_4)
   break;
  VAR_4 += VAR_5;
  if (*VAR_3 == VAR_0)
   break;
 }


 if (VAR_4 != 0)
  VAR_2[VAR_4 - 1] = '\0';

 return (&VAR_2[0]);
}
