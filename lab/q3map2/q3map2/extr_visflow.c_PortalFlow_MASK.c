
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ portalvis; void* status; int leaf; scalar_t__ portalflood; int plane; int winding; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_10__ {scalar_t__ mightsee; scalar_t__ depth; int portalplane; int source; TYPE_1__* portal; } ;
struct TYPE_9__ {int c_chains; TYPE_7__ pstack_head; TYPE_1__* base; } ;
typedef TYPE_2__ threaddata_t ;
typedef int data ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,int,int,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__** VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

void FUNC_5( int VAR_7 ){
 threaddata_t VAR_8;
 int VAR_9;
 vportal_t *VAR_10;
 int VAR_11, VAR_12;





 VAR_10 = VAR_4[VAR_7];

 if ( VAR_10->removed ) {
  VAR_10->status = VAR_5;
  return;
 }

 VAR_10->status = VAR_6;

 VAR_11 = FUNC_0( VAR_10->portalflood, VAR_1 * 2 );

 FUNC_4( &VAR_8, 0, sizeof( VAR_8 ) );
 VAR_8.base = VAR_10;

 VAR_8.pstack_head.portal = VAR_10;
 VAR_8.pstack_head.source = VAR_10->winding;
 VAR_8.pstack_head.portalplane = VAR_10->plane;
 VAR_8.pstack_head.depth = 0;
 for ( VAR_9 = 0 ; VAR_9 < VAR_2 ; VAR_9++ )
  ( (long *)VAR_8.pstack_head.mightsee )[VAR_9] = ( (long *)VAR_10->portalflood )[VAR_9];

 FUNC_1( VAR_10->leaf, &VAR_8, &VAR_8.pstack_head );

 VAR_10->status = VAR_5;

 VAR_12 = FUNC_0( VAR_10->portalvis, VAR_1 * 2 );

 FUNC_2( VAR_0,"portal:%4i  mightsee:%4i  cansee:%4i (%i chains)\n",
     (int)( VAR_10 - VAR_3 ), VAR_11, VAR_12, VAR_8.c_chains );
}
