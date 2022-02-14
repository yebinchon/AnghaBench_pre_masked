
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int loopSound; } ;
struct TYPE_11__ {scalar_t__ moverState; struct TYPE_11__* teammaster; scalar_t__ soundPos1; struct TYPE_11__* activator; scalar_t__ wait; scalar_t__ nextthink; int think; scalar_t__ soundPos2; int soundLoop; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_12__ {scalar_t__ time; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__) ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5( gentity_t *VAR_8 ) {


 VAR_8->s.loopSound = VAR_8->soundLoop;

 if ( VAR_8->moverState == VAR_1 ) {

  FUNC_3( VAR_8, VAR_4, VAR_6.time );


  if ( VAR_8->soundPos2 ) {
   FUNC_0( VAR_8, VAR_0, VAR_8->soundPos2 );
  }


  VAR_8->think = VAR_5;
  VAR_8->nextthink = VAR_6.time + VAR_8->wait;


  if ( !VAR_8->activator ) {
   VAR_8->activator = VAR_8;
  }
  FUNC_2( VAR_8, VAR_8->activator );
 } else if ( VAR_8->moverState == VAR_2 ) {

  FUNC_3( VAR_8, VAR_3, VAR_6.time );


  if ( VAR_8->soundPos1 ) {
   FUNC_0( VAR_8, VAR_0, VAR_8->soundPos1 );
  }


  if ( VAR_8->teammaster == VAR_8 || !VAR_8->teammaster ) {
   FUNC_4( VAR_8, VAR_7 );
  }
 } else {
  FUNC_1( "Reached_BinaryMover: bad moverState" );
 }
}
