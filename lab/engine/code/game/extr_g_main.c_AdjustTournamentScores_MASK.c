
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int* sortedClients; TYPE_3__* clients; } ;
struct TYPE_6__ {int losses; int wins; } ;
struct TYPE_5__ {scalar_t__ connected; } ;
struct TYPE_7__ {TYPE_2__ sess; TYPE_1__ pers; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_4__ VAR_1 ;

void FUNC_1( void ) {
 int VAR_2;

 VAR_2 = VAR_1.sortedClients[0];
 if ( VAR_1.clients[ VAR_2 ].pers.connected == VAR_0 ) {
  VAR_1.clients[ VAR_2 ].sess.wins++;
  FUNC_0( VAR_2 );
 }

 VAR_2 = VAR_1.sortedClients[1];
 if ( VAR_1.clients[ VAR_2 ].pers.connected == VAR_0 ) {
  VAR_1.clients[ VAR_2 ].sess.losses++;
  FUNC_0( VAR_2 );
 }

}
