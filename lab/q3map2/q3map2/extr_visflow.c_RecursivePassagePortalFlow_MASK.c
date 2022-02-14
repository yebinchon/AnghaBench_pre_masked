
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {float dist; int normal; } ;
struct TYPE_21__ {size_t leaf; scalar_t__ status; float radius; TYPE_2__ plane; void* winding; int origin; scalar_t__ portalflood; scalar_t__ portalvis; scalar_t__ removed; TYPE_8__* passages; } ;
typedef TYPE_4__ vportal_t ;
struct TYPE_22__ {float dist; int normal; } ;
typedef TYPE_5__ visPlane_t ;
struct TYPE_18__ {TYPE_5__ portalplane; } ;
struct TYPE_23__ {TYPE_3__* base; TYPE_1__ pstack_head; } ;
typedef TYPE_6__ threaddata_t ;
struct TYPE_24__ {int* numseperators; int* mightsee; int* freewindings; struct TYPE_24__* next; void* pass; void* source; TYPE_5__** seperators; TYPE_4__* portal; TYPE_2__ portalplane; scalar_t__ depth; TYPE_9__* leaf; } ;
typedef TYPE_7__ pstack_t ;
struct TYPE_25__ {scalar_t__ cansee; struct TYPE_25__* next; } ;
typedef TYPE_8__ passage_t ;
struct TYPE_26__ {int numportals; TYPE_4__** portals; } ;
typedef TYPE_9__ leaf_t ;
struct TYPE_20__ {int* portalvis; float radius; int origin; } ;


 void* FUNC_0 (void*,void*,void*,int ,TYPE_7__*) ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 void* FUNC_3 (void*,TYPE_7__*,TYPE_5__*) ;
 TYPE_9__* VAR_0 ;
 int FUNC_4 (long*,long*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

void FUNC_7( vportal_t *VAR_9, threaddata_t *VAR_10, pstack_t *VAR_11 ){
 pstack_t VAR_12;
 vportal_t *VAR_13;
 leaf_t *VAR_14;
 visPlane_t VAR_15;
 passage_t *VAR_16, *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 long *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25, VAR_26;
 int VAR_27;



 VAR_14 = &VAR_0[VAR_9->leaf];


 VAR_11->next = &VAR_12;

 VAR_12.next = ((void*)0);
 VAR_12.leaf = VAR_14;
 VAR_12.portal = ((void*)0);
 VAR_12.depth = VAR_11->depth + 1;






 VAR_22 = (long *)VAR_10->base->portalvis;

 VAR_16 = VAR_9->passages;
 VAR_17 = VAR_16;

 for ( VAR_18 = 0; VAR_18 < VAR_14->numportals; VAR_18++, VAR_16 = VAR_17 )
 {
  VAR_13 = VAR_14->portals[VAR_18];
  if ( VAR_13->removed ) {
   continue;
  }
  VAR_17 = VAR_16->next;
  VAR_27 = VAR_13 - VAR_4;

  if ( !( VAR_11->mightsee[VAR_27 >> 3] & ( 1 << ( VAR_27 & 7 ) ) ) ) {
   continue;

  }
  VAR_23 = (long *)VAR_11->mightsee;
  VAR_24 = (long *)VAR_16->cansee;
  VAR_21 = (long *)VAR_12.mightsee;
  FUNC_4( VAR_21, VAR_23, VAR_2 );

  FUNC_5( &VAR_1 );
  if ( VAR_13->status == VAR_7 ) {
   VAR_25 = (long *) VAR_13->portalvis;
  }
  else{
   VAR_25 = (long *) VAR_13->portalflood;
  }
  FUNC_6( &VAR_1 );

  VAR_26 = 0;
  for ( VAR_19 = 0; VAR_19 < VAR_3; VAR_19++ )
  {
   if ( *VAR_21 ) {
    *VAR_21 &= *VAR_24++ & *VAR_25++;
    VAR_26 |= ( *VAR_21 & ~VAR_22[VAR_19] );
   }
   else
   {
    VAR_24++;
    VAR_25++;
   }
   VAR_21++;
  }

  if ( !VAR_26 && ( VAR_10->base->portalvis[VAR_27 >> 3] & ( 1 << ( VAR_27 & 7 ) ) ) ) {
   continue;
  }


  VAR_12.portalplane = VAR_13->plane;
  FUNC_2( VAR_8, VAR_13->plane.normal, VAR_15.normal );
  VAR_15.dist = -VAR_13->plane.dist;



  VAR_12.portal = VAR_13;
  VAR_12.next = ((void*)0);
  VAR_12.freewindings[0] = 1;
  VAR_12.freewindings[1] = 1;
  VAR_12.freewindings[2] = 1;


  {
   float VAR_28;

   VAR_28 = FUNC_1( VAR_13->origin, VAR_10->pstack_head.portalplane.normal );
   VAR_28 -= VAR_10->pstack_head.portalplane.dist;
   if ( VAR_28 < -VAR_13->radius ) {
    continue;
   }
   else if ( VAR_28 > VAR_13->radius ) {
    VAR_12.pass = VAR_13->winding;
   }
   else
   {
    VAR_12.pass = FUNC_3( VAR_13->winding, &VAR_12, &VAR_10->pstack_head.portalplane );
    if ( !VAR_12.pass ) {
     continue;
    }
   }
  }
  {
   float VAR_29;

   VAR_29 = FUNC_1( VAR_10->base->origin, VAR_13->plane.normal );
   VAR_29 -= VAR_13->plane.dist;


   if ( VAR_29 > VAR_10->base->radius ) {
    continue;
   }


   else if ( VAR_29 < -VAR_10->base->radius ) {
    VAR_12.source = VAR_11->source;
   }
   else
   {
    VAR_12.source = FUNC_3( VAR_11->source, &VAR_12, &VAR_15 );

    if ( !VAR_12.source ) {
     continue;
    }
   }
  }







  if ( !VAR_11->pass ) {


   VAR_10->base->portalvis[VAR_27 >> 3] |= ( 1 << ( VAR_27 & 7 ) );

   FUNC_7( VAR_13, VAR_10, &VAR_12 );
   continue;
  }
  VAR_12.pass = FUNC_0( VAR_12.source, VAR_11->pass, VAR_12.pass, VAR_5, &VAR_12 );

  if ( !VAR_12.pass ) {
   continue;
  }
  VAR_12.pass = FUNC_0( VAR_11->pass, VAR_12.source, VAR_12.pass, VAR_6, &VAR_12 );

  if ( !VAR_12.pass ) {
   continue;
  }


  VAR_10->base->portalvis[VAR_27 >> 3] |= ( 1 << ( VAR_27 & 7 ) );


  FUNC_7( VAR_13, VAR_10, &VAR_12 );

  VAR_12.next = ((void*)0);
 }
}
