
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {size_t leaf; scalar_t__ status; scalar_t__ portalflood; scalar_t__ portalvis; scalar_t__ removed; TYPE_5__* passages; } ;
typedef TYPE_2__ vportal_t ;
struct TYPE_14__ {TYPE_1__* base; } ;
typedef TYPE_3__ threaddata_t ;
struct TYPE_15__ {int* mightsee; struct TYPE_15__* next; scalar_t__ depth; } ;
typedef TYPE_4__ pstack_t ;
struct TYPE_16__ {scalar_t__ cansee; struct TYPE_16__* next; } ;
typedef TYPE_5__ passage_t ;
struct TYPE_17__ {int numportals; TYPE_2__** portals; } ;
typedef TYPE_6__ leaf_t ;
struct TYPE_12__ {int* portalvis; } ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (long*,long*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1( vportal_t *VAR_5, threaddata_t *VAR_6, pstack_t *VAR_7 ){
 pstack_t VAR_8;
 vportal_t *VAR_9;
 leaf_t *VAR_10;
 passage_t *VAR_11, *VAR_12;
 int VAR_13, VAR_14;
 long *VAR_15, *VAR_16, *VAR_17, *VAR_18, *VAR_19, VAR_20;
 int VAR_21;

 VAR_10 = &VAR_0[VAR_5->leaf];

 VAR_7->next = &VAR_8;

 VAR_8.next = ((void*)0);
 VAR_8.depth = VAR_7->depth + 1;

 VAR_16 = (long *)VAR_6->base->portalvis;

 VAR_11 = VAR_5->passages;
 VAR_12 = VAR_11;

 for ( VAR_13 = 0; VAR_13 < VAR_10->numportals; VAR_13++, VAR_11 = VAR_12 )
 {
  VAR_9 = VAR_10->portals[VAR_13];
  if ( VAR_9->removed ) {
   continue;
  }
  VAR_12 = VAR_11->next;
  VAR_21 = VAR_9 - VAR_3;

  if ( !( VAR_7->mightsee[VAR_21 >> 3] & ( 1 << ( VAR_21 & 7 ) ) ) ) {
   continue;
  }


  VAR_6->base->portalvis[VAR_21 >> 3] |= ( 1 << ( VAR_21 & 7 ) );

  VAR_17 = (long *)VAR_7->mightsee;
  VAR_18 = (long *)VAR_11->cansee;
  VAR_15 = (long *)VAR_8.mightsee;
  FUNC_0( VAR_15, VAR_17, VAR_1 );
  if ( VAR_9->status == VAR_4 ) {
   VAR_19 = (long *) VAR_9->portalvis;
  }
  else{
   VAR_19 = (long *) VAR_9->portalflood;
  }
  VAR_20 = 0;
  for ( VAR_14 = 0; VAR_14 < VAR_2; VAR_14++ )
  {
   if ( *VAR_15 ) {
    *VAR_15 &= *VAR_18++ & *VAR_19++;
    VAR_20 |= ( *VAR_15 & ~VAR_16[VAR_14] );
   }
   else
   {
    VAR_18++;
    VAR_19++;
   }
   VAR_15++;
  }

  if ( !VAR_20 ) {

   continue;
  }


  FUNC_1( VAR_9, VAR_6, &VAR_8 );

  VAR_8.next = ((void*)0);
 }
}
