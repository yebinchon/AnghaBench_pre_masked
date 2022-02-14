
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_10__ {int waterlevel; scalar_t__ health; int damage; scalar_t__ pain_debounce_time; int watertype; TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_11__ {scalar_t__ time; } ;
struct TYPE_8__ {scalar_t__* powerups; } ;
struct TYPE_9__ {scalar_t__ airOutTime; TYPE_1__ ps; scalar_t__ noclip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int *,int *,int *,int *,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 TYPE_4__ VAR_8 ;

void FUNC_2( gentity_t *VAR_9 ) {
 qboolean VAR_10;
 int VAR_11;

 if ( VAR_9->client->noclip ) {
  VAR_9->client->airOutTime = VAR_8.time + 12000;
  return;
 }

 VAR_11 = VAR_9->waterlevel;

 VAR_10 = VAR_9->client->ps.powerups[VAR_7] > VAR_8.time;




 if ( VAR_11 == 3 ) {

  if ( VAR_10 ) {
   VAR_9->client->airOutTime = VAR_8.time + 10000;
  }


  if ( VAR_9->client->airOutTime < VAR_8.time) {

   VAR_9->client->airOutTime += 1000;
   if ( VAR_9->health > 0 ) {

    VAR_9->damage += 2;
    if (VAR_9->damage > 15)
     VAR_9->damage = 15;


    VAR_9->pain_debounce_time = VAR_8.time + 200;

    FUNC_1 (VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_9->damage, VAR_2, VAR_6);
   }
  }
 } else {
  VAR_9->client->airOutTime = VAR_8.time + 12000;
  VAR_9->damage = 2;
 }




 if (VAR_11 &&
  (VAR_9->watertype&(VAR_0|VAR_1)) ) {
  if (VAR_9->health > 0
   && VAR_9->pain_debounce_time <= VAR_8.time ) {

   if ( VAR_10 ) {
    FUNC_0( VAR_9, VAR_3, 0 );
   } else {
    if (VAR_9->watertype & VAR_0) {
     FUNC_1 (VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      30*VAR_11, 0, VAR_4);
    }

    if (VAR_9->watertype & VAR_1) {
     FUNC_1 (VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      10*VAR_11, 0, VAR_5);
    }
   }
  }
 }
}
