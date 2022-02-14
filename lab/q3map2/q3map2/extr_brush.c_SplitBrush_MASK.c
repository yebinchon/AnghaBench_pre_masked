
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_28__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef double vec_t ;
struct TYPE_29__ {int planenum; TYPE_1__* winding; int * shaderInfo; } ;
typedef TYPE_2__ side_t ;
struct TYPE_30__ {float dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_31__ {int numsides; TYPE_2__* sides; int original; int * next; } ;
typedef TYPE_4__ brush_t ;


 TYPE_4__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,float) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 double FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_1__**,int ,float,int ) ;
 int FUNC_6 (TYPE_1__*,int ,float,int ,TYPE_1__**,TYPE_1__**) ;
 TYPE_4__* FUNC_7 (TYPE_4__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 float FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_14 (TYPE_4__*,TYPE_4__*,int) ;

void FUNC_15( brush_t *VAR_4, int VAR_5, brush_t **VAR_6, brush_t **VAR_7 ){
 brush_t *VAR_8[2];
 int VAR_9, VAR_10;
 winding_t *VAR_11, *VAR_12[2], *VAR_13;
 plane_t *VAR_14, *VAR_15;
 side_t *VAR_16, *VAR_17;
 float VAR_18, VAR_19, VAR_20;


 *VAR_6 = ((void*)0);
 *VAR_7 = ((void*)0);
 VAR_14 = &VAR_3[VAR_5];


 VAR_19 = VAR_20 = 0;
 for ( VAR_9 = 0 ; VAR_9 < VAR_4->numsides ; VAR_9++ )
 {
  VAR_11 = VAR_4->sides[VAR_9].winding;
  if ( !VAR_11 ) {
   continue;
  }
  for ( VAR_10 = 0 ; VAR_10 < VAR_11->numpoints ; VAR_10++ )
  {
   VAR_18 = FUNC_9( VAR_11->p[VAR_10], VAR_14->normal ) - VAR_14->dist;
   if ( VAR_18 > 0 && VAR_18 > VAR_19 ) {
    VAR_19 = VAR_18;
   }
   if ( VAR_18 < 0 && VAR_18 < VAR_20 ) {
    VAR_20 = VAR_18;
   }
  }
 }

 if ( VAR_19 < 0.1 ) {

  *VAR_7 = FUNC_7( VAR_4 );
  return;
 }

 if ( VAR_20 > -0.1 ) {

  *VAR_6 = FUNC_7( VAR_4 );
  return;
 }


 VAR_11 = FUNC_1( VAR_14->normal, VAR_14->dist );
 for ( VAR_9 = 0 ; VAR_9 < VAR_4->numsides && VAR_11 ; VAR_9++ )
 {
  VAR_15 = &VAR_3[VAR_4->sides[VAR_9].planenum ^ 1];
  FUNC_5( &VAR_11, VAR_15->normal, VAR_15->dist, 0 );
 }

 if ( !VAR_11 || FUNC_13( VAR_11 ) ) {
  int VAR_21;

  VAR_21 = FUNC_3( VAR_4, VAR_14 );
  if ( VAR_21 == VAR_1 ) {
   *VAR_6 = FUNC_7( VAR_4 );
  }
  if ( VAR_21 == VAR_0 ) {
   *VAR_7 = FUNC_7( VAR_4 );
  }
  return;
 }

 if ( FUNC_12( VAR_11 ) ) {
  FUNC_11( VAR_2,"WARNING: huge winding\n" );
 }

 VAR_13 = VAR_11;



 for ( VAR_9 = 0 ; VAR_9 < 2 ; VAR_9++ )
 {
  VAR_8[VAR_9] = FUNC_0( VAR_4->numsides + 1 );
  FUNC_14( VAR_8[VAR_9], VAR_4, sizeof( brush_t ) );
  VAR_8[VAR_9]->numsides = 0;
  VAR_8[VAR_9]->next = ((void*)0);
  VAR_8[VAR_9]->original = VAR_4->original;
 }



 for ( VAR_9 = 0 ; VAR_9 < VAR_4->numsides ; VAR_9++ )
 {
  VAR_16 = &VAR_4->sides[VAR_9];
  VAR_11 = VAR_16->winding;
  if ( !VAR_11 ) {
   continue;
  }
  FUNC_6( VAR_11, VAR_14->normal, VAR_14->dist,
       0 , &VAR_12[0], &VAR_12[1] );
  for ( VAR_10 = 0 ; VAR_10 < 2 ; VAR_10++ )
  {
   if ( !VAR_12[VAR_10] ) {
    continue;
   }
   VAR_17 = &VAR_8[VAR_10]->sides[VAR_8[VAR_10]->numsides];
   VAR_8[VAR_10]->numsides++;
   *VAR_17 = *VAR_16;
   VAR_17->winding = VAR_12[VAR_10];
  }
 }



 for ( VAR_9 = 0 ; VAR_9 < 2 ; VAR_9++ )
 {
  if ( VAR_8[VAR_9]->numsides < 3 || !FUNC_2( VAR_8[VAR_9] ) ) {
   if ( VAR_8[VAR_9]->numsides >= 3 ) {
    FUNC_11( VAR_2,"bogus brush after clip\n" );
   }
   FUNC_10( VAR_8[VAR_9] );
   VAR_8[VAR_9] = ((void*)0);
  }
 }

 if ( !( VAR_8[0] && VAR_8[1] ) ) {
  if ( !VAR_8[0] && !VAR_8[1] ) {
   FUNC_11( VAR_2,"split removed brush\n" );
  }
  else{
   FUNC_11( VAR_2,"split not on both sides\n" );
  }
  if ( VAR_8[0] ) {
   FUNC_10( VAR_8[0] );
   *VAR_6 = FUNC_7( VAR_4 );
  }
  if ( VAR_8[1] ) {
   FUNC_10( VAR_8[1] );
   *VAR_7 = FUNC_7( VAR_4 );
  }
  return;
 }


 for ( VAR_9 = 0 ; VAR_9 < 2 ; VAR_9++ )
 {
  VAR_17 = &VAR_8[VAR_9]->sides[VAR_8[VAR_9]->numsides];
  VAR_8[VAR_9]->numsides++;

  VAR_17->planenum = VAR_5 ^ VAR_9 ^ 1;
  VAR_17->shaderInfo = ((void*)0);
  if ( VAR_9 == 0 ) {
   VAR_17->winding = FUNC_8( VAR_13 );
  }
  else{
   VAR_17->winding = VAR_13;
  }
 }

 {
  vec_t VAR_22;
  int VAR_23;


  for ( VAR_23 = 0 ; VAR_23 < 2 ; VAR_23++ )
  {
   VAR_22 = FUNC_4( VAR_8[VAR_23] );
   if ( VAR_22 < 1.0 ) {
    FUNC_10( VAR_8[VAR_23] );
    VAR_8[VAR_23] = ((void*)0);

   }
  }
 }

 *VAR_6 = VAR_8[0];
 *VAR_7 = VAR_8[1];
}
