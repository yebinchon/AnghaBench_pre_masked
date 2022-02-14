
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int eFlags; } ;
struct TYPE_10__ {int watertype; TYPE_3__* client; scalar_t__ waterlevel; TYPE_1__ s; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_11__ {scalar_t__ snd_fry; } ;
struct TYPE_8__ {scalar_t__ loopSound; } ;
struct TYPE_9__ {TYPE_2__ ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 TYPE_5__ VAR_3 ;

void FUNC_1( gentity_t *VAR_4 ) {






 if (VAR_4->waterlevel && (VAR_4->watertype&(VAR_0|VAR_1)) ) {
  VAR_4->client->ps.loopSound = VAR_3.snd_fry;
 } else {
  VAR_4->client->ps.loopSound = 0;
 }
}
