
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int shaderProgram_t ;
struct TYPE_8__ {scalar_t__* origin; scalar_t__* oldorigin; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_12__ {TYPE_1__* currentEntity; } ;
struct TYPE_11__ {int modelviewProjection; } ;
struct TYPE_10__ {int* indexes; scalar_t__ firstIndex; scalar_t__ numVertexes; scalar_t__ numIndexes; int * xyz; } ;
struct TYPE_9__ {int whiteImage; int textureColorShader; } ;
struct TYPE_7__ {TYPE_2__ e; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,scalar_t__*,double) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (scalar_t__*,int ) ;
 scalar_t__ FUNC_12 (scalar_t__*) ;
 int FUNC_13 (scalar_t__*,int,scalar_t__*) ;
 TYPE_6__ VAR_8 ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_4__ VAR_11 ;
 TYPE_3__ VAR_12 ;

__attribute__((used)) static void FUNC_14( void )
{

 refEntity_t *VAR_13;
 shaderProgram_t *VAR_14 = &VAR_12.textureColorShader;
 int VAR_15;
 vec3_t VAR_16;
 vec3_t VAR_17, VAR_18;
 vec3_t VAR_19[6], VAR_20[6];
 vec3_t VAR_21, VAR_22;

 VAR_13 = &VAR_8.currentEntity->e;

 VAR_21[0] = VAR_13->oldorigin[0];
 VAR_21[1] = VAR_13->oldorigin[1];
 VAR_21[2] = VAR_13->oldorigin[2];

 VAR_22[0] = VAR_13->origin[0];
 VAR_22[1] = VAR_13->origin[1];
 VAR_22[2] = VAR_13->origin[2];

 VAR_18[0] = VAR_17[0] = VAR_21[0] - VAR_22[0];
 VAR_18[1] = VAR_17[1] = VAR_21[1] - VAR_22[1];
 VAR_18[2] = VAR_17[2] = VAR_21[2] - VAR_22[2];

 if ( FUNC_12( VAR_18 ) == 0 )
  return;

 FUNC_6( VAR_16, VAR_18 );

 FUNC_13( VAR_16, 4, VAR_16 );

 for ( VAR_15 = 0; VAR_15 < 6 ; VAR_15++ )
 {
  FUNC_9( VAR_19[VAR_15], VAR_18, VAR_16, (360.0/6)*VAR_15 );

  FUNC_10( VAR_19[VAR_15], VAR_17, VAR_20[VAR_15] );
 }

 FUNC_4( VAR_12.whiteImage, VAR_4 );

 FUNC_5( VAR_2 | VAR_1 );


 VAR_11.numVertexes = 0;
 VAR_11.numIndexes = 0;
 VAR_11.firstIndex = 0;

 for ( VAR_15 = 0; VAR_15 <= 6; VAR_15++ ) {
  FUNC_11(VAR_19[ VAR_15 % 6 ], VAR_11.xyz[VAR_11.numVertexes++]);
  FUNC_11(VAR_20 [ VAR_15 % 6 ], VAR_11.xyz[VAR_11.numVertexes++]);
 }

 for ( VAR_15 = 0; VAR_15 < 6; VAR_15++ ) {
  VAR_11.indexes[VAR_11.numIndexes++] = VAR_15 * 2;
  VAR_11.indexes[VAR_11.numIndexes++] = (VAR_15 + 1) * 2;
  VAR_11.indexes[VAR_11.numIndexes++] = 1 + VAR_15 * 2;

  VAR_11.indexes[VAR_11.numIndexes++] = 1 + VAR_15 * 2;
  VAR_11.indexes[VAR_11.numIndexes++] = (VAR_15 + 1) * 2;
  VAR_11.indexes[VAR_11.numIndexes++] = 1 + (VAR_15 + 1) * 2;
 }


 FUNC_7(VAR_0);

 FUNC_0(VAR_14);

 FUNC_2(VAR_14, VAR_7, VAR_10.modelviewProjection);

 FUNC_3(VAR_14, VAR_6, VAR_9);

 FUNC_1(VAR_14, VAR_5, 0);

 FUNC_8(VAR_11.numIndexes, VAR_11.firstIndex);

 VAR_11.numIndexes = 0;
 VAR_11.numVertexes = 0;
 VAR_11.firstIndex = 0;
}
