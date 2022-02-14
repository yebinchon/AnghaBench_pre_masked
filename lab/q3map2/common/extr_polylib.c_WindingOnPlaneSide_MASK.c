
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef scalar_t__ vec_t ;
typedef int vec3_t ;
typedef scalar_t__ qboolean ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_1( winding_t *VAR_7, vec3_t VAR_8, vec_t VAR_9 ){
 qboolean VAR_10, VAR_11;
 int VAR_12;
 vec_t VAR_13;

 VAR_10 = VAR_5;
 VAR_11 = VAR_5;
 for ( VAR_12 = 0 ; VAR_12 < VAR_7->numpoints ; VAR_12++ )
 {
  VAR_13 = FUNC_0( VAR_7->p[VAR_12], VAR_8 ) - VAR_9;
  if ( VAR_13 < -VAR_0 ) {
   if ( VAR_10 ) {
    return VAR_2;
   }
   VAR_11 = VAR_6;
   continue;
  }
  if ( VAR_13 > VAR_0 ) {
   if ( VAR_11 ) {
    return VAR_2;
   }
   VAR_10 = VAR_6;
   continue;
  }
 }

 if ( VAR_11 ) {
  return VAR_1;
 }
 if ( VAR_10 ) {
  return VAR_3;
 }
 return VAR_4;
}
