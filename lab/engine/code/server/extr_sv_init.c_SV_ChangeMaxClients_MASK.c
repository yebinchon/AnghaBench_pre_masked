
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_1__ client_t ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int numSnapshotEntities; TYPE_1__* clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;

void FUNC_6( void ) {
 int VAR_6;
 int VAR_7;
 client_t *VAR_8;
 int VAR_9;


 VAR_9 = 0;
 for ( VAR_7 = 0 ; VAR_7 < VAR_4->integer ; VAR_7++ ) {
  if ( VAR_5.clients[VAR_7].state >= VAR_0 ) {
   if (VAR_7 > VAR_9)
    VAR_9 = VAR_7;
  }
 }
 VAR_9++;

 VAR_6 = VAR_4->integer;

 FUNC_3( VAR_9 );

 if ( VAR_4->integer == VAR_6 ) {
  return;
 }

 VAR_8 = FUNC_1( VAR_9 * sizeof(client_t) );

 for ( VAR_7 = 0 ; VAR_7 < VAR_9 ; VAR_7++ ) {
  if ( VAR_5.clients[VAR_7].state >= VAR_0 ) {
   VAR_8[VAR_7] = VAR_5.clients[VAR_7];
  }
  else {
   FUNC_0(&VAR_8[VAR_7], 0, sizeof(client_t));
  }
 }


 FUNC_4( VAR_5.clients );


 VAR_5.clients = FUNC_5 ( VAR_4->integer * sizeof(client_t) );
 FUNC_0( VAR_5.clients, 0, VAR_4->integer * sizeof(client_t) );


 for ( VAR_7 = 0 ; VAR_7 < VAR_9 ; VAR_7++ ) {
  if ( VAR_8[VAR_7].state >= VAR_0 ) {
   VAR_5.clients[VAR_7] = VAR_8[VAR_7];
  }
 }


 FUNC_2( VAR_8 );


 if ( VAR_3->integer ) {
  VAR_5.numSnapshotEntities = VAR_4->integer * VAR_2 * VAR_1;
 } else {

  VAR_5.numSnapshotEntities = VAR_4->integer * 4 * VAR_1;
 }
}
