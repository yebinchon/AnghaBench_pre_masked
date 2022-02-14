
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int pickup_name; } ;
typedef TYPE_4__ gitem_t ;
struct TYPE_16__ {int event; scalar_t__ number; int clientNum; } ;
typedef TYPE_5__ entityState_t ;
struct TYPE_17__ {int medkitUsageTime; } ;
typedef TYPE_6__ clientInfo_t ;
struct TYPE_18__ {TYPE_5__ currentState; } ;
typedef TYPE_7__ centity_t ;
struct TYPE_20__ {int time; TYPE_2__* snap; } ;
struct TYPE_14__ {int useInvulnerabilitySound; int medkitSound; int useNothingSound; } ;
struct TYPE_19__ {TYPE_3__ media; TYPE_6__* clientinfo; } ;
struct TYPE_12__ {scalar_t__ clientNum; } ;
struct TYPE_13__ {TYPE_1__ ps; } ;


 TYPE_4__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,double,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;


 int VAR_5 ;
 double VAR_6 ;
 TYPE_9__ VAR_7 ;
 TYPE_8__ VAR_8 ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 char* FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4( centity_t *VAR_9 ) {
 clientInfo_t *VAR_10;
 int VAR_11, VAR_12;
 gitem_t *VAR_13;
 entityState_t *VAR_14;

 VAR_14 = &VAR_9->currentState;

 VAR_11 = (VAR_14->event & ~VAR_2) - VAR_3;
 if ( VAR_11 < 0 || VAR_11 > VAR_4 ) {
  VAR_11 = 0;
 }


 if ( VAR_14->number == VAR_7.snap->ps.clientNum ) {
  if ( !VAR_11 ) {
   FUNC_1( "No item to use", VAR_6 * 0.30, VAR_0 );
  } else {
   VAR_13 = FUNC_0( VAR_11 );
   FUNC_1( FUNC_3("Use %s", VAR_13->pickup_name), VAR_6 * 0.30, VAR_0 );
  }
 }

 switch ( VAR_11 ) {
 default:
 case 130:
  FUNC_2 (((void*)0), VAR_14->number, VAR_1, VAR_8.media.useNothingSound );
  break;

 case 128:
  break;

 case 131:
  VAR_12 = VAR_9->currentState.clientNum;
  if ( VAR_12 >= 0 && VAR_12 < VAR_5 ) {
   VAR_10 = &VAR_8.clientinfo[ VAR_12 ];
   VAR_10->medkitUsageTime = VAR_7.time;
  }
  FUNC_2 (((void*)0), VAR_14->number, VAR_1, VAR_8.media.medkitSound );
  break;
 }

}
