
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int axis; scalar_t__ dist; TYPE_4__* entities; struct TYPE_14__** children; } ;
typedef TYPE_3__ worldSector_t ;
struct TYPE_15__ {scalar_t__ numClusters; int areanum; int areanum2; int* clusternums; struct TYPE_15__* nextEntityInWorldSector; TYPE_3__* worldSector; void* lastCluster; } ;
typedef TYPE_4__ svEntity_t ;
struct TYPE_13__ {int contents; int* maxs; int* mins; float* currentOrigin; float* currentAngles; float* absmin; float* absmax; int linked; int linkcount; scalar_t__ bmodel; } ;
struct TYPE_12__ {int solid; int number; } ;
struct TYPE_16__ {TYPE_2__ r; TYPE_1__ s; } ;
typedef TYPE_5__ sharedEntity_t ;
struct TYPE_17__ {scalar_t__ state; } ;


 int FUNC_0 (float*,float*,int*,int,int*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 float FUNC_4 (int*,int*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (float*,int*,float*) ;
 int VAR_6 ;
 TYPE_7__ VAR_7 ;
 TYPE_3__* VAR_8 ;

void FUNC_8( sharedEntity_t *VAR_9 ) {
 worldSector_t *VAR_10;
 int VAR_11[VAR_3];
 int VAR_12;
 int VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17;
 int VAR_18;
 float *VAR_19, *VAR_20;
 svEntity_t *VAR_21;

 VAR_21 = FUNC_5( VAR_9 );

 if ( VAR_21->worldSector ) {
  FUNC_6( VAR_9 );
 }


 if ( VAR_9->r.bmodel ) {
  VAR_9->s.solid = VAR_4;
 } else if ( VAR_9->r.contents & ( VAR_1 | VAR_0 ) ) {

  VAR_14 = VAR_9->r.maxs[0];
  if (VAR_14<1)
   VAR_14 = 1;
  if (VAR_14>255)
   VAR_14 = 255;


  VAR_15 = (-VAR_9->r.mins[2]);
  if (VAR_15<1)
   VAR_15 = 1;
  if (VAR_15>255)
   VAR_15 = 255;


  VAR_16 = (VAR_9->r.maxs[2]+32);
  if (VAR_16<1)
   VAR_16 = 1;
  if (VAR_16>255)
   VAR_16 = 255;

  VAR_9->s.solid = (VAR_16<<16) | (VAR_15<<8) | VAR_14;
 } else {
  VAR_9->s.solid = 0;
 }


 VAR_19 = VAR_9->r.currentOrigin;
 VAR_20 = VAR_9->r.currentAngles;


 if ( VAR_9->r.bmodel && (VAR_20[0] || VAR_20[1] || VAR_20[2]) ) {

  float VAR_22;

  VAR_22 = FUNC_4( VAR_9->r.mins, VAR_9->r.maxs );
  for (VAR_14=0 ; VAR_14<3 ; VAR_14++) {
   VAR_9->r.absmin[VAR_14] = VAR_19[VAR_14] - VAR_22;
   VAR_9->r.absmax[VAR_14] = VAR_19[VAR_14] + VAR_22;
  }
 } else {

  FUNC_7 (VAR_19, VAR_9->r.mins, VAR_9->r.absmin);
  FUNC_7 (VAR_19, VAR_9->r.maxs, VAR_9->r.absmax);
 }



 VAR_9->r.absmin[0] -= 1;
 VAR_9->r.absmin[1] -= 1;
 VAR_9->r.absmin[2] -= 1;
 VAR_9->r.absmax[0] += 1;
 VAR_9->r.absmax[1] += 1;
 VAR_9->r.absmax[2] += 1;


 VAR_21->numClusters = 0;
 VAR_21->lastCluster = 0;
 VAR_21->areanum = -1;
 VAR_21->areanum2 = -1;


 VAR_13 = FUNC_0( VAR_9->r.absmin, VAR_9->r.absmax,
  VAR_11, VAR_3, &VAR_18 );



 if ( !VAR_13 ) {
  return;
 }


 for (VAR_14=0 ; VAR_14<VAR_13 ; VAR_14++) {
  VAR_17 = FUNC_1 (VAR_11[VAR_14]);
  if (VAR_17 != -1) {


   if (VAR_21->areanum != -1 && VAR_21->areanum != VAR_17) {
    if (VAR_21->areanum2 != -1 && VAR_21->areanum2 != VAR_17 && VAR_7.state == VAR_5) {
     FUNC_3 ("Object %i touching 3 areas at %f %f %f\n",
     VAR_9->s.number,
     VAR_9->r.absmin[0], VAR_9->r.absmin[1], VAR_9->r.absmin[2]);
    }
    VAR_21->areanum2 = VAR_17;
   } else {
    VAR_21->areanum = VAR_17;
   }
  }
 }


 VAR_21->numClusters = 0;
 for (VAR_14=0 ; VAR_14 < VAR_13 ; VAR_14++) {
  VAR_12 = FUNC_2( VAR_11[VAR_14] );
  if ( VAR_12 != -1 ) {
   VAR_21->clusternums[VAR_21->numClusters++] = VAR_12;
   if ( VAR_21->numClusters == VAR_2 ) {
    break;
   }
  }
 }


 if ( VAR_14 != VAR_13 ) {
  VAR_21->lastCluster = FUNC_2( VAR_18 );
 }

 VAR_9->r.linkcount++;


 VAR_10 = VAR_8;
 while (1)
 {
  if (VAR_10->axis == -1)
   break;
  if ( VAR_9->r.absmin[VAR_10->axis] > VAR_10->dist)
   VAR_10 = VAR_10->children[0];
  else if ( VAR_9->r.absmax[VAR_10->axis] < VAR_10->dist)
   VAR_10 = VAR_10->children[1];
  else
   break;
 }


 VAR_21->worldSector = VAR_10;
 VAR_21->nextEntityInWorldSector = VAR_10->entities;
 VAR_10->entities = VAR_21;

 VAR_9->r.linked = VAR_6;
}
