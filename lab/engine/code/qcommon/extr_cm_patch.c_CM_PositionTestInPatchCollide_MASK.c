
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_6__ {float* offset; scalar_t__ radius; scalar_t__ use; } ;
struct TYPE_7__ {float* start; float** offsets; TYPE_1__ sphere; scalar_t__ isPoint; } ;
typedef TYPE_2__ traceWork_t ;
struct patchCollide_s {int numFacets; TYPE_3__* planes; TYPE_4__* facets; } ;
typedef int qboolean ;
struct TYPE_8__ {float* plane; size_t signbits; } ;
typedef TYPE_3__ patchPlane_t ;
struct TYPE_9__ {size_t surfacePlane; int numBorders; size_t* borderPlanes; scalar_t__* borderInward; } ;
typedef TYPE_4__ facet_t ;


 float FUNC_0 (float*,float*) ;
 int FUNC_1 (float*,float*,float*) ;
 int FUNC_2 (float*,float*) ;
 int FUNC_3 (float*,float*) ;
 int FUNC_4 (float*,float*,float*) ;
 scalar_t__ FUNC_5 (float) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_6( traceWork_t *VAR_2, const struct patchCollide_s *VAR_3 ) {
 int VAR_4, VAR_5;
 float VAR_6, VAR_7;
 patchPlane_t *VAR_8;
 facet_t *VAR_9;
 float VAR_10[4];
 vec3_t VAR_11;

 if (VAR_2->isPoint) {
  return VAR_0;
 }

 VAR_9 = VAR_3->facets;
 for ( VAR_4 = 0 ; VAR_4 < VAR_3->numFacets ; VAR_4++, VAR_9++ ) {
  VAR_8 = &VAR_3->planes[ VAR_9->surfacePlane ];
  FUNC_2(VAR_8->plane, VAR_10);
  VAR_10[3] = VAR_8->plane[3];
  if ( VAR_2->sphere.use ) {

   VAR_10[3] += VAR_2->sphere.radius;


   VAR_7 = FUNC_0( VAR_10, VAR_2->sphere.offset );
   if ( VAR_7 > 0 ) {
    FUNC_4( VAR_2->start, VAR_2->sphere.offset, VAR_11 );
   }
   else {
    FUNC_1( VAR_2->start, VAR_2->sphere.offset, VAR_11 );
   }
  }
  else {
   VAR_6 = FUNC_0( VAR_2->offsets[ VAR_8->signbits ], VAR_10);
   VAR_10[3] -= VAR_6;
   FUNC_2( VAR_2->start, VAR_11 );
  }

  if ( FUNC_0( VAR_10, VAR_11 ) - VAR_10[3] > 0.0f ) {
   continue;
  }

  for ( VAR_5 = 0; VAR_5 < VAR_9->numBorders; VAR_5++ ) {
   VAR_8 = &VAR_3->planes[ VAR_9->borderPlanes[VAR_5] ];
   if (VAR_9->borderInward[VAR_5]) {
    FUNC_3(VAR_8->plane, VAR_10);
    VAR_10[3] = -VAR_8->plane[3];
   }
   else {
    FUNC_2(VAR_8->plane, VAR_10);
    VAR_10[3] = VAR_8->plane[3];
   }
   if ( VAR_2->sphere.use ) {

    VAR_10[3] += VAR_2->sphere.radius;


    VAR_7 = FUNC_0( VAR_10, VAR_2->sphere.offset );
    if ( VAR_7 > 0.0f ) {
     FUNC_4( VAR_2->start, VAR_2->sphere.offset, VAR_11 );
    }
    else {
     FUNC_1( VAR_2->start, VAR_2->sphere.offset, VAR_11 );
    }
   }
   else {

    VAR_6 = FUNC_0( VAR_2->offsets[ VAR_8->signbits ], VAR_10);
    VAR_10[3] += FUNC_5(VAR_6);
    FUNC_2( VAR_2->start, VAR_11 );
   }

   if ( FUNC_0( VAR_10, VAR_11 ) - VAR_10[3] > 0.0f ) {
    break;
   }
  }
  if (VAR_5 < VAR_9->numBorders) {
   continue;
  }

  return VAR_1;
 }
 return VAR_0;
}
