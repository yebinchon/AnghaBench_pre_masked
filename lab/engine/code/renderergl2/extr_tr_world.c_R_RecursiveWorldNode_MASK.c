
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_18__ {float lightRadius; int lightOrigin; } ;
typedef TYPE_6__ pshadow_t ;
struct TYPE_19__ {scalar_t__* visCounts; scalar_t__* mins; scalar_t__* maxs; int contents; int firstmarksurface; int nummarksurfaces; struct TYPE_19__** children; TYPE_1__* plane; } ;
typedef TYPE_7__ mnode_t ;
struct TYPE_20__ {float radius; int origin; } ;
typedef TYPE_8__ dlight_t ;
struct TYPE_16__ {int flags; scalar_t__** visBounds; int * frustum; } ;
struct TYPE_14__ {int c_leafs; } ;
struct TYPE_17__ {int num_dlights; int num_pshadows; TYPE_6__* pshadows; TYPE_8__* dlights; } ;
struct TYPE_21__ {size_t visIndex; scalar_t__* visCounts; scalar_t__ viewCount; TYPE_3__* world; TYPE_4__ viewParms; TYPE_2__ pc; TYPE_5__ refdef; } ;
struct TYPE_15__ {int* marksurfaces; scalar_t__* surfacesViewCount; int* surfacesDlightBits; int* surfacesPshadowBits; } ;
struct TYPE_13__ {float dist; int normal; } ;
struct TYPE_12__ {int integer; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int *) ;
 float FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_10__* VAR_1 ;
 TYPE_9__ VAR_2 ;

