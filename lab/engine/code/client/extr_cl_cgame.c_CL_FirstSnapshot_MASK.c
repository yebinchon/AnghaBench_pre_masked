
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


struct TYPE_7__ {int snapFlags; scalar_t__ serverTime; } ;
struct TYPE_12__ {TYPE_1__ snap; scalar_t__ oldServerTime; scalar_t__ serverTimeDelta; } ;
struct TYPE_11__ {scalar_t__* string; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {float* voipGain; int voipTargets; void* voipMuteAll; scalar_t__ voipCodecInitialized; void** voipIgnore; int * opusDecoder; int opusEncoder; scalar_t__ timeDemoBaseTime; int state; } ;
struct TYPE_8__ {scalar_t__ realtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 TYPE_5__* VAR_7 ;
 TYPE_4__* VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int,int*) ;
 int FUNC_9 (int,int,int ,int*) ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;

void FUNC_10( void ) {

 if ( VAR_6.snap.snapFlags & VAR_5 ) {
  return;
 }
 VAR_9.state = VAR_0;


 VAR_6.serverTimeDelta = VAR_6.snap.serverTime - VAR_10.realtime;
 VAR_6.oldServerTime = VAR_6.snap.serverTime;

 VAR_9.timeDemoBaseTime = VAR_6.snap.serverTime;





 if ( VAR_7->string[0] ) {
  FUNC_0( VAR_7->string );
  FUNC_5( "activeAction", "" );
 }
}
