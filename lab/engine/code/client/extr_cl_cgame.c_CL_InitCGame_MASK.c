
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vmInterpret_t ;
struct TYPE_5__ {char* stringData; int* stringOffsets; } ;
struct TYPE_8__ {int mapname; TYPE_1__ gameState; } ;
struct TYPE_7__ {int state; int demoplaying; int clientNum; int lastExecutedServerCommand; int serverMessageSequence; } ;
struct TYPE_6__ {int (* EndRegistration ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,char*,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_5 ;
 char* FUNC_8 (char const*,char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int ,int ,int ,int ,int ) ;
 int FUNC_12 (char*,int ,scalar_t__) ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 TYPE_2__ VAR_13 ;
 int FUNC_13 () ;

void FUNC_14( void ) {
 const char *VAR_14;
 const char *VAR_15;
 int VAR_16, VAR_17;
 vmInterpret_t VAR_18;

 VAR_16 = FUNC_10();


 FUNC_5();


 VAR_14 = VAR_9.gameState.stringData + VAR_9.gameState.stringOffsets[ VAR_4 ];
 VAR_15 = FUNC_8( VAR_14, "mapname" );
 FUNC_3( VAR_9.mapname, sizeof( VAR_9.mapname ), "maps/%s.bsp", VAR_15 );


 VAR_18 = FUNC_7("vm_cgame");
 if(VAR_11)
 {

  if(VAR_18 != VAR_7 && VAR_18 != VAR_6)
   VAR_18 = VAR_7;
 }

 VAR_8 = FUNC_12( "cgame", VAR_3, VAR_18 );
 if ( !VAR_8 ) {
  FUNC_0( VAR_5, "VM_Create on cgame failed" );
 }
 VAR_12.state = VAR_0;




 FUNC_11( VAR_8, VAR_2, VAR_12.serverMessageSequence, VAR_12.lastExecutedServerCommand, VAR_12.clientNum );


 if ( !VAR_12.demoplaying && !VAR_10 )
  FUNC_6();



 VAR_12.state = VAR_1;

 VAR_17 = FUNC_10();

 FUNC_1( "CL_InitCGame: %5.2f seconds\n", (VAR_17-VAR_16)/1000.0 );



 VAR_13.EndRegistration();


 if (!FUNC_9()) {
  FUNC_2();
 }


 FUNC_4 ();
}
