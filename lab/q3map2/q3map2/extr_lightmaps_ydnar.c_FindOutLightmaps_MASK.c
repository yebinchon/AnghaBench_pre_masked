
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_17__ {scalar_t__ si; } ;
typedef TYPE_1__ surfaceInfo_t ;
struct TYPE_18__ {int* outLightmapNums; scalar_t__* styles; scalar_t__ used; int customWidth; int customHeight; int* lightmapX; int* lightmapY; int w; int h; int numLightSurfaces; int firstLightSurface; float** solidColor; int brightness; scalar_t__* solid; int ** twins; } ;
typedef TYPE_2__ rawLightmap_t ;
typedef scalar_t__ qboolean ;
struct TYPE_19__ {scalar_t__ freeLuxels; int customWidth; int customHeight; int numShaders; scalar_t__* shaders; int* lightBits; int* bspLightBytes; int* bspDirBytes; int numLightmaps; scalar_t__ extLightmapNum; } ;
typedef TYPE_3__ outLightmap_t ;
typedef int byte ;
struct TYPE_20__ {scalar_t__ load; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 float* FUNC_1 (int,int) ;
 float* FUNC_2 (int,int,int) ;
 int FUNC_3 (scalar_t__*,int*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,TYPE_3__*,int,int) ;
 int FUNC_7 (float*,scalar_t__*) ;
 scalar_t__ FUNC_8 (float*,scalar_t__*) ;
 int FUNC_9 (scalar_t__*,float,float,float) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (TYPE_3__*) ;
 TYPE_9__* VAR_6 ;
 size_t* VAR_7 ;
 int FUNC_11 (TYPE_3__*,TYPE_3__*,int) ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_3__* FUNC_12 (int) ;
 TYPE_1__* VAR_13 ;

__attribute__((used)) static void FUNC_13( rawLightmap_t *VAR_14 ){
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 outLightmap_t *VAR_28;
 surfaceInfo_t *VAR_29;
 float *VAR_30, *VAR_31;
 vec3_t VAR_32, VAR_33;
 byte *VAR_34;
 qboolean VAR_35;



 for ( VAR_17 = 0; VAR_17 < VAR_2; VAR_17++ )
  VAR_14->outLightmapNums[ VAR_17 ] = -3;


 if ( FUNC_0( VAR_14 ) ) {
  return;
 }


 for ( VAR_17 = 0; VAR_17 < VAR_2; VAR_17++ )
 {

  if ( VAR_14->styles[ VAR_17 ] == VAR_0 ) {
   continue;
  }


  if ( VAR_14->twins[ VAR_17 ] != ((void*)0) ) {
   continue;
  }


  VAR_35 = VAR_12;
  if ( VAR_17 > 0 && VAR_11 != ((void*)0) ) {

   for ( VAR_16 = 0; VAR_16 < 2; VAR_16++ )
   {

    for ( VAR_15 = 0; VAR_15 < VAR_10; VAR_15++ )
    {

     VAR_28 = &VAR_11[ VAR_15 ];


     if ( VAR_28->freeLuxels < VAR_14->used ) {
      continue;
     }


     if ( VAR_28->customWidth != VAR_14->customWidth ||
       VAR_28->customHeight != VAR_14->customHeight ) {
      continue;
     }


     if ( VAR_16 == 0 ) {
      VAR_20 = VAR_14->lightmapX[ 0 ];
      VAR_21 = VAR_14->lightmapY[ 0 ];
      VAR_35 = FUNC_6( VAR_14, VAR_17, VAR_28, VAR_20, VAR_21 );
     }


     else
     {
      for ( VAR_23 = -1; VAR_23 <= 1; VAR_23++ )
      {
       for ( VAR_22 = -1; VAR_22 <= 1; VAR_22++ )
       {
        VAR_20 = VAR_14->lightmapX[ 0 ] + VAR_22 * ( VAR_28->customWidth >> 1 );
        VAR_21 = VAR_14->lightmapY[ 0 ] + VAR_23 * ( VAR_28->customHeight >> 1 );
        VAR_35 = FUNC_6( VAR_14, VAR_17, VAR_28, VAR_20, VAR_21 );

        if ( VAR_35 ) {
         break;
        }
       }

       if ( VAR_35 ) {
        break;
       }
      }
     }

     if ( VAR_35 ) {
      break;
     }
    }

    if ( VAR_35 ) {
     break;
    }
   }
  }


  if ( VAR_35 == VAR_12 ) {

   VAR_20 = 0;
   VAR_21 = 0;


   for ( VAR_15 = 0; VAR_15 < VAR_10; VAR_15++ )
   {

    VAR_28 = &VAR_11[ VAR_15 ];


    if ( VAR_28->freeLuxels < VAR_14->used ) {
     continue;
    }


    if ( VAR_28->customWidth != VAR_14->customWidth ||
      VAR_28->customHeight != VAR_14->customHeight ) {
     continue;
    }


    if ( VAR_14->solid[ VAR_17 ] ) {
     VAR_18 = VAR_28->customWidth;
     VAR_19 = VAR_28->customHeight;
    }
    else
    {
     VAR_18 = ( VAR_28->customWidth - VAR_14->w ) + 1;
     VAR_19 = ( VAR_28->customHeight - VAR_14->h ) + 1;
    }


    for ( VAR_21 = 0; VAR_21 < VAR_19; VAR_21++ )
    {
     for ( VAR_20 = 0; VAR_20 < VAR_18; VAR_20++ )
     {

      VAR_35 = FUNC_6( VAR_14, VAR_17, VAR_28, VAR_20, VAR_21 );

      if ( VAR_35 ) {
       break;
      }
     }

     if ( VAR_35 ) {
      break;
     }
    }

    if ( VAR_35 ) {
     break;
    }


    VAR_20 = 0;
    VAR_21 = 0;
   }
  }


  if ( VAR_35 == VAR_12 ) {

   VAR_10 += 2;
   VAR_28 = FUNC_12( VAR_10 * sizeof( outLightmap_t ) );
   if ( !VAR_28 )
   {
    FUNC_4( "FindOutLightmaps: Failed to allocate memory.\n" );
   }

   if ( VAR_11 != ((void*)0) && VAR_10 > 2 ) {
    FUNC_11( VAR_28, VAR_11, ( VAR_10 - 2 ) * sizeof( outLightmap_t ) );
    FUNC_10( VAR_11 );
   }
   VAR_11 = VAR_28;


   FUNC_5( VAR_14, &VAR_11[ VAR_10 - 2 ] );
   FUNC_5( VAR_14, &VAR_11[ VAR_10 - 1 ] );


   VAR_15 = VAR_10 - 2;
   VAR_28 = &VAR_11[ VAR_15 ];


   if ( VAR_17 > 0 ) {
    VAR_20 = VAR_14->lightmapX[ 0 ];
    VAR_21 = VAR_14->lightmapY[ 0 ];
   }
  }


  if ( VAR_17 > 0 && VAR_6->load != VAR_1 ) {
   VAR_28->extLightmapNum = 0;
  }


  VAR_14->outLightmapNums[ VAR_17 ] = VAR_15;
  VAR_14->lightmapX[ VAR_17 ] = VAR_20;
  VAR_14->lightmapY[ VAR_17 ] = VAR_21;
  VAR_28->numLightmaps++;


  for ( VAR_15 = 0; VAR_15 < VAR_14->numLightSurfaces; VAR_15++ )
  {

   VAR_29 = &VAR_13[ VAR_7[ VAR_14->firstLightSurface + VAR_15 ] ];


   for ( VAR_16 = 0; VAR_16 < VAR_28->numShaders; VAR_16++ )
   {
    if ( VAR_28->shaders[ VAR_16 ] == VAR_29->si ) {
     break;
    }
   }


   if ( VAR_16 >= VAR_28->numShaders && VAR_28->numShaders < VAR_3 ) {
    VAR_28->shaders[ VAR_28->numShaders ] = VAR_29->si;
    VAR_28->numShaders++;
    VAR_9++;
   }
  }


  if ( VAR_14->solid[ VAR_17 ] ) {
   VAR_18 = 1;
   VAR_19 = 1;
  }
  else
  {
   VAR_18 = VAR_14->w;
   VAR_19 = VAR_14->h;
  }


  for ( VAR_21 = 0; VAR_21 < VAR_19; VAR_21++ )
  {
   for ( VAR_20 = 0; VAR_20 < VAR_18; VAR_20++ )
   {

    VAR_30 = FUNC_2( VAR_17, VAR_20, VAR_21 );
    VAR_31 = FUNC_1( VAR_20, VAR_21 );
    if ( VAR_30[ 0 ] < 0.0f && !VAR_14->solid[ VAR_17 ] ) {
     continue;
    }


    if ( VAR_14->solid[ VAR_17 ] ) {
     if ( VAR_4 ) {
      FUNC_9( VAR_32, 255.0f, 0.0f, 0.0f );
     }
     else{
      FUNC_7( VAR_14->solidColor[ VAR_17 ], VAR_32 );
     }
    }
    else{
     FUNC_7( VAR_30, VAR_32 );
    }


    if ( VAR_17 == 0 ) {
     for ( VAR_15 = 0; VAR_15 < 3; VAR_15++ )
     {
      if ( VAR_32[ VAR_15 ] < VAR_8[ VAR_15 ] ) {
       VAR_32[ VAR_15 ] = VAR_8[ VAR_15 ];
      }
     }
    }


    VAR_24 = VAR_20 + VAR_14->lightmapX[ VAR_17 ];
    VAR_25 = VAR_21 + VAR_14->lightmapY[ VAR_17 ];
    VAR_26 = ( VAR_25 * VAR_28->customWidth ) + VAR_24;


    VAR_28->lightBits[ VAR_26 >> 3 ] |= ( 1 << ( VAR_26 & 7 ) );
    VAR_28->freeLuxels--;


    VAR_34 = VAR_28->bspLightBytes + ( ( ( VAR_25 * VAR_28->customWidth ) + VAR_24 ) * 3 );
    FUNC_3( VAR_32, VAR_34, VAR_14->brightness );


    if ( VAR_5 ) {

     if ( FUNC_8( VAR_31, VAR_33 ) ) {

      VAR_34 = VAR_28->bspDirBytes + ( ( ( VAR_25 * VAR_28->customWidth ) + VAR_24 ) * 3 );
      for ( VAR_15 = 0; VAR_15 < 3; VAR_15++ )
      {
       VAR_27 = ( VAR_33[ VAR_15 ] + 1.0f ) * 127.5f;
       if ( VAR_27 < 0 ) {
        VAR_34[ VAR_15 ] = 0;
       }
       else if ( VAR_27 > 255 ) {
        VAR_34[ VAR_15 ] = 255;
       }
       else{
        VAR_34[ VAR_15 ] = VAR_27;
       }
      }
     }
    }
   }
  }
 }
}
