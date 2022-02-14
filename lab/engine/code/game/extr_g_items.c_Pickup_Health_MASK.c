
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int count; int health; TYPE_3__* item; TYPE_2__* client; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_12__ {scalar_t__ giTag; } ;
struct TYPE_10__ {int quantity; } ;
struct TYPE_8__ {size_t* stats; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_5__* VAR_6 ;

int FUNC_0 (gentity_t *VAR_7, gentity_t *VAR_8) {
 int VAR_9;
 int VAR_10;
 if ( VAR_7->item->quantity != 5 && VAR_7->item->quantity != 100 ) {
  VAR_9 = VAR_8->client->ps.stats[VAR_4];
 } else {
  VAR_9 = VAR_8->client->ps.stats[VAR_4] * 2;
 }

 if ( VAR_7->count ) {
  VAR_10 = VAR_7->count;
 } else {
  VAR_10 = VAR_7->item->quantity;
 }

 VAR_8->health += VAR_10;

 if (VAR_8->health > VAR_9 ) {
  VAR_8->health = VAR_9;
 }
 VAR_8->client->ps.stats[VAR_3] = VAR_8->health;

 if ( VAR_7->item->quantity == 100 ) {
  return VAR_2;
 }

 return VAR_1;
}
