
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int origtemplate ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4(char *VAR_2, int VAR_3)
{
 int VAR_4;
 char VAR_5[VAR_0];
 FUNC_3(VAR_5, VAR_2, sizeof(VAR_5));

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  int VAR_6 = VAR_1;
  const char *VAR_7;

  if (!VAR_2[0])
   VAR_2 = VAR_5;

  VAR_7 = FUNC_0(VAR_2);
  VAR_1 = VAR_6;
  FUNC_1("Unable to create temporary file '%s'",
   VAR_7);
 }
 return VAR_4;
}
