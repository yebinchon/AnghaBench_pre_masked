
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;

int FUNC_1(char *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4;
 char VAR_5[VAR_0];
 char VAR_6[VAR_0];

 for (VAR_4 = 0; VAR_4 < VAR_0-1 && VAR_1[VAR_4]; VAR_4++) {
  if ( VAR_1[VAR_4] == '\\' || VAR_1[VAR_4] == ':' ) {
   VAR_5[VAR_4] = '/';
  }
  else {
   VAR_5[VAR_4] = VAR_1[VAR_4];
  }
 }
 VAR_5[VAR_4] = '\0';
 for (VAR_4 = 0; VAR_4 < VAR_0-1 && VAR_2[VAR_4]; VAR_4++) {
  if ( VAR_2[VAR_4] == '\\' || VAR_2[VAR_4] == ':' ) {
   VAR_6[VAR_4] = '/';
  }
  else {
   VAR_6[VAR_4] = VAR_2[VAR_4];
  }
 }
 VAR_6[VAR_4] = '\0';
 return FUNC_0(VAR_5, VAR_6, VAR_3);
}
