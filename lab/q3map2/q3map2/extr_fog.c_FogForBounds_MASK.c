
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_3__ {float* mins; float* maxs; } ;
typedef TYPE_1__ brush_t ;
struct TYPE_4__ {TYPE_1__* brush; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

int FUNC_0( vec3_t VAR_3, vec3_t VAR_4, float VAR_5 ){
 int VAR_6, VAR_7, VAR_8;
 float VAR_9, VAR_10, VAR_11, VAR_12;
 vec3_t VAR_13, VAR_14, VAR_15;
 brush_t *VAR_16;



 VAR_6 = VAR_0;


 VAR_12 = 0.0f;


 for ( VAR_7 = 0; VAR_7 < VAR_2; VAR_7++ )
 {

  if ( VAR_1[ VAR_7 ].brush == ((void*)0) ) {
   VAR_6 = VAR_7;
   continue;
  }


  VAR_16 = VAR_1[ VAR_7 ].brush;


  VAR_13[ 0 ] = VAR_16->mins[ 0 ] - VAR_5;
  VAR_13[ 1 ] = VAR_16->mins[ 1 ] - VAR_5;
  VAR_13[ 2 ] = VAR_16->mins[ 2 ] - VAR_5;
  VAR_14[ 0 ] = VAR_16->maxs[ 0 ] + VAR_5;
  VAR_14[ 1 ] = VAR_16->maxs[ 1 ] + VAR_5;
  VAR_14[ 2 ] = VAR_16->maxs[ 2 ] + VAR_5;


  for ( VAR_8 = 0; VAR_8 < 3; VAR_8++ )
  {
   if ( VAR_3[ VAR_8 ] > VAR_14[ VAR_8 ] || VAR_4[ VAR_8 ] < VAR_13[ VAR_8 ] ) {
    break;
   }
   VAR_9 = VAR_3[ VAR_8 ] > VAR_13[ VAR_8 ] ? VAR_3[ VAR_8 ] : VAR_13[ VAR_8 ];
   VAR_10 = VAR_4[ VAR_8 ] < VAR_14[ VAR_8 ] ? VAR_4[ VAR_8 ] : VAR_14[ VAR_8 ];
   VAR_15[ VAR_8 ] = VAR_10 - VAR_9;
   if ( VAR_15[ VAR_8 ] < 1.0f ) {
    VAR_15[ VAR_8 ] = 1.0f;
   }
  }


  if ( VAR_8 < 3 ) {
   continue;
  }


  VAR_11 = VAR_15[ 0 ] * VAR_15[ 1 ] * VAR_15[ 2 ];


  if ( VAR_11 > VAR_12 ) {
   VAR_12 = VAR_11;
   VAR_6 = VAR_7;
  }
 }


 return VAR_6;
}
