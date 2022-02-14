
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int numVerts; int fogIndex; TYPE_8__* verts; scalar_t__ hShader; int surfaceType; } ;
typedef TYPE_2__ srfPoly_t ;
typedef scalar_t__ qhandle_t ;
typedef int polyVert_t ;
struct TYPE_11__ {scalar_t__** bounds; } ;
typedef TYPE_3__ fog_t ;
struct TYPE_16__ {int* modulate; int xyz; } ;
struct TYPE_15__ {TYPE_8__* polyVerts; TYPE_2__* polys; } ;
struct TYPE_14__ {scalar_t__ hardwareType; } ;
struct TYPE_13__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_12__ {TYPE_1__* world; int registered; } ;
struct TYPE_9__ {int numfogs; TYPE_3__* fogs; } ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_8__*,int const*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__*) ;
 TYPE_7__* VAR_3 ;
 TYPE_6__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 TYPE_5__ VAR_9 ;
 int FUNC_3 (int ,char*) ;
 TYPE_4__ VAR_10 ;

void FUNC_4( qhandle_t VAR_11, int VAR_12, const polyVert_t *VAR_13, int VAR_14 ) {
 srfPoly_t *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;
 fog_t *VAR_19;
 vec3_t VAR_20[2];

 if ( !VAR_10.registered ) {
  return;
 }

 if ( !VAR_11 ) {




 }

 for ( VAR_17 = 0; VAR_17 < VAR_14; VAR_17++ ) {
  if ( VAR_8 + VAR_12 > VAR_6 || VAR_7 >= VAR_5 ) {






   VAR_9.Printf( VAR_1, "WARNING: RE_AddPolyToScene: r_max_polys or r_max_polyverts reached\n");
   return;
  }

  VAR_15 = &VAR_3->polys[VAR_7];
  VAR_15->surfaceType = VAR_2;
  VAR_15->hShader = VAR_11;
  VAR_15->numVerts = VAR_12;
  VAR_15->verts = &VAR_3->polyVerts[VAR_8];

  FUNC_1( VAR_15->verts, &VAR_13[VAR_12*VAR_17], VAR_12 * sizeof( *VAR_13 ) );

  if ( VAR_4.hardwareType == VAR_0 ) {
   VAR_15->verts->modulate[0] = 255;
   VAR_15->verts->modulate[1] = 255;
   VAR_15->verts->modulate[2] = 255;
   VAR_15->verts->modulate[3] = 255;
  }

  VAR_7++;
  VAR_8 += VAR_12;


  if ( VAR_10.world == ((void*)0) ) {
   VAR_18 = 0;
  }

  else if ( VAR_10.world->numfogs == 1 ) {
   VAR_18 = 0;
  } else {

   FUNC_2( VAR_15->verts[0].xyz, VAR_20[0] );
   FUNC_2( VAR_15->verts[0].xyz, VAR_20[1] );
   for ( VAR_16 = 1 ; VAR_16 < VAR_15->numVerts ; VAR_16++ ) {
    FUNC_0( VAR_15->verts[VAR_16].xyz, VAR_20[0], VAR_20[1] );
   }
   for ( VAR_18 = 1 ; VAR_18 < VAR_10.world->numfogs ; VAR_18++ ) {
    VAR_19 = &VAR_10.world->fogs[VAR_18];
    if ( VAR_20[1][0] >= VAR_19->bounds[0][0]
     && VAR_20[1][1] >= VAR_19->bounds[0][1]
     && VAR_20[1][2] >= VAR_19->bounds[0][2]
     && VAR_20[0][0] <= VAR_19->bounds[1][0]
     && VAR_20[0][1] <= VAR_19->bounds[1][1]
     && VAR_20[0][2] <= VAR_19->bounds[1][2] ) {
     break;
    }
   }
   if ( VAR_18 == VAR_10.world->numfogs ) {
    VAR_18 = 0;
   }
  }
  VAR_15->fogIndex = VAR_18;
 }
}
