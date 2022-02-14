
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*) ;
 char* FUNC_1 (char**) ;
 float FUNC_2 (char*) ;

void FUNC_3 (char **VAR_0, int VAR_1, float *VAR_2) {
 char *VAR_3;
 int VAR_4;

 FUNC_0( VAR_0, "(" );

 for (VAR_4 = 0 ; VAR_4 < VAR_1 ; VAR_4++) {
  VAR_3 = FUNC_1(VAR_0);
  VAR_2[VAR_4] = FUNC_2(VAR_3);
 }

 FUNC_0( VAR_0, ")" );
}
