
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_12__ {float dist; size_t signbits; int normal; } ;
struct TYPE_10__ {float fraction; int contents; int surfaceFlags; TYPE_4__ plane; void* allsolid; void* startsolid; } ;
struct TYPE_9__ {float radius; int offset; scalar_t__ use; } ;
struct TYPE_11__ {TYPE_2__ trace; int end; int start; int * offsets; TYPE_1__ sphere; } ;
typedef TYPE_3__ traceWork_t ;
typedef void* qboolean ;
typedef TYPE_4__ cplane_t ;
struct TYPE_13__ {int surfaceFlags; TYPE_4__* plane; } ;
typedef TYPE_5__ cbrushside_t ;
struct TYPE_14__ {int numsides; int contents; TYPE_5__* sides; } ;
typedef TYPE_6__ cbrush_t ;


 float FUNC_0 (int ,int ) ;
 float VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

void FUNC_3( traceWork_t *VAR_4, cbrush_t *VAR_5 ) {
 int VAR_6;
 cplane_t *VAR_7, *VAR_8;
 float VAR_9;
 float VAR_10, VAR_11;
 float VAR_12, VAR_13;
 qboolean VAR_14, VAR_15;
 float VAR_16;
 cbrushside_t *VAR_17, *VAR_18;
 float VAR_19;
 vec3_t VAR_20;
 vec3_t VAR_21;

 VAR_10 = -1.0;
 VAR_11 = 1.0;
 VAR_8 = ((void*)0);

 if ( !VAR_5->numsides ) {
  return;
 }

 VAR_1++;

 VAR_14 = VAR_2;
 VAR_15 = VAR_2;

 VAR_18 = ((void*)0);

 if ( VAR_4->sphere.use ) {





  for (VAR_6 = 0; VAR_6 < VAR_5->numsides; VAR_6++) {
   VAR_17 = VAR_5->sides + VAR_6;
   VAR_7 = VAR_17->plane;


   VAR_9 = VAR_7->dist + VAR_4->sphere.radius;


   VAR_19 = FUNC_0( VAR_7->normal, VAR_4->sphere.offset );
   if ( VAR_19 > 0 )
   {
    FUNC_2( VAR_4->start, VAR_4->sphere.offset, VAR_20 );
    FUNC_2( VAR_4->end, VAR_4->sphere.offset, VAR_21 );
   }
   else
   {
    FUNC_1( VAR_4->start, VAR_4->sphere.offset, VAR_20 );
    FUNC_1( VAR_4->end, VAR_4->sphere.offset, VAR_21 );
   }

   VAR_12 = FUNC_0( VAR_20, VAR_7->normal ) - VAR_9;
   VAR_13 = FUNC_0( VAR_21, VAR_7->normal ) - VAR_9;

   if (VAR_13 > 0) {
    VAR_14 = VAR_3;
   }
   if (VAR_12 > 0) {
    VAR_15 = VAR_3;
   }


   if (VAR_12 > 0 && ( VAR_13 >= VAR_0 || VAR_13 >= VAR_12 ) ) {
    return;
   }


   if (VAR_12 <= 0 && VAR_13 <= 0 ) {
    continue;
   }


   if (VAR_12 > VAR_13) {
    VAR_16 = (VAR_12-VAR_0) / (VAR_12-VAR_13);
    if ( VAR_16 < 0 ) {
     VAR_16 = 0;
    }
    if (VAR_16 > VAR_10) {
     VAR_10 = VAR_16;
     VAR_8 = VAR_7;
     VAR_18 = VAR_17;
    }
   } else {
    VAR_16 = (VAR_12+VAR_0) / (VAR_12-VAR_13);
    if ( VAR_16 > 1 ) {
     VAR_16 = 1;
    }
    if (VAR_16 < VAR_11) {
     VAR_11 = VAR_16;
    }
   }
  }
 } else {





  for (VAR_6 = 0; VAR_6 < VAR_5->numsides; VAR_6++) {
   VAR_17 = VAR_5->sides + VAR_6;
   VAR_7 = VAR_17->plane;


   VAR_9 = VAR_7->dist - FUNC_0( VAR_4->offsets[ VAR_7->signbits ], VAR_7->normal );

   VAR_12 = FUNC_0( VAR_4->start, VAR_7->normal ) - VAR_9;
   VAR_13 = FUNC_0( VAR_4->end, VAR_7->normal ) - VAR_9;

   if (VAR_13 > 0) {
    VAR_14 = VAR_3;
   }
   if (VAR_12 > 0) {
    VAR_15 = VAR_3;
   }


   if (VAR_12 > 0 && ( VAR_13 >= VAR_0 || VAR_13 >= VAR_12 ) ) {
    return;
   }


   if (VAR_12 <= 0 && VAR_13 <= 0 ) {
    continue;
   }


   if (VAR_12 > VAR_13) {
    VAR_16 = (VAR_12-VAR_0) / (VAR_12-VAR_13);
    if ( VAR_16 < 0 ) {
     VAR_16 = 0;
    }
    if (VAR_16 > VAR_10) {
     VAR_10 = VAR_16;
     VAR_8 = VAR_7;
     VAR_18 = VAR_17;
    }
   } else {
    VAR_16 = (VAR_12+VAR_0) / (VAR_12-VAR_13);
    if ( VAR_16 > 1 ) {
     VAR_16 = 1;
    }
    if (VAR_16 < VAR_11) {
     VAR_11 = VAR_16;
    }
   }
  }
 }





 if (!VAR_15) {
  VAR_4->trace.startsolid = VAR_3;
  if (!VAR_14) {
   VAR_4->trace.allsolid = VAR_3;
   VAR_4->trace.fraction = 0;
   VAR_4->trace.contents = VAR_5->contents;
  }
  return;
 }

 if (VAR_10 < VAR_11) {
  if (VAR_10 > -1 && VAR_10 < VAR_4->trace.fraction) {
   if (VAR_10 < 0) {
    VAR_10 = 0;
   }
   VAR_4->trace.fraction = VAR_10;
   if (VAR_8 != ((void*)0)) {
    VAR_4->trace.plane = *VAR_8;
   }
   if (VAR_18 != ((void*)0)) {
    VAR_4->trace.surfaceFlags = VAR_18->surfaceFlags;
   }
   VAR_4->trace.contents = VAR_5->contents;
  }
 }
}
