
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {int timeResidual; scalar_t__ time; scalar_t__ restartTime; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {int time; int nextSnapshotEntities; int numSnapshotEntities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 float FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int ,scalar_t__) ;
 TYPE_8__* VAR_6 ;
 TYPE_7__* VAR_7 ;
 TYPE_6__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__ VAR_12 ;
 TYPE_3__* VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_1__ VAR_15 ;
 int VAR_16 ;
 char* FUNC_16 (char*,float) ;

void FUNC_17( int VAR_17 ) {
 int VAR_18;
 int VAR_19;


 if ( VAR_14->integer ) {
  FUNC_12 ("Server was killed");
  FUNC_3( "sv_killserver", "0" );
  return;
 }

 if (!VAR_8->integer)
 {






  return;
 }


 if ( FUNC_7() ) {
  return;
 }


 if ( VAR_13->integer < 1 ) {
  FUNC_3( "sv_fps", "10" );
 }

 VAR_18 = 1000 / VAR_13->integer * VAR_9->value;

 if(VAR_18 < 1)
 {
  FUNC_3("timescale", FUNC_16("%f", VAR_13->integer / 1000.0f));
  VAR_18 = 1;
 }

 VAR_12.timeResidual += VAR_17;

 if (!VAR_6->integer) FUNC_5 (VAR_12.time + VAR_12.timeResidual);





 if ( VAR_15.time > 0x70000000 ) {
  FUNC_12( "Restarting server due to time wrapping" );
  FUNC_0( FUNC_16( "map %s\n", FUNC_4( "mapname" ) ) );
  return;
 }

 if ( VAR_15.nextSnapshotEntities >= 0x7FFFFFFE - VAR_15.numSnapshotEntities ) {
  FUNC_12( "Restarting server due to numSnapshotEntities wrapping" );
  FUNC_0( FUNC_16( "map %s\n", FUNC_4( "mapname" ) ) );
  return;
 }

 if( VAR_12.restartTime && VAR_12.time >= VAR_12.restartTime ) {
  VAR_12.restartTime = 0;
  FUNC_0( "map_restart 0\n" );
  return;
 }


 if ( VAR_10 & VAR_2 ) {
  FUNC_11( VAR_0, FUNC_1( VAR_2 ) );
  VAR_10 &= ~VAR_2;
 }
 if ( VAR_10 & VAR_3 ) {
  FUNC_11( VAR_1, FUNC_2( VAR_3 ) );
  VAR_10 &= ~VAR_3;
 }

 if ( VAR_7->integer ) {
  VAR_19 = FUNC_13 ();
 } else {
  VAR_19 = 0;
 }


 FUNC_6();

 if (VAR_6->integer) FUNC_5 (VAR_12.time);


 while ( VAR_12.timeResidual >= VAR_18 ) {
  VAR_12.timeResidual -= VAR_18;
  VAR_15.time += VAR_18;
  VAR_12.time += VAR_18;


  FUNC_15 (VAR_11, VAR_4, VAR_12.time);
 }

 if ( VAR_7->integer ) {
  VAR_16 = FUNC_13 () - VAR_19;
 }


 FUNC_8();


 FUNC_10();


 FUNC_9(VAR_5);
}
