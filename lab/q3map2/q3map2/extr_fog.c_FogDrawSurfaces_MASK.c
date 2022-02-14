
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_13__ {int fogNum; int numVerts; int type; TYPE_2__* verts; TYPE_1__* shaderInfo; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_14__ {TYPE_8__* brush; } ;
typedef TYPE_4__ fog_t ;
typedef int entity_t ;
struct TYPE_15__ {scalar_t__* maxs; scalar_t__* mins; } ;
struct TYPE_12__ {int xyz; } ;
struct TYPE_11__ {scalar_t__ noFog; } ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int *,TYPE_3__*,TYPE_8__*) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_8__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;





 int VAR_0 ;
 int FUNC_4 (int ,char*,...) ;
 TYPE_3__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_5( entity_t *VAR_7 ){
 int VAR_8, VAR_9, VAR_10, VAR_11;
 fog_t *VAR_12;
 mapDrawSurface_t *VAR_13;
 vec3_t VAR_14, VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;



 FUNC_4( VAR_0, "----- FogDrawSurfs -----\n" );


 VAR_17 = 0;
 VAR_3 = 0;


 for ( VAR_11 = 0; VAR_11 < VAR_6; VAR_11++ )
 {

  VAR_12 = &VAR_2[ VAR_11 ];


  VAR_18 = VAR_5;
  for ( VAR_8 = 0; VAR_8 < VAR_18; VAR_8++ )
  {

   VAR_13 = &VAR_1[ VAR_8 ];


   if ( VAR_13->shaderInfo->noFog ) {
    continue;
   }


   if ( VAR_12->brush == ((void*)0) ) {

    if ( VAR_13->fogNum >= 0 ) {
     continue;
    }
    VAR_16 = 1;
   }
   else
   {

    FUNC_3( VAR_14, VAR_15 );
    for ( VAR_9 = 0; VAR_9 < VAR_13->numVerts; VAR_9++ )
     FUNC_0( VAR_13->verts[ VAR_9 ].xyz, VAR_14, VAR_15 );


    for ( VAR_10 = 0; VAR_10 < 3; VAR_10++ )
    {
     if ( VAR_14[ VAR_10 ] > VAR_12->brush->maxs[ VAR_10 ] ) {
      break;
     }
     if ( VAR_15[ VAR_10 ] < VAR_12->brush->mins[ VAR_10 ] ) {
      break;
     }
    }


    if ( VAR_10 < 3 ) {
     continue;
    }


    switch ( VAR_13->type )
    {

    case 132:
     VAR_16 = FUNC_1( VAR_7, VAR_13, VAR_12->brush );
     break;


    case 129:
     VAR_16 = FUNC_2( VAR_7, VAR_13, VAR_12->brush );
     break;


    case 128:
    case 131:
    case 130:
     VAR_16 = 1;
     break;


    default:
     VAR_16 = 0;
     break;
    }
   }


   if ( VAR_16 ) {
    VAR_17 += VAR_16;
    VAR_13->fogNum = VAR_11;
   }
  }
 }


 FUNC_4( VAR_0, "%9d fog polygon fragments\n", VAR_3 );
 FUNC_4( VAR_0, "%9d fog patch fragments\n", VAR_4 );
 FUNC_4( VAR_0, "%9d fogged drawsurfs\n", VAR_17 );
}
