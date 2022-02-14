
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__ integer; } ;
struct TYPE_3__ {int integer; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_2__* VAR_27 ;
 TYPE_1__* VAR_28 ;
 scalar_t__ VAR_29 ;

void FUNC_2( void ) {
 static qboolean VAR_30;

 if ( VAR_30 ) {
  return;
 }
 VAR_30 = VAR_29;

 FUNC_0 ("heartbeat", VAR_13);
 FUNC_0 ("kick", VAR_17);

 if(!VAR_28->integer)
 {
  FUNC_0 ("banUser", VAR_3);
  FUNC_0 ("banClient", VAR_2);
 }

 FUNC_0 ("kickbots", VAR_15);
 FUNC_0 ("kickall", VAR_14);
 FUNC_0 ("kicknum", VAR_16);
 FUNC_0 ("clientkick", VAR_16);
 FUNC_0 ("status", VAR_25);
 FUNC_0 ("serverinfo", VAR_24);
 FUNC_0 ("systeminfo", VAR_26);
 FUNC_0 ("dumpuser", VAR_9);
 FUNC_0 ("map_restart", VAR_20);
 FUNC_0 ("sectorlist", VAR_23);
 FUNC_0 ("map", VAR_21);
 FUNC_1( "map", VAR_4 );

 FUNC_0 ("devmap", VAR_21);
 FUNC_1( "devmap", VAR_4 );
 FUNC_0 ("spmap", VAR_21);
 FUNC_1( "spmap", VAR_4 );
 FUNC_0 ("spdevmap", VAR_21);
 FUNC_1( "spdevmap", VAR_4 );

 FUNC_0 ("killserver", VAR_18);
 if( VAR_27->integer ) {
  FUNC_0 ("say", VAR_6);
  FUNC_0 ("tell", VAR_8);
  FUNC_0 ("sayto", VAR_7);
  FUNC_1( "sayto", VAR_5 );
 }

 FUNC_0("rehashbans", VAR_22);
 FUNC_0("listbans", VAR_19);
 FUNC_0("banaddr", VAR_0);
 FUNC_0("exceptaddr", VAR_10);
 FUNC_0("bandel", VAR_1);
 FUNC_0("exceptdel", VAR_11);
 FUNC_0("flushbans", VAR_12);
}
