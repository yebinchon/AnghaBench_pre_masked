
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int vec3_t ;
struct TYPE_7__ {TYPE_1__* normalImage; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_8__ {int normal; int st; } ;
typedef TYPE_3__ bspDrawVert_t ;
struct TYPE_6__ {int height; int width; int pixels; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,float*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,float,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_4( bspDrawVert_t *VAR_1, shaderInfo_t *VAR_2, vec3_t VAR_3, vec3_t VAR_4[ 3 ], vec3_t VAR_5[ 3 ] ){
 int VAR_6;
 vec4_t VAR_7;



 FUNC_1( VAR_1->normal, VAR_3 );


 if ( FUNC_0( VAR_2->normalImage->pixels, VAR_2->normalImage->width, VAR_2->normalImage->height, VAR_1->st, VAR_7 ) == VAR_0 ) {
  return;
 }


 for ( VAR_6 = 0; VAR_6 < 3; VAR_6++ )
  VAR_7[ VAR_6 ] = ( VAR_7[ VAR_6 ] - 127.0f ) * ( 1.0f / 127.5f );


 FUNC_2( VAR_1->normal, VAR_7[ 0 ], VAR_4[ 0 ], VAR_3 );
 FUNC_2( VAR_3, VAR_7[ 1 ], VAR_5[ 0 ], VAR_3 );
 FUNC_2( VAR_3, VAR_7[ 2 ], VAR_1->normal, VAR_3 );


 FUNC_3( VAR_3, VAR_3 );
}
