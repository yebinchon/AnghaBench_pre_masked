
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int think; scalar_t__ nextthink; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_14__ {size_t* sortedClients; int numNonSpectatorClients; TYPE_2__* clients; scalar_t__ time; } ;
struct TYPE_11__ {int* persistant; } ;
struct TYPE_12__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int ,int *,int) ;
 TYPE_3__* FUNC_1 () ;
 int * VAR_3 ;
 TYPE_7__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_3__* VAR_10 ;

void FUNC_2( void ) {
 gentity_t *VAR_11;
 gentity_t *VAR_12;

 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);

 VAR_12 = FUNC_1();

 VAR_11 = FUNC_0( VAR_12, VAR_5, &VAR_3[VAR_4.sortedClients[0]],
    VAR_4.clients[ VAR_4.sortedClients[0] ].ps.persistant[VAR_1] &~ VAR_2 );
 if ( VAR_11 ) {
  VAR_11->nextthink = VAR_4.time + 2000;
  VAR_11->think = VAR_0;
  VAR_8 = VAR_11;
 }

 VAR_11 = FUNC_0( VAR_12, VAR_6, &VAR_3[VAR_4.sortedClients[1]],
    VAR_4.clients[ VAR_4.sortedClients[1] ].ps.persistant[VAR_1] &~ VAR_2 );
 if ( VAR_11 ) {
  VAR_9 = VAR_11;
 }

 if ( VAR_4.numNonSpectatorClients > 2 ) {
  VAR_11 = FUNC_0( VAR_12, VAR_7, &VAR_3[VAR_4.sortedClients[2]],
    VAR_4.clients[ VAR_4.sortedClients[2] ].ps.persistant[VAR_1] &~ VAR_2 );
  if ( VAR_11 ) {
   VAR_10 = VAR_11;
  }
 }
}
