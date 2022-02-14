
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec4_t ;
typedef float* vec3_t ;
struct TYPE_7__ {int compileFlags; float* lightmapAxis; int lightmapSampleSize; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_8__ {scalar_t__ type; int numVerts; size_t planeNum; float** lightmapVecs; float* lightmapAxis; int sampleSize; int lightmapScale; TYPE_2__* shaderInfo; TYPE_1__* verts; void* planar; int maxs; int mins; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_9__ {float* normal; float dist; } ;
struct TYPE_6__ {float* xyz; float* normal; } ;


 int FUNC_0 (float*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (float*,float*) ;
 int FUNC_2 (int ,int ) ;
 float FUNC_3 (float*,float*) ;
 int FUNC_4 (float*,float,int,float**) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (float*) ;
 int FUNC_6 (float*,float*) ;
 float FUNC_7 (float*) ;
 scalar_t__ FUNC_8 (float) ;
 TYPE_4__* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;

void FUNC_9( int VAR_12, mapDrawSurface_t *VAR_13 ){
 int VAR_14, VAR_15;
 float VAR_16;
 vec4_t VAR_17;
 shaderInfo_t *VAR_18;
 static vec3_t VAR_19[ 6 ] =
 {
  { 0, 0, -1 },
  { 0, 0, 1 },
  { -1, 0, 0 },
  { 1, 0, 0 },
  { 0, -1, 0 },
  { 0, 1, 0 }
 };



 for ( ; VAR_12 > 0; VAR_12--, VAR_13++ )
 {

  if ( VAR_13->type == VAR_3 || VAR_13->numVerts <= 0 ) {
   continue;
  }


  VAR_18 = VAR_13->shaderInfo;





  if ( VAR_13->type != VAR_6 && VAR_13->type != VAR_4 ) {
   if ( VAR_13->numVerts > VAR_2 ) {
    VAR_13->type = VAR_5;
   }
  }






  FUNC_2( VAR_13->mins, VAR_13->maxs );
  for ( VAR_14 = 0; VAR_14 < VAR_13->numVerts; VAR_14++ )
   FUNC_0( VAR_13->verts[ VAR_14 ].xyz, VAR_13->mins, VAR_13->maxs );


  if ( VAR_13->planeNum >= 0 ) {
   FUNC_6( VAR_8[ VAR_13->planeNum ].normal, VAR_17 );
   VAR_17[ 3 ] = VAR_8[ VAR_13->planeNum ].dist;
  }


  else
  {
   FUNC_5( VAR_17 );
   VAR_17[ 3 ] = 0.0f;
   for ( VAR_14 = 0; VAR_14 < VAR_13->numVerts; VAR_14++ )
   {
    if ( VAR_13->verts[ VAR_14 ].normal[ 0 ] != 0.0f && VAR_13->verts[ VAR_14 ].normal[ 1 ] != 0.0f && VAR_13->verts[ VAR_14 ].normal[ 2 ] != 0.0f ) {
     FUNC_6( VAR_13->verts[ VAR_14 ].normal, VAR_17 );
     VAR_17[ 3 ] = FUNC_3( VAR_13->verts[ VAR_14 ].xyz, VAR_17 );
     break;
    }
   }
  }


  if ( FUNC_7( VAR_17 ) <= 0.0f ) {
   VAR_13->planar = VAR_9;
   VAR_13->planeNum = -1;
  }
  else
  {

   VAR_13->planar = VAR_10;


   for ( VAR_14 = 0; VAR_14 < VAR_13->numVerts; VAR_14++ )
   {

    VAR_16 = FUNC_3( VAR_13->verts[ VAR_14 ].xyz, VAR_17 ) - VAR_17[ 3 ];
    if ( FUNC_8( VAR_16 ) > VAR_1 ) {





     VAR_13->planar = VAR_9;
     break;
    }
   }
  }


  if ( VAR_13->planar ) {
   if ( VAR_13->planeNum < 0 ) {
    VAR_13->planeNum = FUNC_4( VAR_17, VAR_17[ 3 ], 1, &VAR_13->verts[ 0 ].xyz );
   }
   FUNC_6( VAR_17, VAR_13->lightmapVecs[ 2 ] );
  }
  else
  {
   VAR_13->planeNum = -1;
   FUNC_5( VAR_13->lightmapVecs[ 2 ] );


  }






  if ( VAR_18->compileFlags & VAR_0 || VAR_13->type == VAR_7 ) {
   FUNC_5( VAR_13->lightmapAxis );

   VAR_13->sampleSize = 0;
   continue;
  }


  if ( VAR_18->lightmapAxis[ 0 ] || VAR_18->lightmapAxis[ 1 ] || VAR_18->lightmapAxis[ 2 ] ) {
   FUNC_6( VAR_18->lightmapAxis, VAR_13->lightmapAxis );
  }
  else if ( VAR_13->type == VAR_5 ) {
   FUNC_5( VAR_13->lightmapAxis );
  }
  else if ( VAR_13->planar ) {
   FUNC_1( VAR_17, VAR_13->lightmapAxis );
  }
  else
  {

   for ( VAR_15 = 0; VAR_15 < 6; VAR_15++ )
   {
    for ( VAR_14 = 0; VAR_14 < VAR_13->numVerts && VAR_15 < 6; VAR_14++ )
    {



     if ( FUNC_3( VAR_13->verts[ VAR_14 ].normal, VAR_19[ VAR_15 ] ) < 0.25f ) {
      break;
     }
    }

    if ( VAR_14 == VAR_13->numVerts ) {
     break;
    }
   }


   if ( VAR_15 < 6 ) {


    FUNC_6( VAR_19[ VAR_15 ], VAR_13->lightmapAxis );
   }




  }


  if ( VAR_13->sampleSize <= 0 ) {
   VAR_13->sampleSize = VAR_11;
   if ( VAR_13->shaderInfo->lightmapSampleSize ) {
    VAR_13->sampleSize = VAR_13->shaderInfo->lightmapSampleSize;
   }
   if ( VAR_13->lightmapScale > 0 ) {
    VAR_13->sampleSize *= VAR_13->lightmapScale;
   }
   if ( VAR_13->sampleSize <= 0 ) {
    VAR_13->sampleSize = 1;
   }
   else if ( VAR_13->sampleSize > 16384 ) {
    VAR_13->sampleSize = 16384;
   }
  }
 }
}
