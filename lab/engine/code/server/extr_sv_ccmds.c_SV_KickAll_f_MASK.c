
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_1__ remoteAddress; } ;
struct TYPE_10__ {int lastPacketTime; TYPE_2__ netchan; int state; } ;
typedef TYPE_3__ client_t ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int time; TYPE_3__* clients; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*,char*) ;
 TYPE_6__* VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static void FUNC_2( void ) {
 client_t *VAR_4;
 int VAR_5;


 if( !VAR_1->integer ) {
  FUNC_0( "Server is not running.\n" );
  return;
 }

 for( VAR_5 = 0, VAR_4 = VAR_3.clients; VAR_5 < VAR_2->integer; VAR_5++, VAR_4++ ) {
  if( !VAR_4->state ) {
   continue;
  }

  if( VAR_4->netchan.remoteAddress.type == VAR_0 ) {
   continue;
  }

  FUNC_1( VAR_4, "was kicked" );
  VAR_4->lastPacketTime = VAR_3.time;
 }
}
