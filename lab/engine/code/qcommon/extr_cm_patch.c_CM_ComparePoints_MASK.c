
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static qboolean FUNC_0( float *VAR_3, float *VAR_4 ) {
 float VAR_5;

 VAR_5 = VAR_3[0] - VAR_4[0];
 if ( VAR_5 < -VAR_0 || VAR_5 > VAR_0 ) {
  return VAR_1;
 }
 VAR_5 = VAR_3[1] - VAR_4[1];
 if ( VAR_5 < -VAR_0 || VAR_5 > VAR_0 ) {
  return VAR_1;
 }
 VAR_5 = VAR_3[2] - VAR_4[2];
 if ( VAR_5 < -VAR_0 || VAR_5 > VAR_0 ) {
  return VAR_1;
 }
 return VAR_2;
}
