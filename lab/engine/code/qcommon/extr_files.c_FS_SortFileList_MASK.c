
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char**,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char**) ;
 char** FUNC_3 (int) ;

void FUNC_4(char **VAR_0, int VAR_1) {
 int VAR_2, VAR_3, VAR_4, VAR_5;
 char **VAR_6;

 VAR_6 = FUNC_3( ( VAR_1 + 1 ) * sizeof( *VAR_6 ) );
 VAR_6[0] = ((void*)0);
 VAR_5 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   if (FUNC_1(VAR_0[VAR_2], VAR_6[VAR_3]) < 0) {
    break;
   }
  }
  for (VAR_4 = VAR_5; VAR_4 > VAR_3; VAR_4--) {
   VAR_6[VAR_4] = VAR_6[VAR_4-1];
  }
  VAR_6[VAR_3] = VAR_0[VAR_2];
  VAR_5++;
 }
 FUNC_0(VAR_0, VAR_6, VAR_1 * sizeof( *VAR_0 ) );
 FUNC_2(VAR_6);
}
