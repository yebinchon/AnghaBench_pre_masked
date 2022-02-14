
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_1, char VAR_2)
{
 static char *VAR_3;
 static size_t VAR_4;
 char *VAR_5;
 size_t VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_1) + 2;
 if (VAR_6 > VAR_4) {
  VAR_7 = ((VAR_6 + 1023) >> 10) << 10;
  if ((VAR_5 = FUNC_1(VAR_3, VAR_7)) == ((void*)0)) {
   FUNC_4("%s", FUNC_2(VAR_0));
   return (((void*)0));
  }
  VAR_3 = VAR_5;
  VAR_4 = VAR_7;
 }

 FUNC_0(VAR_3, VAR_1, VAR_6 - 3);
 VAR_3[VAR_6 - 3] = 'j';
 VAR_3[VAR_6 - 2] = VAR_2;
 VAR_3[VAR_6 - 1] = '\0';
 return (VAR_3);
}
