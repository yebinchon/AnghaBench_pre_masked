
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef TYPE_1__ qtime_t ;
typedef int mapName ;
struct TYPE_23__ {int value; scalar_t__ integer; } ;
struct TYPE_22__ {scalar_t__ integer; } ;
struct TYPE_21__ {scalar_t__ integer; } ;
struct TYPE_20__ {scalar_t__ state; float aviVideoFrameRemainder; scalar_t__ demorecording; int servername; int demoplaying; scalar_t__ cURLDisconnected; scalar_t__ downloadCURLM; } ;
struct TYPE_19__ {int realFrametime; int frametime; int realtime; int framecount; scalar_t__ cddialog; } ;
struct TYPE_18__ {int integer; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_16__ {int value; } ;
struct TYPE_14__ {int mapname; } ;
struct TYPE_13__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_16 () ;
 float FUNC_17 (float,float) ;
 int VAR_4 ;
 int VAR_5 ;
 float FUNC_18 (int,float) ;
 int FUNC_19 (char*,int ,int) ;
 int FUNC_20 (double) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_25 (scalar_t__,int ,int ) ;
 TYPE_11__ VAR_9 ;
 TYPE_10__* VAR_10 ;
 TYPE_9__* VAR_11 ;
 TYPE_8__* VAR_12 ;
 TYPE_7__* VAR_13 ;
 TYPE_6__ VAR_14 ;
 TYPE_5__ VAR_15 ;
 TYPE_4__* VAR_16 ;
 TYPE_3__* VAR_17 ;
 TYPE_2__* VAR_18 ;
 scalar_t__ VAR_19 ;
 char* FUNC_26 (char*,char*) ;
 scalar_t__ VAR_20 ;
 char* FUNC_27 (char*,char*,char*,char*,...) ;

void FUNC_28 ( int VAR_21 ) {

 if ( !VAR_16->integer ) {
  return;
 }
 if ( VAR_15.cddialog ) {

  VAR_15.cddialog = VAR_19;
  FUNC_25( VAR_20, VAR_8, VAR_7 );
 } else if ( VAR_14.state == VAR_1 && !( FUNC_16( ) & VAR_3 )
  && !VAR_17->integer && VAR_20 ) {

  FUNC_23();
  FUNC_25( VAR_20, VAR_8, VAR_6 );
 }


 if ( FUNC_9( ) && VAR_11->integer && VAR_21) {

  if ( VAR_14.state == VAR_0 || VAR_12->integer) {
   float VAR_22 = FUNC_18(VAR_11->value * VAR_18->value, 1000.0f);
   float VAR_23 = FUNC_17(1000.0f / VAR_22, 1.0f) + VAR_14.aviVideoFrameRemainder;

   FUNC_7( );

   VAR_21 = (int)VAR_23;
   VAR_14.aviVideoFrameRemainder = VAR_23 - VAR_21;
  }
 }

 if( VAR_10->integer ) {
  if( VAR_14.state == VAR_0 && !VAR_14.demorecording && !VAR_14.demoplaying ) {

   qtime_t VAR_24;
   char *VAR_25;
   char *VAR_26;
   char VAR_27[ VAR_5 ];
   char VAR_28[ VAR_4 ];

   FUNC_14( &VAR_24 );
   VAR_25 = FUNC_27( "%04d%02d%02d%02d%02d%02d",
     1900 + VAR_24.tm_year,
     1 + VAR_24.tm_mon,
     VAR_24.tm_mday,
     VAR_24.tm_hour,
     VAR_24.tm_min,
     VAR_24.tm_sec );

   FUNC_19( VAR_28, VAR_14.servername, VAR_4 );


   VAR_26 = FUNC_26( VAR_28, ":" );
   if( VAR_26 ) {
    *VAR_26 = '.';
   }

   FUNC_19( VAR_27, FUNC_11( VAR_9.mapname ), sizeof( VAR_9.mapname ) );
   FUNC_12(VAR_27, VAR_27, sizeof(VAR_27));

   FUNC_13( VAR_2,
     FUNC_27( "record %s-%s-%s", VAR_25, VAR_28, VAR_27 ) );
  }
  else if( VAR_14.state != VAR_0 && VAR_14.demorecording ) {

   FUNC_6( );
  }
 }


 VAR_15.realFrametime = VAR_21;


 VAR_15.frametime = VAR_21;

 VAR_15.realtime += VAR_15.frametime;

 if ( VAR_13->integer ) {
  FUNC_20 ( VAR_15.realFrametime * 0.25 );
 }


 FUNC_3();



 FUNC_2();


 FUNC_4();


 FUNC_1();


 FUNC_5();


 FUNC_22();


 FUNC_24();
 FUNC_21();

 FUNC_15();

 VAR_15.framecount++;
}
