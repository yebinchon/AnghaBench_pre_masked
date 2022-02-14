
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
struct TYPE_11__ {scalar_t__ culled; int planenum; int compileFlags; TYPE_1__* shaderInfo; TYPE_2__* winding; } ;
typedef TYPE_3__ side_t ;
struct TYPE_12__ {TYPE_5__* brushes; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_13__ {int numsides; scalar_t__* mins; scalar_t__* maxs; TYPE_3__* sides; int * original; struct TYPE_13__* next; } ;
typedef TYPE_5__ brush_t ;
struct TYPE_9__ {scalar_t__ polygonOffset; scalar_t__ autosprite; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_4( entity_t *VAR_6 ){
 int VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 winding_t *VAR_15, *VAR_16;
 brush_t *VAR_17, *VAR_18;
 side_t *VAR_19, *VAR_20;



 FUNC_2( VAR_2, "--- CullSides ---\n" );

 VAR_4 = 0;
 VAR_3 = 0;


 for ( VAR_17 = VAR_6->brushes; VAR_17; VAR_17 = VAR_17->next )
 {

  if ( VAR_17->numsides < 1 ) {
   continue;
  }


  for ( VAR_18 = VAR_17->next; VAR_18; VAR_18 = VAR_18->next )
  {

   if ( VAR_18->numsides < 1 ) {
    continue;
   }


   if ( VAR_17->original == VAR_18->original && VAR_17->original != ((void*)0) ) {
    continue;
   }


   VAR_9 = 0;
   for ( VAR_8 = 0; VAR_8 < 3; VAR_8++ )
    if ( VAR_17->mins[ VAR_8 ] > VAR_18->maxs[ VAR_8 ] || VAR_17->maxs[ VAR_8 ] < VAR_18->mins[ VAR_8 ] ) {
     VAR_9++;
    }
   if ( VAR_9 ) {
    continue;
   }


   for ( VAR_8 = 0; VAR_8 < VAR_17->numsides; VAR_8++ )
    FUNC_1( &VAR_17->sides[ VAR_8 ], VAR_18 );
   for ( VAR_8 = 0; VAR_8 < VAR_18->numsides; VAR_8++ )
    FUNC_1( &VAR_18->sides[ VAR_8 ], VAR_17 );


   for ( VAR_8 = 0; VAR_8 < VAR_17->numsides; VAR_8++ )
   {

    VAR_19 = &VAR_17->sides[ VAR_8 ];
    VAR_15 = VAR_19->winding;
    if ( VAR_15 == ((void*)0) ) {
     continue;
    }
    VAR_7 = VAR_15->numpoints;
    if ( VAR_19->shaderInfo == ((void*)0) ) {
     continue;
    }


    for ( VAR_9 = 0; VAR_9 < VAR_18->numsides; VAR_9++ )
    {

     VAR_20 = &VAR_18->sides[ VAR_9 ];
     VAR_16 = VAR_20->winding;
     if ( VAR_16 == ((void*)0) ) {
      continue;
     }
     if ( VAR_20->shaderInfo == ((void*)0) ) {
      continue;
     }
     if ( VAR_15->numpoints != VAR_16->numpoints ) {
      continue;
     }
     if ( VAR_19->culled == VAR_5 && VAR_20->culled == VAR_5 ) {
      continue;
     }


     if ( ( VAR_19->planenum & ~0x00000001 ) != ( VAR_20->planenum & ~0x00000001 ) ) {
      continue;
     }


     if ( VAR_19->shaderInfo &&
       ( VAR_19->shaderInfo->autosprite || VAR_19->shaderInfo->polygonOffset ) ) {
      continue;
     }
     if ( VAR_20->shaderInfo &&
       ( VAR_20->shaderInfo->autosprite || VAR_20->shaderInfo->polygonOffset ) ) {
      continue;
     }


     VAR_12 = -1;
     for ( VAR_10 = 0; VAR_10 < VAR_7; VAR_10++ )
     {
      if ( FUNC_3( VAR_15->p[ 0 ], VAR_16->p[ VAR_10 ] ) ) {
       VAR_12 = VAR_10;
       VAR_10 = VAR_7;
      }
     }
     if ( VAR_12 == -1 ) {
      continue;
     }


     VAR_13 = -1;
     VAR_14 = 0;
     if ( ( VAR_12 + 1 ) < VAR_7 ) {
      VAR_13 = VAR_12 + 1;
     }
     else{
      VAR_13 = 0;
     }
     if ( FUNC_0( VAR_15->p[ 1 ], VAR_16->p[ VAR_13 ] ) ) {
      VAR_14 = 1;
     }
     else
     {
      if ( VAR_12 > 0 ) {
       VAR_13 = VAR_12 - 1;
      }
      else{
       VAR_13 = VAR_7 - 1;
      }
      if ( FUNC_0( VAR_15->p[ 1 ], VAR_16->p[ VAR_13 ] ) ) {
       VAR_14 = -1;
      }
     }
     if ( VAR_14 == 0 ) {
      continue;
     }


     VAR_11 = VAR_12;
     for ( VAR_10 = 0; VAR_10 < VAR_7; VAR_10++ )
     {
      if ( !FUNC_0( VAR_15->p[ VAR_10 ], VAR_16->p[ VAR_11 ] ) ) {
       VAR_10 = 100000;
      }

      VAR_11 += VAR_14;
      if ( VAR_11 < 0 ) {
       VAR_11 = VAR_7 - 1;
      }
      else if ( VAR_11 >= VAR_7 ) {
       VAR_11 = 0;
      }
     }
     if ( VAR_10 >= 100000 ) {
      continue;
     }


     if ( !VAR_20->culled && !( VAR_20->compileFlags & VAR_1 ) && !( VAR_20->compileFlags & VAR_0 ) ) {
      VAR_19->culled = VAR_5;
      VAR_3++;
     }

     if ( VAR_19->planenum == VAR_20->planenum && VAR_19->culled == VAR_5 ) {
      continue;
     }


     if ( !VAR_19->culled && !( VAR_19->compileFlags & VAR_1 ) && !( VAR_19->compileFlags & VAR_0 ) ) {
      VAR_20->culled = VAR_5;
      VAR_3++;
     }
    }
   }
  }
 }


 FUNC_2( VAR_2, "%9d hidden faces culled\n", VAR_4 );
 FUNC_2( VAR_2, "%9d coincident faces culled\n", VAR_3 );
}
