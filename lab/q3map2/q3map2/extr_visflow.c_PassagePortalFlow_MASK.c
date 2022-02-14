
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* status; scalar_t__ portalflood; int plane; int winding; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_10__ {scalar_t__ mightsee; scalar_t__ depth; int portalplane; int source; TYPE_1__* portal; } ;
struct TYPE_9__ {TYPE_7__ pstack_head; TYPE_1__* base; } ;
typedef TYPE_2__ threaddata_t ;
typedef int data ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,TYPE_7__*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__** VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

void FUNC_5( int VAR_5 ){
 threaddata_t VAR_6;
 int VAR_7;
 vportal_t *VAR_8;






 VAR_8 = VAR_2[VAR_5];

 if ( VAR_8->removed ) {
  FUNC_3( &VAR_0 );
  VAR_8->status = VAR_3;
  FUNC_4( &VAR_0 );
  return;
 }

 FUNC_3( &VAR_0 );
 VAR_8->status = VAR_4;
 FUNC_4( &VAR_0 );



 FUNC_2( &VAR_6, 0, sizeof( VAR_6 ) );
 VAR_6.base = VAR_8;

 VAR_6.pstack_head.portal = VAR_8;
 VAR_6.pstack_head.source = VAR_8->winding;
 VAR_6.pstack_head.portalplane = VAR_8->plane;
 VAR_6.pstack_head.depth = 0;
 for ( VAR_7 = 0 ; VAR_7 < VAR_1 ; VAR_7++ )
  ( (long *)VAR_6.pstack_head.mightsee )[VAR_7] = ( (long *)VAR_8->portalflood )[VAR_7];

 FUNC_0( VAR_8, &VAR_6, &VAR_6.pstack_head );

 FUNC_3( &VAR_0 );
 VAR_8->status = VAR_3;
 FUNC_4( &VAR_0 );







}
