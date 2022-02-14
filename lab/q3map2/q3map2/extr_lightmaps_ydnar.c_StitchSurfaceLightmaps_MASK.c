
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* mins; float* maxs; int sh; int sw; float actualSampleSize; } ;
typedef TYPE_1__ rawLightmap_t ;


 int VAR_0 ;
 float FUNC_0 (float*,float*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_2 (int,int) ;
 float* FUNC_3 (int ,int,int) ;
 float* FUNC_4 (int,int) ;
 float* FUNC_5 (int,int) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (float*,float*,float*) ;
 int FUNC_9 (float*) ;
 int FUNC_10 (float*,float,float*) ;
 int FUNC_11 (int) ;
 float FUNC_12 (float) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_13( void ){
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, *VAR_12, *VAR_13,
  VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 rawLightmap_t *VAR_20, *VAR_21, *VAR_22, *VAR_23[ VAR_1 ];
 float *VAR_24, *VAR_25, *VAR_26, *VAR_27, *VAR_28, *VAR_29,
      VAR_30, VAR_31[ 3 ], VAR_32, VAR_33, *VAR_34[ VAR_2 ];



 return;


 FUNC_7( "--- StitchSurfaceLightmaps ---\n" );


 VAR_18 = -1;
 VAR_19 = FUNC_1();


 VAR_14 = 0;
 for ( VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ )
 {

  VAR_17 = 10 * VAR_6 / VAR_4;
  if ( VAR_17 != VAR_18 ) {
   VAR_18 = VAR_17;
   FUNC_7( "%i...", VAR_17 );
  }


  VAR_21 = &VAR_5[ VAR_6 ];


  VAR_15 = 0;
  for ( VAR_7 = VAR_6 + 1; VAR_7 < VAR_4 && VAR_15 < VAR_1; VAR_7++ )
  {

   VAR_22 = &VAR_5[ VAR_7 ];


   if ( VAR_21->mins[ 0 ] > VAR_22->maxs[ 0 ] || VAR_21->maxs[ 0 ] < VAR_22->mins[ 0 ] ||
     VAR_21->mins[ 1 ] > VAR_22->maxs[ 1 ] || VAR_21->maxs[ 1 ] < VAR_22->mins[ 1 ] ||
     VAR_21->mins[ 2 ] > VAR_22->maxs[ 2 ] || VAR_21->maxs[ 2 ] < VAR_22->mins[ 2 ] ) {
    continue;
   }


   VAR_23[ VAR_15++ ] = VAR_22;
  }


  for ( VAR_9 = 0; VAR_9 < VAR_21->sh; VAR_9++ )
  {
   for ( VAR_8 = 0; VAR_8 < VAR_21->sw; VAR_8++ )
   {

    VAR_20 = VAR_21;
    VAR_12 = FUNC_2( VAR_8, VAR_9 );
    if ( *VAR_12 == VAR_0 ) {
     continue;
    }
    VAR_24 = FUNC_3( 0, VAR_8, VAR_9 );
    if ( VAR_24[ 3 ] <= 0.0f ) {
     continue;
    }


    VAR_26 = FUNC_5( VAR_8, VAR_9 );
    VAR_28 = FUNC_4( VAR_8, VAR_9 );


    for ( VAR_7 = 0; VAR_7 < VAR_15; VAR_7++ )
    {

     VAR_22 = VAR_23[ VAR_7 ];
     VAR_20 = VAR_22;


     VAR_30 = 0.5f * ( VAR_21->actualSampleSize < VAR_22->actualSampleSize ? VAR_21->actualSampleSize : VAR_22->actualSampleSize );


     if ( VAR_26[ 0 ] < ( VAR_22->mins[ 0 ] - VAR_30 ) || ( VAR_26[ 0 ] > VAR_22->maxs[ 0 ] + VAR_30 ) ||
       VAR_26[ 1 ] < ( VAR_22->mins[ 1 ] - VAR_30 ) || ( VAR_26[ 1 ] > VAR_22->maxs[ 1 ] + VAR_30 ) ||
       VAR_26[ 2 ] < ( VAR_22->mins[ 2 ] - VAR_30 ) || ( VAR_26[ 2 ] > VAR_22->maxs[ 2 ] + VAR_30 ) ) {
      continue;
     }


     FUNC_9( VAR_31 );
     VAR_16 = 0;
     VAR_32 = 0.0f;
     for ( VAR_11 = 0; VAR_11 < VAR_22->sh && VAR_16 < VAR_2; VAR_11++ )
     {
      for ( VAR_10 = 0; VAR_10 < VAR_22->sw && VAR_16 < VAR_2; VAR_10++ )
      {

       if ( VAR_21 == VAR_22 && FUNC_11( VAR_8 - VAR_10 ) <= 1 && FUNC_11( VAR_9 - VAR_11 ) <= 1 ) {
        continue;
       }


       VAR_13 = FUNC_2( VAR_10, VAR_11 );
       if ( *VAR_13 == VAR_0 ) {
        continue;
       }
       VAR_25 = FUNC_3( 0, VAR_10, VAR_11 );
       if ( VAR_25[ 3 ] <= 0.0f ) {
        continue;
       }


       VAR_27 = FUNC_5( VAR_10, VAR_11 );
       VAR_29 = FUNC_4( VAR_10, VAR_11 );


       if ( FUNC_0( VAR_28, VAR_29 ) < 0.5f ) {
        continue;
       }


       if ( FUNC_12( VAR_26[ 0 ] - VAR_27[ 0 ] ) > VAR_30 ||
         FUNC_12( VAR_26[ 1 ] - VAR_27[ 1 ] ) > VAR_30 ||
         FUNC_12( VAR_26[ 2 ] - VAR_27[ 2 ] ) > VAR_30 ) {
        continue;
       }



       VAR_34[ VAR_16++ ] = VAR_25;
       FUNC_8( VAR_31, VAR_25, VAR_31 );
       VAR_32 += VAR_25[ 3 ];
      }
     }


     if ( VAR_16 == 0 ) {
      continue;
     }


     VAR_33 = 1.0f / VAR_32;
     FUNC_10( VAR_31, VAR_33, VAR_24 );
     VAR_24[ 3 ] = 1.0f;
     VAR_14++;
    }
   }
  }
 }


 FUNC_7( " (%i)\n", (int) ( FUNC_1() - VAR_19 ) );
 FUNC_6( VAR_3, "%9d luxels stitched\n", VAR_14 );
}
