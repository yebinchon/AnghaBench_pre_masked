
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int numTexMods; TYPE_9__* texMods; } ;
typedef TYPE_4__ textureBundle_t ;
struct TYPE_15__ {TYPE_4__* bundle; } ;
typedef TYPE_5__ shaderStage_t ;
struct TYPE_19__ {int type; int rotateSpeed; int wave; int scale; int scroll; } ;
struct TYPE_18__ {TYPE_2__* currentEntity; } ;
struct TYPE_17__ {int (* Error ) (int ,char*,int,int ) ;} ;
struct TYPE_16__ {TYPE_3__* shader; } ;
struct TYPE_13__ {int name; } ;
struct TYPE_11__ {int shaderTexCoord; } ;
struct TYPE_12__ {TYPE_1__ e; } ;


 int VAR_0 ;
 int FUNC_0 (int ,float*) ;
 int FUNC_1 (int ,float*) ;
 int FUNC_2 (int ,float*) ;
 int FUNC_3 (int *,float*) ;
 int FUNC_4 (TYPE_9__*,float*) ;
 int FUNC_5 (int *,float*,float*) ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_6 (int ,char*,int,int ) ;
 TYPE_6__ VAR_4 ;

__attribute__((used)) static void FUNC_7( shaderStage_t *VAR_5, int VAR_6, float *VAR_7, float *VAR_8)
{
 int VAR_9;
 float VAR_10[6], VAR_11[6];
 textureBundle_t *VAR_12 = &VAR_5->bundle[VAR_6];

 VAR_10[0] = 1.0f; VAR_10[2] = 0.0f; VAR_10[4] = 0.0f;
 VAR_10[1] = 0.0f; VAR_10[3] = 1.0f; VAR_10[5] = 0.0f;

 VAR_11[0] = 1.0f; VAR_11[2] = 0.0f; VAR_11[4] = 0.0f;
 VAR_11[1] = 0.0f; VAR_11[3] = 1.0f; VAR_11[5] = 0.0f;

 VAR_7[0] = 1.0f; VAR_7[2] = 0.0f;
 VAR_7[1] = 0.0f; VAR_7[3] = 1.0f;

 VAR_8[0] = 0.0f; VAR_8[1] = 0.0f; VAR_8[2] = 0.0f; VAR_8[3] = 0.0f;

 for ( VAR_9 = 0; VAR_9 < VAR_12->numTexMods ; VAR_9++ ) {
  switch ( VAR_12->texMods[VAR_9].type )
  {

  case 134:
   VAR_9 = VAR_1;
   break;

  case 128:
   FUNC_5(&VAR_12->texMods[VAR_9].wave, &VAR_8[2], &VAR_8[3]);
   break;

  case 135:
   FUNC_2( VAR_2.currentEntity->e.shaderTexCoord, VAR_10 );
   break;

  case 131:
   FUNC_2( VAR_12->texMods[VAR_9].scroll,
          VAR_10 );
   break;

  case 132:
   FUNC_1( VAR_12->texMods[VAR_9].scale,
          VAR_10 );
   break;

  case 130:
   FUNC_3( &VAR_12->texMods[VAR_9].wave,
           VAR_10 );
   break;

  case 129:
   FUNC_4( &VAR_12->texMods[VAR_9],
          VAR_10 );
   break;

  case 133:
   FUNC_0( VAR_12->texMods[VAR_9].rotateSpeed,
         VAR_10 );
   break;

  default:
   VAR_3.Error( VAR_0, "ERROR: unknown texmod '%d' in shader '%s'", VAR_12->texMods[VAR_9].type, VAR_4.shader->name );
   break;
  }

  switch ( VAR_12->texMods[VAR_9].type )
  {
  case 134:
  case 128:
  default:
   break;

  case 135:
  case 131:
  case 132:
  case 130:
  case 129:
  case 133:
   VAR_7[0] = VAR_10[0] * VAR_11[0] + VAR_10[2] * VAR_11[1];
   VAR_7[1] = VAR_10[1] * VAR_11[0] + VAR_10[3] * VAR_11[1];

   VAR_7[2] = VAR_10[0] * VAR_11[2] + VAR_10[2] * VAR_11[3];
   VAR_7[3] = VAR_10[1] * VAR_11[2] + VAR_10[3] * VAR_11[3];

   VAR_8[0] = VAR_10[0] * VAR_11[4] + VAR_10[2] * VAR_11[5] + VAR_10[4];
   VAR_8[1] = VAR_10[1] * VAR_11[4] + VAR_10[3] * VAR_11[5] + VAR_10[5];

   VAR_11[0] = VAR_7[0];
   VAR_11[1] = VAR_7[1];
   VAR_11[2] = VAR_7[2];
   VAR_11[3] = VAR_7[3];
   VAR_11[4] = VAR_8[0];
   VAR_11[5] = VAR_8[1];
   break;
  }
 }
}
