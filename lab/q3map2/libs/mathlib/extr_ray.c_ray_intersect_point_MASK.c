
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float vec_t ;
typedef int vec3_t ;
struct TYPE_3__ {int direction; int origin; } ;
typedef TYPE_1__ ray_t ;


 float FUNC_0 (int ,int ) ;
 int VAR_0 ;
 float FUNC_1 (int ) ;
 int FUNC_2 (int ,float,int ,int ) ;
 int FUNC_3 (int const,int ,int ) ;

vec_t FUNC_4( const ray_t *VAR_1, const vec3_t VAR_2, vec_t VAR_3, vec_t VAR_4 ){
 vec3_t VAR_5;
 vec_t VAR_6;


 FUNC_3( VAR_2, VAR_1->origin, VAR_5 );

 VAR_6 = FUNC_0( VAR_5, VAR_1->direction );
 if ( VAR_6 < 0.0f ) {
  return (vec_t)VAR_0;
 }

 FUNC_2( VAR_1->origin, VAR_6, VAR_1->direction, VAR_5 );

 FUNC_3( VAR_2, VAR_5, VAR_5 );

 if ( FUNC_1( VAR_5 ) - ( VAR_3 + ( VAR_6 * VAR_4 ) ) > 0.0f ) {
  return (vec_t)VAR_0;
 }
 return VAR_6;
}
