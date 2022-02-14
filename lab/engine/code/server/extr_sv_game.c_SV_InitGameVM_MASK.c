
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


typedef int qboolean ;
struct TYPE_13__ {int time; int entityParsePoint; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {TYPE_2__* clients; } ;
struct TYPE_8__ {int (* make_random_seed ) (int ) ;} ;
struct TYPE_10__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_9__ {int * gentity; } ;
typedef TYPE_3__ DeepmindContext ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 TYPE_3__* FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 TYPE_6__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static void FUNC_4( qboolean VAR_5 ) {
 int VAR_6;
 DeepmindContext* VAR_7 = FUNC_2();
 int VAR_8 = VAR_7->hooks.make_random_seed( VAR_7->userdata );


 VAR_2.entityParsePoint = FUNC_0();





 for ( VAR_6 = 0 ; VAR_6 < VAR_3->integer ; VAR_6++ ) {
  VAR_4.clients[VAR_6].gentity = ((void*)0);
 }




 FUNC_1 (VAR_1, VAR_0, VAR_2.time, VAR_8, VAR_5);
}
