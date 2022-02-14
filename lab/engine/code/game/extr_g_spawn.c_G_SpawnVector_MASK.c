
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (char const*,char const*,char**) ;
 int FUNC_1 (char*,char*,float*,float*,float*) ;

qboolean FUNC_2( const char *VAR_0, const char *VAR_1, float *VAR_2 ) {
 char *VAR_3;
 qboolean VAR_4;

 VAR_4 = FUNC_0( VAR_0, VAR_1, &VAR_3 );
 FUNC_1( VAR_3, "%f %f %f", &VAR_2[0], &VAR_2[1], &VAR_2[2] );
 return VAR_4;
}
