
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_12__ {size_t planenum; TYPE_9__* winding; TYPE_8__* shaderInfo; } ;
typedef TYPE_1__ side_t ;
struct TYPE_13__ {int shader; } ;
typedef TYPE_2__ bspShader_t ;
typedef int bspPlane_t ;
struct TYPE_14__ {int numSides; int firstSide; } ;
typedef TYPE_3__ bspBrush_t ;
struct TYPE_15__ {size_t shaderNum; size_t planeNum; } ;
typedef TYPE_4__ bspBrushSide_t ;
struct TYPE_18__ {int * p; } ;
struct TYPE_17__ {char* shader; } ;
struct TYPE_16__ {int numsides; TYPE_1__* sides; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_8__* FUNC_4 (int ) ;
 int FUNC_5 (int ,double*,double*) ;
 TYPE_4__* VAR_0 ;
 int * VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_6 (int *,char*,...) ;
 size_t VAR_4 ;

__attribute__((used)) static void FUNC_7( FILE *VAR_5, int VAR_6, bspBrush_t *VAR_7, vec3_t VAR_8 ){
 int VAR_9, VAR_10;
 bspBrushSide_t *VAR_11;
 side_t *VAR_12;
 bspShader_t *VAR_13;
 char *VAR_14;
 bspPlane_t *VAR_15;
 vec3_t VAR_16[ 3 ];



 FUNC_6( VAR_5, "\t// brush %d\n", VAR_6 );
 FUNC_6( VAR_5, "\t{\n" );


 for ( VAR_9 = 0; VAR_9 < VAR_3->numsides; VAR_9++ )
 {
  VAR_12 = &VAR_3->sides[ VAR_9 ];
  if ( VAR_12->winding != ((void*)0) ) {
   FUNC_1( VAR_12->winding );
   VAR_12->winding = ((void*)0);
  }
 }
 VAR_3->numsides = 0;


 for ( VAR_9 = 0; VAR_9 < VAR_7->numSides; VAR_9++ )
 {

  VAR_11 = &VAR_0[ VAR_7->firstSide + VAR_9 ];


  if ( VAR_11->shaderNum < 0 || VAR_11->shaderNum >= VAR_4 ) {
   continue;
  }
  VAR_13 = &VAR_2[ VAR_11->shaderNum ];
  if ( !FUNC_2( VAR_13->shader, "default" ) || !FUNC_2( VAR_13->shader, "noshader" ) ) {
   continue;
  }


  VAR_15 = &VAR_1[ VAR_11->planeNum ];


  VAR_12 = &VAR_3->sides[ VAR_3->numsides ];
  VAR_3->numsides++;


  VAR_12->shaderInfo = FUNC_4( VAR_13->shader );
  VAR_12->planenum = VAR_11->planeNum;
  VAR_12->winding = ((void*)0);
 }


 if ( !FUNC_0( VAR_3 ) ) {
  return;
 }


 for ( VAR_9 = 0; VAR_9 < VAR_3->numsides; VAR_9++ )
 {

  VAR_12 = &VAR_3->sides[ VAR_9 ];


  if ( VAR_12->shaderInfo == ((void*)0) || VAR_12->winding == ((void*)0) ) {
   continue;
  }


  if ( !FUNC_3( VAR_12->shaderInfo->shader, "textures/", 9 ) ) {
   VAR_14 = VAR_12->shaderInfo->shader + 9;
  }
  else{
   VAR_14 = VAR_12->shaderInfo->shader;
  }


  for ( VAR_10 = 0; VAR_10 < 3; VAR_10++ )
  {
   FUNC_5( VAR_12->winding->p[ VAR_10 ], VAR_8, VAR_16[ VAR_10 ] );



  }



  FUNC_6( VAR_5, "\t\t( %.3f %.3f %.3f ) ( %.3f %.3f %.3f ) ( %.3f %.3f %.3f ) %s 0 0 0 0.5 0.5 0 0 0\n",
     VAR_16[ 0 ][ 0 ], VAR_16[ 0 ][ 1 ], VAR_16[ 0 ][ 2 ],
     VAR_16[ 1 ][ 0 ], VAR_16[ 1 ][ 1 ], VAR_16[ 1 ][ 2 ],
     VAR_16[ 2 ][ 0 ], VAR_16[ 2 ][ 1 ], VAR_16[ 2 ][ 2 ],
     VAR_14 );
 }


 FUNC_6( VAR_5, "\t}\n\n" );
}
