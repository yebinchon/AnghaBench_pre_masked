
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;


 int FUNC_0 (char*,int,char*,int,int,int) ;

char *FUNC_1( const vec3_t VAR_0 ) {
 static int VAR_1;
 static char VAR_2[8][32];
 char *VAR_3;


 VAR_3 = VAR_2[VAR_1];
 VAR_1 = (VAR_1 + 1)&7;

 FUNC_0 (VAR_3, 32, "(%i %i %i)", (int)VAR_0[0], (int)VAR_0[1], (int)VAR_0[2]);

 return VAR_3;
}
