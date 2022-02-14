
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* gentity; scalar_t__* name; int state; } ;
typedef TYPE_3__ client_t ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {TYPE_3__* clients; } ;
struct TYPE_6__ {int svFlags; } ;
struct TYPE_7__ {TYPE_1__ r; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_4__ VAR_4 ;

void FUNC_1( int VAR_5 ) {
 client_t *VAR_6;

 if ( VAR_5 < 0 || VAR_5 >= VAR_3->integer ) {
  FUNC_0( VAR_1, "SV_BotFreeClient: bad clientNum: %i", VAR_5 );
 }
 VAR_6 = &VAR_4.clients[VAR_5];
 VAR_6->state = VAR_0;
 VAR_6->name[0] = 0;
 if ( VAR_6->gentity ) {
  VAR_6->gentity->r.svFlags &= ~VAR_2;
 }
}
