
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*,int) ;
 char** FUNC_2 (char const*,char const*,int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

int FUNC_6( const char *VAR_0, const char *VAR_1, char *VAR_2, int VAR_3 ) {
 int VAR_4, VAR_5, VAR_6, VAR_7;
 char **VAR_8 = ((void*)0);

 *VAR_2 = 0;
 VAR_4 = 0;
 VAR_6 = 0;

 if (FUNC_3(VAR_0, "$modlist") == 0) {
  return FUNC_1(VAR_2, VAR_3);
 }

 VAR_8 = FUNC_2(VAR_0, VAR_1, &VAR_4);

 for (VAR_5 =0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = FUNC_5(VAR_8[VAR_5]) + 1;
  if (VAR_6 + VAR_7 + 1 < VAR_3) {
   FUNC_4(VAR_2, VAR_8[VAR_5]);
   VAR_2 += VAR_7;
   VAR_6 += VAR_7;
  }
  else {
   VAR_4 = VAR_5;
   break;
  }
 }

 FUNC_0(VAR_8);

 return VAR_4;
}
