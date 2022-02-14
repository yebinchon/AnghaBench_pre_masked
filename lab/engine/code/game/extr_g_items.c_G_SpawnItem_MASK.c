
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ giType; } ;
typedef TYPE_2__ gitem_t ;
struct TYPE_9__ {int generic1; int id; } ;
struct TYPE_11__ {double physicsBounce; int spawnflags; TYPE_1__ s; int speed; int think; scalar_t__ nextthink; TYPE_2__* item; int id; int wait; int random; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_12__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_4__ VAR_4 ;

void FUNC_4 (gentity_t *VAR_5, gitem_t *VAR_6) {
 FUNC_2( "random", "0", &VAR_5->random );
 FUNC_2( "wait", "0", &VAR_5->wait );
 VAR_5->s.id = VAR_5->id;

 FUNC_3( VAR_6 );
 if ( FUNC_0(VAR_6) )
  return;

 VAR_5->item = VAR_6;


 VAR_5->nextthink = VAR_4.time + VAR_0 * 2;
 VAR_5->think = VAR_1;

 VAR_5->physicsBounce = 0.50;

 if ( VAR_6->giType == VAR_3 ) {
  FUNC_1( "sound/items/poweruprespawn.wav" );
  FUNC_2( "noglobalsound", "0", &VAR_5->speed);
 }






}
