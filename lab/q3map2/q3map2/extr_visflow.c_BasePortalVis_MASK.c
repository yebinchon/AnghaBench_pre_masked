
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float dist; int normal; } ;
struct TYPE_7__ {int* portalfront; int* portalflood; int* portalvis; float radius; scalar_t__ nummightsee; int leaf; TYPE_1__ plane; TYPE_3__* winding; int origin; scalar_t__ removed; } ;
typedef TYPE_2__ vportal_t ;
typedef int vec3_t ;
struct TYPE_8__ {int numpoints; int * points; } ;
typedef TYPE_3__ fixedWinding_t ;


 scalar_t__ FUNC_0 (int*,int) ;
 float FUNC_1 (int ,int ) ;
 float VAR_0 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 float FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_1 ;
 float VAR_2 ;
 int FUNC_5 (int*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int ) ;

void FUNC_9( int VAR_7 ){
 int VAR_8, VAR_9;
 vportal_t *VAR_10, *VAR_11;
 float VAR_12;
 fixedWinding_t *VAR_13;
 vec3_t VAR_14;


 VAR_11 = VAR_6 + VAR_7;

 if ( VAR_11->removed ) {
  return;
 }

 VAR_11->portalfront = FUNC_8( VAR_5 );
 FUNC_5( VAR_11->portalfront, 0, VAR_5 );

 VAR_11->portalflood = FUNC_8( VAR_5 );
 FUNC_5( VAR_11->portalflood, 0, VAR_5 );

 VAR_11->portalvis = FUNC_8( VAR_5 );
 FUNC_5( VAR_11->portalvis, 0, VAR_5 );

 for ( VAR_8 = 0, VAR_10 = VAR_6 ; VAR_8 < VAR_3 * 2 ; VAR_8++, VAR_10++ )
 {
  if ( VAR_8 == VAR_7 ) {
   continue;
  }
  if ( VAR_10->removed ) {
   continue;
  }
  if ( VAR_2 > 0.0f ) {
   FUNC_4( VAR_11->origin, VAR_10->origin, VAR_14 );
   if ( FUNC_3( VAR_14 ) - VAR_11->radius - VAR_10->radius > VAR_2 ) {
    continue;
   }
  }


  VAR_13 = VAR_10->winding;
  for ( VAR_9 = 0 ; VAR_9 < VAR_13->numpoints ; VAR_9++ )
  {
   VAR_12 = FUNC_1( VAR_13->points[VAR_9], VAR_11->plane.normal )
    - VAR_11->plane.dist;
   if ( VAR_12 > VAR_0 ) {
    break;
   }
  }
  if ( VAR_9 == VAR_13->numpoints ) {
   continue;

  }
  VAR_13 = VAR_11->winding;
  for ( VAR_9 = 0 ; VAR_9 < VAR_13->numpoints ; VAR_9++ )
  {
   VAR_12 = FUNC_1( VAR_13->points[VAR_9], VAR_10->plane.normal )
    - VAR_10->plane.dist;
   if ( VAR_12 < -VAR_0 ) {
    break;
   }
  }
  if ( VAR_9 == VAR_13->numpoints ) {
   continue;

  }
  VAR_11->portalfront[VAR_8 >> 3] |= ( 1 << ( VAR_8 & 7 ) );
 }

 FUNC_2( VAR_11, VAR_11->leaf );

 FUNC_6( &VAR_4 );
 VAR_11->nummightsee = FUNC_0( VAR_11->portalflood, VAR_3 * 2 );

 VAR_1 += VAR_11->nummightsee;
 FUNC_7( &VAR_4 );
}
