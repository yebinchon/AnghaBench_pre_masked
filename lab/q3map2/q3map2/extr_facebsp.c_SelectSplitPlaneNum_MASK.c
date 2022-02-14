
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_7__ {int type; int dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_8__ {int* mins; float* maxs; } ;
typedef TYPE_2__ node_t ;
struct TYPE_9__ {size_t planenum; int compileFlags; scalar_t__ priority; int w; scalar_t__ checked; struct TYPE_9__* next; } ;
typedef TYPE_3__ face_t ;


 int FUNC_0 (int*,float,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ,int ) ;
 int* VAR_3 ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_4( node_t *VAR_7, face_t *VAR_8, int *VAR_9, int *VAR_10 ){
 face_t *VAR_11;
 face_t *VAR_12;
 face_t *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;
 plane_t *VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;
 vec3_t VAR_23;
 float VAR_24;
 int VAR_25;



 *VAR_9 = -1;
 *VAR_10 = 0;





 for ( VAR_22 = 0; VAR_22 < 3; VAR_22++ )
 {
  if ( VAR_3[ VAR_22 ] <= 0 ) {
   continue;
  }
  VAR_24 = VAR_3[ VAR_22 ] * ( FUNC_3( VAR_7->mins[ VAR_22 ] / VAR_3[ VAR_22 ] ) + 1 );
  if ( VAR_7->maxs[ VAR_22 ] > VAR_24 ) {
   FUNC_1( VAR_23 );
   VAR_23[ VAR_22 ] = 1;
   VAR_25 = FUNC_0( VAR_23, VAR_24, 0, ((void*)0) );
   *VAR_9 = VAR_25;
   return;
  }
 }


 VAR_21 = -99999;
 VAR_13 = VAR_8;

 for ( VAR_11 = VAR_8; VAR_11; VAR_11 = VAR_11->next )
  VAR_11->checked = VAR_5;

 for ( VAR_11 = VAR_8; VAR_11; VAR_11 = VAR_11->next )
 {
  if ( VAR_11->checked ) {
   continue;
  }

  VAR_19 = &VAR_4[ VAR_11->planenum ];
  VAR_14 = 0;
  VAR_15 = 0;
  VAR_16 = 0;
  VAR_17 = 0;
  for ( VAR_12 = VAR_8 ; VAR_12 ; VAR_12 = VAR_12->next ) {
   if ( VAR_12->planenum == VAR_11->planenum ) {
    VAR_15++;
    VAR_12->checked = VAR_6;
    continue;
   }
   VAR_18 = FUNC_2( VAR_12->w, VAR_19->normal, VAR_19->dist );
   if ( VAR_18 == VAR_1 ) {
    VAR_14++;
   }
   else if ( VAR_18 == VAR_2 ) {
    VAR_16++;
   }
   else if ( VAR_18 == VAR_0 ) {
    VAR_17++;
   }
  }
  VAR_20 = 5 * VAR_15 - 5 * VAR_14;
  if ( VAR_19->type < 3 ) {
   VAR_20 += 5;
  }
  VAR_20 += VAR_11->priority;

  if ( VAR_20 > VAR_21 ) {
   VAR_21 = VAR_20;
   VAR_13 = VAR_11;
  }
 }


 if ( VAR_21 == -99999 ) {
  return;
 }


 *VAR_9 = VAR_13->planenum;
 *VAR_10 = VAR_13->compileFlags;
}
