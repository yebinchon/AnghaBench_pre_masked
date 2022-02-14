
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int numSurfaces; size_t* surfaces; int cluster; int normal; int origin; void* twoSided; void* testAll; int inhibitRadius; int recvShadows; void* forceSunlight; void* testOcclusion; } ;
typedef TYPE_2__ trace_t ;
struct TYPE_10__ {TYPE_1__* si; } ;
typedef TYPE_3__ surfaceInfo_t ;
struct TYPE_11__ {int numLightSurfaces; size_t firstLightSurface; int sh; int sw; int recvShadows; } ;
typedef TYPE_4__ rawLightmap_t ;
struct TYPE_8__ {scalar_t__ twoSided; } ;


 int VAR_0 ;
 float FUNC_0 (TYPE_2__*) ;
 int* FUNC_1 (int,int) ;
 float* FUNC_2 (int,int) ;
 float* FUNC_3 (int,int) ;
 float* FUNC_4 (int,int) ;
 int FUNC_5 (float*,int ) ;
 size_t* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;

void FUNC_6( int VAR_7 ){
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, *VAR_13;
 float *VAR_14, *VAR_15, *VAR_16, *VAR_17, VAR_18, VAR_19;
 rawLightmap_t *VAR_20;
 surfaceInfo_t *VAR_21;
 trace_t VAR_22;



 if ( VAR_7 >= VAR_2 ) {
  return;
 }


 VAR_20 = &VAR_5[ VAR_7 ];


 VAR_22.testOcclusion = VAR_4;
 VAR_22.forceSunlight = VAR_3;
 VAR_22.recvShadows = VAR_20->recvShadows;
 VAR_22.numSurfaces = VAR_20->numLightSurfaces;
 VAR_22.surfaces = &VAR_1[ VAR_20->firstLightSurface ];
 VAR_22.inhibitRadius = VAR_0;
 VAR_22.testAll = VAR_3;


 VAR_22.twoSided = VAR_3;
 for ( VAR_8 = 0; VAR_8 < VAR_22.numSurfaces; VAR_8++ )
 {

  VAR_21 = &VAR_6[ VAR_22.surfaces[ VAR_8 ] ];


  if ( VAR_21->si->twoSided ) {
   VAR_22.twoSided = VAR_4;
   break;
  }
 }


 for ( VAR_10 = 0; VAR_10 < VAR_20->sh; VAR_10++ )
 {
  for ( VAR_9 = 0; VAR_9 < VAR_20->sw; VAR_9++ )
  {

   VAR_13 = FUNC_1( VAR_9, VAR_10 );
   VAR_14 = FUNC_4( VAR_9, VAR_10 );
   VAR_15 = FUNC_3( VAR_9, VAR_10 );
   VAR_16 = FUNC_2( VAR_9, VAR_10 );


   *VAR_16 = 0.0f;


   if ( *VAR_13 < 0 ) {
    continue;
   }


   VAR_22.cluster = *VAR_13;
   FUNC_5( VAR_14, VAR_22.origin );
   FUNC_5( VAR_15, VAR_22.normal );


   *VAR_16 = FUNC_0( &VAR_22 );
  }
 }





 for ( VAR_10 = 0; VAR_10 < VAR_20->sh; VAR_10++ )
 {
  for ( VAR_9 = 0; VAR_9 < VAR_20->sw; VAR_9++ )
  {

   VAR_13 = FUNC_1( VAR_9, VAR_10 );
   VAR_16 = FUNC_2( VAR_9, VAR_10 );


   VAR_18 = *VAR_16;
   VAR_19 = 1.0f;
   for ( VAR_12 = ( VAR_10 - 1 ); VAR_12 <= ( VAR_10 + 1 ); VAR_12++ )
   {
    if ( VAR_12 < 0 || VAR_12 >= VAR_20->sh ) {
     continue;
    }

    for ( VAR_11 = ( VAR_9 - 1 ); VAR_11 <= ( VAR_9 + 1 ); VAR_11++ )
    {
     if ( VAR_11 < 0 || VAR_11 >= VAR_20->sw || ( VAR_11 == VAR_9 && VAR_12 == VAR_10 ) ) {
      continue;
     }


     VAR_13 = FUNC_1( VAR_11, VAR_12 );
     VAR_17 = FUNC_2( VAR_11, VAR_12 );
     if ( *VAR_13 < 0 || *VAR_17 <= 0.0f ) {
      continue;
     }


     VAR_18 += *VAR_17;
     VAR_19 += 1.0f;
    }


    if ( VAR_19 <= 0.0f ) {
     break;
    }
   }


   if ( VAR_19 <= 0.0f ) {
    continue;
   }


   *VAR_16 = VAR_18 / VAR_19;
  }
 }
}
