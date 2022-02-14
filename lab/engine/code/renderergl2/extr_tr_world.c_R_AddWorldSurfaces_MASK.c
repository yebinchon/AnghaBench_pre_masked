
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int integer; } ;
struct TYPE_8__ {int rdflags; unsigned long long num_dlights; unsigned long long num_pshadows; int dlightMask; } ;
struct TYPE_6__ {int flags; int * visBounds; } ;
struct TYPE_9__ {int currentEntityNum; int shiftedEntityNum; scalar_t__ viewCount; TYPE_3__ refdef; TYPE_2__* world; TYPE_1__ viewParms; } ;
struct TYPE_7__ {int numWorldSurfaces; scalar_t__* surfacesViewCount; int * surfacesDlightBits; int * surfacesPshadowBits; scalar_t__ surfaces; int nodes; } ;


 int FUNC_0 (int ,int ) ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* VAR_8 ;
 TYPE_4__ VAR_9 ;

void FUNC_4 (void) {
 uint32_t VAR_10, VAR_11, VAR_12;

 if ( !VAR_8->integer ) {
  return;
 }

 if ( VAR_9.refdef.rdflags & VAR_3 ) {
  return;
 }

 VAR_9.currentEntityNum = VAR_4;
 VAR_9.shiftedEntityNum = VAR_9.currentEntityNum << VAR_2;


 if (!(VAR_9.viewParms.flags & VAR_5))
  FUNC_2 ();


 FUNC_0( VAR_9.viewParms.visBounds[0], VAR_9.viewParms.visBounds[1] );


 if ( VAR_9.refdef.num_dlights > VAR_0 ) {
  VAR_9.refdef.num_dlights = VAR_0 ;
 }

 if ( VAR_9.refdef.num_pshadows > VAR_1 ) {
  VAR_9.refdef.num_pshadows = VAR_1;
 }

 VAR_10 = (VAR_9.viewParms.flags & VAR_6) ? 31 : 15;

 if ( VAR_9.viewParms.flags & VAR_5 )
 {
  VAR_11 = 0;
  VAR_12 = 0;
 }
 else if ( !(VAR_9.viewParms.flags & VAR_7) )
 {
  VAR_11 = ( 1ULL << VAR_9.refdef.num_dlights ) - 1;
  VAR_12 = ( 1ULL << VAR_9.refdef.num_pshadows ) - 1;
 }
 else
 {
  VAR_11 = ( 1ULL << VAR_9.refdef.num_dlights ) - 1;
  VAR_12 = 0;
 }

 FUNC_3( VAR_9.world->nodes, VAR_10, VAR_11, VAR_12);



 {
  int VAR_13;

  VAR_9.refdef.dlightMask = 0;

  for (VAR_13 = 0; VAR_13 < VAR_9.world->numWorldSurfaces; VAR_13++)
  {
   if (VAR_9.world->surfacesViewCount[VAR_13] != VAR_9.viewCount)
    continue;

   FUNC_1( VAR_9.world->surfaces + VAR_13, VAR_9.world->surfacesDlightBits[VAR_13], VAR_9.world->surfacesPshadowBits[VAR_13] );
   VAR_9.refdef.dlightMask |= VAR_9.world->surfacesDlightBits[VAR_13];
  }

  VAR_9.refdef.dlightMask = ~VAR_9.refdef.dlightMask;
 }
}
