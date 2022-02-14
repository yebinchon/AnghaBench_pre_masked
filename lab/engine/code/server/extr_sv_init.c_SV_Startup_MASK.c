
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int client_t ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_6__ {int integer; } ;
struct TYPE_5__ {int numSnapshotEntities; scalar_t__ initialized; int clients; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_4__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_5( void ) {
 if ( VAR_7.initialized ) {
  FUNC_0( VAR_0, "SV_Startup: svs.initialized" );
 }
 FUNC_3( 1 );

 VAR_7.clients = FUNC_4 (sizeof(client_t) * VAR_6->integer );
 if ( VAR_3->integer ) {
  VAR_7.numSnapshotEntities = VAR_6->integer * VAR_2 * VAR_1;
 } else {

  VAR_7.numSnapshotEntities = VAR_6->integer * 4 * VAR_1;
 }
 VAR_7.initialized = VAR_4;


 if ( VAR_5->integer ) {
  FUNC_1( "sv_killserver", "0" );
 }

 FUNC_1( "sv_running", "1" );


 FUNC_2();
}
