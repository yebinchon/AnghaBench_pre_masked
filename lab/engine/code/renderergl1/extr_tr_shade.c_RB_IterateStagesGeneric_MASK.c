
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* bundle; int stateBits; } ;
typedef TYPE_2__ shaderStage_t ;
struct TYPE_11__ {int * texcoords; int colors; } ;
struct TYPE_13__ {int indexes; int numIndexes; TYPE_1__ svars; } ;
typedef TYPE_3__ shaderCommands_t ;
struct TYPE_16__ {scalar_t__* image; scalar_t__ isLightmap; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {TYPE_2__** xstages; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int ,int ) ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static void FUNC_9( shaderCommands_t *VAR_7 )
{
 int VAR_8;

 for ( VAR_8 = 0; VAR_8 < VAR_3; VAR_8++ )
 {
  shaderStage_t *VAR_9 = VAR_6.xstages[VAR_8];

  if ( !VAR_9 )
  {
   break;
  }

  FUNC_0( VAR_9 );
  FUNC_1( VAR_9 );

  if ( !VAR_5 )
  {
   FUNC_7( VAR_0 );
   FUNC_6( 4, VAR_2, 0, VAR_7->svars.colors );
  }




  if ( VAR_9->bundle[1].image[0] != 0 )
  {
   FUNC_2( VAR_7, VAR_8 );
  }
  else
  {
   if ( !VAR_5 )
   {
    FUNC_8( 2, VAR_1, 0, VAR_7->svars.texcoords[0] );
   }




   FUNC_4( &VAR_9->bundle[0] );

   FUNC_3( VAR_9->stateBits );




   FUNC_5( VAR_7->numIndexes, VAR_7->indexes );
  }

  if ( VAR_4->integer && ( VAR_9->bundle[0].isLightmap || VAR_9->bundle[1].isLightmap ) )
  {
   break;
  }
 }
}
