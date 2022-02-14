
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t size; int * data; scalar_t__ read; } ;
struct TYPE_8__ {int remaining; TYPE_4__ msg; int socket; } ;
typedef TYPE_1__ socket_t ;
struct TYPE_9__ {int size; } ;
typedef TYPE_2__ netmessage_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 void* FUNC_1 (int ,int *,int,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*,int) ;
 int FUNC_4 (char*) ;

int FUNC_5( socket_t *VAR_1, netmessage_t *VAR_2 ){
 int VAR_3;

 if ( VAR_1->remaining > 0 ) {
  VAR_3 = FUNC_1( VAR_1->socket, &VAR_1->msg.data[VAR_1->msg.size], VAR_1->remaining, ((void*)0) );
  if ( VAR_3 == -1 ) {
   FUNC_2( "Net_Receive: read error\n" );
   return -1;
  }
  VAR_1->remaining -= VAR_3;
  VAR_1->msg.size += VAR_3;
  if ( VAR_1->remaining <= 0 ) {
   VAR_1->remaining = 0;
   FUNC_3( VAR_2, &VAR_1->msg, sizeof( netmessage_t ) );
   VAR_1->msg.size = 0;
   return VAR_2->size - 4;
  }
  return 0;
 }
 VAR_1->msg.size = FUNC_1( VAR_1->socket, VAR_1->msg.data, 4, ((void*)0) );
 if ( VAR_1->msg.size == 0 ) {
  return 0;
 }
 if ( VAR_1->msg.size == -1 ) {
  FUNC_2( "Net_Receive: size header read error\n" );
  return -1;
 }

 VAR_1->msg.read = 0;
 VAR_1->remaining = FUNC_0( &VAR_1->msg );
 if ( VAR_1->remaining == 0 ) {
  return 0;
 }
 if ( VAR_1->remaining < 0 || VAR_1->remaining > VAR_0 ) {
  FUNC_2( "Net_Receive: invalid message size %d\n", VAR_1->remaining );
  return -1;
 }

 VAR_3 = FUNC_1( VAR_1->socket, &VAR_1->msg.data[VAR_1->msg.size], VAR_1->remaining, ((void*)0) );
 if ( VAR_3 == -1 ) {
  FUNC_2( "Net_Receive: read error\n" );
  return -1;
 }
 VAR_1->remaining -= VAR_3;
 VAR_1->msg.size += VAR_3;
 if ( VAR_1->remaining <= 0 ) {
  VAR_1->remaining = 0;
  FUNC_3( VAR_2, &VAR_1->msg, sizeof( netmessage_t ) );
  VAR_1->msg.size = 0;
  return VAR_2->size - 4;
 }




 return 0;
}
