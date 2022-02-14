
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_3__ {float* modulate; int xyz; } ;
typedef TYPE_1__ polyVert_t ;


 float FUNC_0 (float*,float*) ;
 int VAR_0 ;
 int FUNC_1 (int ,float*,float*,float*) ;

int FUNC_2( vec3_t VAR_1, int VAR_2, polyVert_t *VAR_3 )
{
 int VAR_4, VAR_5;
 float VAR_6;
 vec3_t VAR_7;
 vec3_t VAR_8;
 vec3_t VAR_9;

 FUNC_1( VAR_3[0].xyz, VAR_7, VAR_9, VAR_8 );

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_6 = FUNC_0 (VAR_1, VAR_8);
  if ( VAR_6 <= 0 ) {
   VAR_3[VAR_4].modulate[0] = VAR_7[0];
   VAR_3[VAR_4].modulate[1] = VAR_7[1];
   VAR_3[VAR_4].modulate[2] = VAR_7[2];
   VAR_3[VAR_4].modulate[3] = 255;
   continue;
  }
  VAR_5 = ( VAR_7[0] + VAR_6 * VAR_9[0] );
  if ( VAR_5 > 255 ) {
   VAR_5 = 255;
  }
  VAR_3[VAR_4].modulate[0] = VAR_5;

  VAR_5 = ( VAR_7[1] + VAR_6 * VAR_9[1] );
  if ( VAR_5 > 255 ) {
   VAR_5 = 255;
  }
  VAR_3[VAR_4].modulate[1] = VAR_5;

  VAR_5 = ( VAR_7[2] + VAR_6 * VAR_9[2] );
  if ( VAR_5 > 255 ) {
   VAR_5 = 255;
  }
  VAR_3[VAR_4].modulate[2] = VAR_5;

  VAR_3[VAR_4].modulate[3] = 255;
 }
 return VAR_0;
}
