
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {float* lightGridInverseSize; float* lightGridSize; int* lightGridOrigin; int* lightGridBounds; int * lightGridData; TYPE_1__* bmodels; } ;
typedef TYPE_2__ world_t ;
typedef int* vec3_t ;
struct TYPE_9__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_3__ lump_t ;
struct TYPE_10__ {int * (* Hunk_Alloc ) (int,int ) ;int (* Printf ) (int ,char*) ;} ;
struct TYPE_7__ {float** bounds; } ;


 int FUNC_0 (int *,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (float) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (float) ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (int,int ) ;

void FUNC_6( lump_t *VAR_5 ) {
 int VAR_6;
 vec3_t VAR_7;
 int VAR_8;
 world_t *VAR_9;
 float *VAR_10, *VAR_11;

 VAR_9 = &VAR_4;

 VAR_9->lightGridInverseSize[0] = 1.0f / VAR_9->lightGridSize[0];
 VAR_9->lightGridInverseSize[1] = 1.0f / VAR_9->lightGridSize[1];
 VAR_9->lightGridInverseSize[2] = 1.0f / VAR_9->lightGridSize[2];

 VAR_10 = VAR_9->bmodels[0].bounds[0];
 VAR_11 = VAR_9->bmodels[0].bounds[1];

 for ( VAR_6 = 0 ; VAR_6 < 3 ; VAR_6++ ) {
  VAR_9->lightGridOrigin[VAR_6] = VAR_9->lightGridSize[VAR_6] * FUNC_2( VAR_10[VAR_6] / VAR_9->lightGridSize[VAR_6] );
  VAR_7[VAR_6] = VAR_9->lightGridSize[VAR_6] * FUNC_3( VAR_11[VAR_6] / VAR_9->lightGridSize[VAR_6] );
  VAR_9->lightGridBounds[VAR_6] = (VAR_7[VAR_6] - VAR_9->lightGridOrigin[VAR_6])/VAR_9->lightGridSize[VAR_6] + 1;
 }

 VAR_8 = VAR_9->lightGridBounds[0] * VAR_9->lightGridBounds[1] * VAR_9->lightGridBounds[2];

 if ( VAR_5->filelen != VAR_8 * 8 ) {
  VAR_3.Printf( VAR_0, "WARNING: light grid mismatch\n" );
  VAR_9->lightGridData = ((void*)0);
  return;
 }

 VAR_9->lightGridData = VAR_3.Hunk_Alloc( VAR_5->filelen, VAR_2 );
 FUNC_0( VAR_9->lightGridData, (void *)(VAR_1 + VAR_5->fileofs), VAR_5->filelen );


 for ( VAR_6 = 0 ; VAR_6 < VAR_8 ; VAR_6++ ) {
  FUNC_1( &VAR_9->lightGridData[VAR_6*8], &VAR_9->lightGridData[VAR_6*8] );
  FUNC_1( &VAR_9->lightGridData[VAR_6*8+3], &VAR_9->lightGridData[VAR_6*8+3] );
 }
}
