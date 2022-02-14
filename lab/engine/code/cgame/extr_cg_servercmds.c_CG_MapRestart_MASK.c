
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* time; int mapRestart; void* levelShot; void* intermissionStarted; scalar_t__ rewardStack; scalar_t__ rewardTime; scalar_t__ timelimitWarnings; scalar_t__ fraglimitWarnings; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__* string; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {scalar_t__ voteTime; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_9( void ) {
 if ( VAR_3.integer ) {
  FUNC_3( "CG_MapRestart\n" );
 }

 FUNC_1();
 FUNC_2();
 FUNC_0 ();


 VAR_0.fraglimitWarnings = 0;

 VAR_0.timelimitWarnings = 0;
 VAR_0.rewardTime = 0;
 VAR_0.rewardStack = 0;
 VAR_0.intermissionStarted = VAR_6;
 VAR_0.levelShot = VAR_6;

 VAR_5.voteTime = 0;

 VAR_0.mapRestart = VAR_7;

 FUNC_4();

 FUNC_6(VAR_7);
 FUNC_5("cg_thirdPerson", "0");
}
