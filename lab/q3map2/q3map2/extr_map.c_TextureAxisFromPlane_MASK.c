
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
struct TYPE_3__ {int normal; } ;
typedef TYPE_1__ plane_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_0 ;

void FUNC_2( plane_t *VAR_1, vec3_t VAR_2, vec3_t VAR_3 ){
 int VAR_4;
 vec_t VAR_5,VAR_6;
 int VAR_7;

 VAR_6 = 0;
 VAR_4 = 0;

 for ( VAR_7 = 0 ; VAR_7 < 6 ; VAR_7++ )
 {
  VAR_5 = FUNC_0( VAR_1->normal, VAR_0[VAR_7 * 3] );
  if ( VAR_5 > VAR_6 + 0.0001f ) {
   VAR_6 = VAR_5;
   VAR_4 = VAR_7;
  }
 }

 FUNC_1( VAR_0[VAR_4 * 3 + 1], VAR_2 );
 FUNC_1( VAR_0[VAR_4 * 3 + 2], VAR_3 );
}