__attribute__((used)) static void FUNC_2( mnode_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6 ) {

 do {
  uint32_t VAR_7[2];
  uint32_t VAR_8[2];



  if (!(VAR_2.viewParms.flags & VAR_0) && VAR_3->visCounts[VAR_2.visIndex] != VAR_2.visCounts[VAR_2.visIndex]) {
   return;
  }




  if ( !VAR_1->integer ) {
   int VAR_9;

   if ( VAR_4 & 1 ) {
    VAR_9 = FUNC_0(VAR_3->mins, VAR_3->maxs, &VAR_2.viewParms.frustum[0]);
    if (VAR_9 == 2) {
     return;
    }
    if ( VAR_9 == 1 ) {
     VAR_4 &= ~1;
    }
   }

   if ( VAR_4 & 2 ) {
    VAR_9 = FUNC_0(VAR_3->mins, VAR_3->maxs, &VAR_2.viewParms.frustum[1]);
    if (VAR_9 == 2) {
     return;
    }
    if ( VAR_9 == 1 ) {
     VAR_4 &= ~2;
    }
   }

   if ( VAR_4 & 4 ) {
    VAR_9 = FUNC_0(VAR_3->mins, VAR_3->maxs, &VAR_2.viewParms.frustum[2]);
    if (VAR_9 == 2) {
     return;
    }
    if ( VAR_9 == 1 ) {
     VAR_4 &= ~4;
    }
   }

   if ( VAR_4 & 8 ) {
    VAR_9 = FUNC_0(VAR_3->mins, VAR_3->maxs, &VAR_2.viewParms.frustum[3]);
    if (VAR_9 == 2) {
     return;
    }
    if ( VAR_9 == 1 ) {
     VAR_4 &= ~8;
    }
   }

   if ( VAR_4 & 16 ) {
    VAR_9 = FUNC_0(VAR_3->mins, VAR_3->maxs, &VAR_2.viewParms.frustum[4]);
    if (VAR_9 == 2) {
     return;
    }
    if ( VAR_9 == 1 ) {
     VAR_4 &= ~16;
    }
   }
  }

  if ( VAR_3->contents != -1 ) {
   break;
  }





  VAR_7[0] = 0;
  VAR_7[1] = 0;
  if ( VAR_5 ) {
   int VAR_10;

   for ( VAR_10 = 0 ; VAR_10 < VAR_2.refdef.num_dlights ; VAR_10++ ) {
    dlight_t *VAR_11;
    float VAR_12;

    if ( VAR_5 & ( 1 << VAR_10 ) ) {
     VAR_11 = &VAR_2.refdef.dlights[VAR_10];
     VAR_12 = FUNC_1( VAR_11->origin, VAR_3->plane->normal ) - VAR_3->plane->dist;

     if ( VAR_12 > -VAR_11->radius ) {
      VAR_7[0] |= ( 1 << VAR_10 );
     }
     if ( VAR_12 < VAR_11->radius ) {
      VAR_7[1] |= ( 1 << VAR_10 );
     }
    }
   }
  }

  VAR_8[0] = 0;
  VAR_8[1] = 0;
  if ( VAR_6 ) {
   int VAR_13;

   for ( VAR_13 = 0 ; VAR_13 < VAR_2.refdef.num_pshadows ; VAR_13++ ) {
    pshadow_t *VAR_14;
    float VAR_15;

    if ( VAR_6 & ( 1 << VAR_13 ) ) {
     VAR_14 = &VAR_2.refdef.pshadows[VAR_13];
     VAR_15 = FUNC_1( VAR_14->lightOrigin, VAR_3->plane->normal ) - VAR_3->plane->dist;

     if ( VAR_15 > -VAR_14->lightRadius ) {
      VAR_8[0] |= ( 1 << VAR_13 );
     }
     if ( VAR_15 < VAR_14->lightRadius ) {
      VAR_8[1] |= ( 1 << VAR_13 );
     }
    }
   }
  }


  FUNC_2 (VAR_3->children[0], VAR_4, VAR_7[0], VAR_8[0] );


  VAR_3 = VAR_3->children[1];
  VAR_5 = VAR_7[1];
  VAR_6 = VAR_8[1];
 } while ( 1 );

 {

  int VAR_16;
  int VAR_17, *VAR_18;

  VAR_2.pc.c_leafs++;


  if ( VAR_3->mins[0] < VAR_2.viewParms.visBounds[0][0] ) {
   VAR_2.viewParms.visBounds[0][0] = VAR_3->mins[0];
  }
  if ( VAR_3->mins[1] < VAR_2.viewParms.visBounds[0][1] ) {
   VAR_2.viewParms.visBounds[0][1] = VAR_3->mins[1];
  }
  if ( VAR_3->mins[2] < VAR_2.viewParms.visBounds[0][2] ) {
   VAR_2.viewParms.visBounds[0][2] = VAR_3->mins[2];
  }

  if ( VAR_3->maxs[0] > VAR_2.viewParms.visBounds[1][0] ) {
   VAR_2.viewParms.visBounds[1][0] = VAR_3->maxs[0];
  }
  if ( VAR_3->maxs[1] > VAR_2.viewParms.visBounds[1][1] ) {
   VAR_2.viewParms.visBounds[1][1] = VAR_3->maxs[1];
  }
  if ( VAR_3->maxs[2] > VAR_2.viewParms.visBounds[1][2] ) {
   VAR_2.viewParms.visBounds[1][2] = VAR_3->maxs[2];
  }


  VAR_18 = VAR_2.world->marksurfaces + VAR_3->firstmarksurface;

  VAR_16 = VAR_3->nummarksurfaces;
  while (VAR_16--) {

   VAR_17 = *VAR_18;
   if (VAR_2.world->surfacesViewCount[VAR_17] != VAR_2.viewCount)
   {
    VAR_2.world->surfacesViewCount[VAR_17] = VAR_2.viewCount;
    VAR_2.world->surfacesDlightBits[VAR_17] = VAR_5;
    VAR_2.world->surfacesPshadowBits[VAR_17] = VAR_6;
   }
   else
   {
    VAR_2.world->surfacesDlightBits[VAR_17] |= VAR_5;
    VAR_2.world->surfacesPshadowBits[VAR_17] |= VAR_6;
   }
   VAR_18++;
  }
 }

}
