
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reliableAcknowledge; int reliableSequence; int ** reliableCommands; int lastPacketTime; } ;
typedef TYPE_1__ client_t ;
struct TYPE_4__ {int time; TYPE_1__* clients; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

int FUNC_1( int VAR_4, char *VAR_5, int VAR_6 )
{
 client_t *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_3.clients[VAR_4];
 VAR_7->lastPacketTime = VAR_3.time;

 if ( VAR_7->reliableAcknowledge == VAR_7->reliableSequence ) {
  return VAR_1;
 }

 VAR_7->reliableAcknowledge++;
 VAR_8 = VAR_7->reliableAcknowledge & ( VAR_0 - 1 );

 if ( !VAR_7->reliableCommands[VAR_8][0] ) {
  return VAR_1;
 }

 FUNC_0( VAR_5, VAR_7->reliableCommands[VAR_8], VAR_6 );
 return VAR_2;
}
