
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec4_t ;
typedef int qboolean ;


 int FUNC_0 (int,float*) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1(int VAR_2, vec4_t *VAR_3) {
 int VAR_4;
 float VAR_5;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  if (!FUNC_0(VAR_2, &VAR_5)) {
   return VAR_0;
  }
  (*VAR_3)[VAR_4] = VAR_5;
 }
 return VAR_1;
}
