
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {scalar_t__ twoSided; int compileFlags; int color; scalar_t__ opaque; scalar_t__ passSolid; scalar_t__ testAll; int forceSunlight; scalar_t__ testOcclusion; int direction; int normal; int end; int origin; int displacement; int cluster; TYPE_2__* light; } ;
typedef TYPE_1__ trace_t ;
struct TYPE_7__ {int flags; float envelope; scalar_t__ type; float dist; float photons; float add; float angleScale; float fade; float radiusByDist; float falloffTolerance; int color; int origin; int normal; int w; int cluster; } ;
typedef TYPE_2__ light_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 float FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 float FUNC_2 (int ,int ,int ) ;
 float FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 float FUNC_8 (int ) ;
 int FUNC_9 (int ,float,int ,int ) ;
 int FUNC_10 (int ,float,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 float FUNC_12 (float) ;
 scalar_t__ VAR_10 ;
 float VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

int FUNC_13( trace_t *VAR_14 ){
 light_t *VAR_15;
 float VAR_16;
 float VAR_17;
 float VAR_18;



 VAR_15 = VAR_14->light;


 FUNC_6( VAR_14->color );


 if ( !( VAR_15->flags & VAR_8 ) || VAR_15->envelope <= 0.0f ) {
  return 0;
 }


 if ( VAR_15->type != VAR_4 ) {

  if ( VAR_14->twoSided == VAR_12 ) {
   if ( FUNC_1( VAR_15->origin, VAR_14->normal ) - FUNC_1( VAR_14->origin, VAR_14->normal ) < 0.0f ) {
    return 0;
   }
  }


  if ( !FUNC_0( VAR_14->cluster, VAR_15->cluster ) ) {
   return 0;
  }
 }


 if ( VAR_15->type == VAR_1 ) {
  float VAR_19;
  float VAR_20;
  vec3_t VAR_21;



  VAR_20 = FUNC_1( VAR_14->origin, VAR_15->normal ) - VAR_15->dist;
  if ( VAR_20 < 3.0f ) {

   if ( !( VAR_15->flags & VAR_9 ) && VAR_20 < -1.0f ) {
    return 0;
   }


   if ( VAR_20 > -3.0f && FUNC_1( VAR_14->normal, VAR_15->normal ) > 0.9f ) {
    return 0;
   }
  }



  if ( VAR_20 > -8.0f && VAR_20 < 8.0f ) {
   FUNC_9( VAR_14->origin, ( 8.0f - VAR_20 ), VAR_15->normal, VAR_21 );
  }
  else{
   FUNC_7( VAR_14->origin, VAR_21 );
  }


  FUNC_7( VAR_15->origin, VAR_14->end );
  VAR_18 = FUNC_3( VAR_14 );
  if ( VAR_18 >= VAR_15->envelope ) {
   return 0;
  }


  if ( VAR_10 ) {

   VAR_16 = FUNC_1( VAR_14->normal, VAR_14->direction );


   if ( VAR_14->twoSided ) {
    VAR_16 = FUNC_12( VAR_16 );
   }


   VAR_16 *= -FUNC_1( VAR_15->normal, VAR_14->direction );
   if ( VAR_16 == 0.0f ) {
    return 0;
   }
   else if ( VAR_16 < 0.0f &&
       ( VAR_14->twoSided || ( VAR_15->flags & VAR_9 ) ) ) {
    VAR_16 = -VAR_16;
   }
   VAR_17 = VAR_15->photons / ( VAR_18 * VAR_18 ) * VAR_16;
  }
  else
  {

   VAR_19 = FUNC_2( VAR_21, VAR_14->normal, VAR_15->w );
   if ( VAR_19 == 0.0f ) {
    return 0;
   }
   else if ( VAR_19 < 0.0f ) {

    if ( VAR_14->twoSided || ( VAR_15->flags & VAR_9 ) ) {
     VAR_19 = -VAR_19;


     FUNC_9( VAR_15->origin, -2.0f, VAR_15->normal, VAR_14->end );
     VAR_18 = FUNC_3( VAR_14 );
     if ( VAR_18 >= VAR_15->envelope ) {
      return 0;
     }
    }
    else{
     return 0;
    }
   }


   VAR_17 = VAR_19 * VAR_15->add;
  }
 }


 else if ( VAR_15->type == VAR_2 || VAR_15->type == VAR_3 ) {

  FUNC_7( VAR_15->origin, VAR_14->end );
  VAR_18 = FUNC_3( VAR_14 );
  if ( VAR_18 >= VAR_15->envelope ) {
   return 0;
  }


  if ( VAR_18 < 16.0f ) {
   VAR_18 = 16.0f;
  }


  VAR_16 = ( VAR_15->flags & VAR_5 ) ? FUNC_1( VAR_14->normal, VAR_14->direction ) : 1.0f;
  if ( VAR_15->angleScale != 0.0f ) {
   VAR_16 /= VAR_15->angleScale;
   if ( VAR_16 > 1.0f ) {
    VAR_16 = 1.0f;
   }
  }


  if ( VAR_14->twoSided ) {
   VAR_16 = FUNC_12( VAR_16 );
  }


  if ( VAR_15->flags & VAR_6 ) {
   VAR_17 = VAR_16 * VAR_15->photons * VAR_11 - ( VAR_18 * VAR_15->fade );
   if ( VAR_17 < 0.0f ) {
    VAR_17 = 0.0f;
   }
  }
  else{
   VAR_17 = VAR_15->photons / ( VAR_18 * VAR_18 ) * VAR_16;
  }


  if ( VAR_15->type == VAR_3 ) {
   float VAR_22, VAR_23, VAR_24;
   vec3_t VAR_25, VAR_26;



   VAR_22 = -FUNC_1( VAR_14->displacement, VAR_15->normal );
   if ( VAR_22 < 0.0f ) {
    return 0;
   }
   FUNC_9( VAR_15->origin, VAR_22, VAR_15->normal, VAR_25 );
   VAR_23 = VAR_15->radiusByDist * VAR_22;
   FUNC_11( VAR_14->origin, VAR_25, VAR_26 );
   VAR_24 = FUNC_8( VAR_26 );


   if ( VAR_24 >= VAR_23 ) {
    return 0;
   }


   if ( VAR_24 > ( VAR_23 - 32.0f ) ) {
    VAR_17 *= ( ( VAR_23 - VAR_24 ) / 32.0f );
   }
  }
 }


 else if ( VAR_15->type == VAR_4 ) {

  FUNC_5( VAR_14->origin, VAR_15->origin, VAR_14->end );
  VAR_18 = FUNC_3( VAR_14 );


  VAR_16 = ( VAR_15->flags & VAR_5 )
    ? FUNC_1( VAR_14->normal, VAR_14->direction )
    : 1.0f;


  if ( VAR_14->twoSided ) {
   VAR_16 = FUNC_12( VAR_16 );
  }


  VAR_17 = VAR_15->photons * VAR_16;
  if ( VAR_17 <= 0.0f ) {
   return 0;
  }


  VAR_14->testAll = VAR_13;
  FUNC_10( VAR_15->color, VAR_17, VAR_14->color );


  if ( VAR_14->testOcclusion && !VAR_14->forceSunlight ) {

   FUNC_4( VAR_14 );
   if ( !( VAR_14->compileFlags & VAR_0 ) || VAR_14->opaque ) {
    FUNC_6( VAR_14->color );
    return -1;
   }
  }


  return 1;
 }


 else {
  return -1;
 }


 if ( VAR_17 <= 0.0f || ( VAR_17 <= VAR_15->falloffTolerance && ( VAR_15->flags & VAR_7 ) ) ) {
  return 0;
 }


 VAR_14->testAll = VAR_12;
 FUNC_10( VAR_15->color, VAR_17, VAR_14->color );


 FUNC_4( VAR_14 );
 if ( VAR_14->passSolid || VAR_14->opaque ) {
  FUNC_6( VAR_14->color );
  return -1;
 }


 return 1;
}
