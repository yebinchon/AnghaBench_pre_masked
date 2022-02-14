
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int origtemplate ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5(char *VAR_2)
{
 int VAR_3;
 char VAR_4[VAR_0];
 FUNC_3(VAR_4, VAR_2, sizeof(VAR_4));

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0) {
  int VAR_5 = VAR_1;
  const char *VAR_6;

  if (FUNC_4(VAR_2) != FUNC_4(VAR_4))
   VAR_2 = VAR_4;

  VAR_6 = FUNC_0(VAR_2);
  VAR_1 = VAR_5;
  FUNC_1("Unable to create temporary file '%s'",
   VAR_6);
 }
 return VAR_3;
}
