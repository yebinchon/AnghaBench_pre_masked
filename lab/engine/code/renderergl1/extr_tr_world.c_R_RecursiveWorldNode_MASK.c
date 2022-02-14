
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int msurface_t ;
struct TYPE_14__ {scalar_t__ visframe; scalar_t__* mins; scalar_t__* maxs; int contents; int nummarksurfaces; int ** firstmarksurface; struct TYPE_14__** children; TYPE_2__* plane; } ;
typedef TYPE_5__ mnode_t ;
struct TYPE_15__ {float radius; int origin; } ;
typedef TYPE_6__ dlight_t ;
struct TYPE_17__ {int integer; } ;
struct TYPE_13__ {scalar_t__** visBounds; int * frustum; } ;
struct TYPE_12__ {int c_leafs; } ;
struct TYPE_10__ {int num_dlights; TYPE_6__* dlights; } ;
struct TYPE_16__ {scalar_t__ visCount; TYPE_4__ viewParms; TYPE_3__ pc; TYPE_1__ refdef; } ;
struct TYPE_11__ {float dist; int normal; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int *) ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned int) ;
 TYPE_8__* VAR_0 ;
 TYPE_7__ VAR_1 ;

__attribute__((used)) static void FUNC_3( mnode_t *VAR_2, unsigned int VAR_3, unsigned int VAR_4 ) {

 do {
  unsigned int VAR_5[2];


  if (VAR_2->visframe != VAR_1.visCount) {
   return;
  }




  if ( !VAR_0->integer ) {
   int VAR_6;

   if ( VAR_3 & 1 ) {
    VAR_6 = FUNC_0(VAR_2->mins, VAR_2->maxs, &VAR_1.viewParms.frustum[0]);
    if (VAR_6 == 2) {
     return;
    }
    if ( VAR_6 == 1 ) {
     VAR_3 &= ~1;
    }
   }

   if ( VAR_3 & 2 ) {
    VAR_6 = FUNC_0(VAR_2->mins, VAR_2->maxs, &VAR_1.viewParms.frustum[1]);
    if (VAR_6 == 2) {
     return;
    }
    if ( VAR_6 == 1 ) {
     VAR_3 &= ~2;
    }
   }

   if ( VAR_3 & 4 ) {
    VAR_6 = FUNC_0(VAR_2->mins, VAR_2->maxs, &VAR_1.viewParms.frustum[2]);
    if (VAR_6 == 2) {
     return;
    }
    if ( VAR_6 == 1 ) {
     VAR_3 &= ~4;
    }
   }

   if ( VAR_3 & 8 ) {
    VAR_6 = FUNC_0(VAR_2->mins, VAR_2->maxs, &VAR_1.viewParms.frustum[3]);
    if (VAR_6 == 2) {
     return;
    }
    if ( VAR_6 == 1 ) {
     VAR_3 &= ~8;
    }
   }

  }

  if ( VAR_2->contents != -1 ) {
   break;
  }





  VAR_5[0] = 0;
  VAR_5[1] = 0;
  if ( VAR_4 ) {
   int VAR_7;

   for ( VAR_7 = 0 ; VAR_7 < VAR_1.refdef.num_dlights ; VAR_7++ ) {
    dlight_t *VAR_8;
    float VAR_9;

    if ( VAR_4 & ( 1 << VAR_7 ) ) {
     VAR_8 = &VAR_1.refdef.dlights[VAR_7];
     VAR_9 = FUNC_1( VAR_8->origin, VAR_2->plane->normal ) - VAR_2->plane->dist;

     if ( VAR_9 > -VAR_8->radius ) {
      VAR_5[0] |= ( 1 << VAR_7 );
     }
     if ( VAR_9 < VAR_8->radius ) {
      VAR_5[1] |= ( 1 << VAR_7 );
     }
    }
   }
  }


  FUNC_3 (VAR_2->children[0], VAR_3, VAR_5[0] );


  VAR_2 = VAR_2->children[1];
  VAR_4 = VAR_5[1];
 } while ( 1 );

 {

  int VAR_10;
  msurface_t *VAR_11, **VAR_12;

  VAR_1.pc.c_leafs++;


  if ( VAR_2->mins[0] < VAR_1.viewParms.visBounds[0][0] ) {
   VAR_1.viewParms.visBounds[0][0] = VAR_2->mins[0];
  }
  if ( VAR_2->mins[1] < VAR_1.viewParms.visBounds[0][1] ) {
   VAR_1.viewParms.visBounds[0][1] = VAR_2->mins[1];
  }
  if ( VAR_2->mins[2] < VAR_1.viewParms.visBounds[0][2] ) {
   VAR_1.viewParms.visBounds[0][2] = VAR_2->mins[2];
  }

  if ( VAR_2->maxs[0] > VAR_1.viewParms.visBounds[1][0] ) {
   VAR_1.viewParms.visBounds[1][0] = VAR_2->maxs[0];
  }
  if ( VAR_2->maxs[1] > VAR_1.viewParms.visBounds[1][1] ) {
   VAR_1.viewParms.visBounds[1][1] = VAR_2->maxs[1];
  }
  if ( VAR_2->maxs[2] > VAR_1.viewParms.visBounds[1][2] ) {
   VAR_1.viewParms.visBounds[1][2] = VAR_2->maxs[2];
  }


  VAR_12 = VAR_2->firstmarksurface;
  VAR_10 = VAR_2->nummarksurfaces;
  while (VAR_10--) {


   VAR_11 = *VAR_12;
   FUNC_2( VAR_11, VAR_4 );
   VAR_12++;
  }
 }

}
