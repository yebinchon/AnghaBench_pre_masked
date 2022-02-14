
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


typedef int qboolean ;
struct TYPE_16__ {scalar_t__ type; } ;
struct TYPE_15__ {TYPE_2__* outPackets; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_9__ {int outgoingSequence; TYPE_8__ remoteAddress; } ;
struct TYPE_12__ {scalar_t__ state; int lastPacketSentTime; TYPE_1__ netchan; scalar_t__* downloadTempName; scalar_t__ demoplaying; } ;
struct TYPE_11__ {int realtime; } ;
struct TYPE_10__ {int p_realtime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_8__) ;
 TYPE_7__ VAR_5 ;
 TYPE_6__* VAR_6 ;
 TYPE_5__* VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

qboolean FUNC_2( void ) {
 int VAR_12;
 int VAR_13;


 if ( VAR_8.demoplaying || VAR_8.state == VAR_1 ) {
  return VAR_10;
 }


 if ( *VAR_8.downloadTempName &&
  VAR_9.realtime - VAR_8.lastPacketSentTime < 50 ) {
  return VAR_10;
 }



 if ( VAR_8.state != VAR_0 &&
  VAR_8.state != VAR_2 &&
  !*VAR_8.downloadTempName &&
  VAR_9.realtime - VAR_8.lastPacketSentTime < 1000 ) {
  return VAR_10;
 }


 if ( VAR_8.netchan.remoteAddress.type == VAR_3 ) {
  return VAR_11;
 }


 if ( VAR_6->integer && FUNC_1( VAR_8.netchan.remoteAddress ) ) {
  return VAR_11;
 }


 if ( VAR_7->integer < 15 ) {
  FUNC_0( "cl_maxpackets", "15" );
 } else if ( VAR_7->integer > 125 ) {
  FUNC_0( "cl_maxpackets", "125" );
 }
 VAR_12 = (VAR_8.netchan.outgoingSequence - 1) & VAR_4;
 VAR_13 = VAR_9.realtime - VAR_5.outPackets[ VAR_12 ].p_realtime;
 if ( VAR_13 < 1000 / VAR_7->integer ) {

  return VAR_10;
 }

 return VAR_11;
}
