
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {void** powerups; void** ammo; void** persistant; void** stats; } ;
typedef TYPE_1__ playerState_t ;
struct TYPE_16__ {int offset; int bits; int name; } ;
typedef TYPE_2__ netField_t ;
struct TYPE_17__ {scalar_t__ bit; int readcount; } ;
typedef TYPE_3__ msg_t ;
typedef int dummy ;
typedef int byte ;
struct TYPE_18__ {int integer; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 void* FUNC_7 (TYPE_3__*) ;
 void* FUNC_8 (TYPE_3__*) ;
 TYPE_5__* VAR_8 ;
 TYPE_2__* VAR_9 ;

void FUNC_9 (msg_t *VAR_10, playerState_t *VAR_11, playerState_t *VAR_12 ) {
 int VAR_13, VAR_14;
 int VAR_15;
 netField_t *VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;
 int *VAR_21, *VAR_22;
 int VAR_23;
 playerState_t VAR_24;

 if ( !VAR_11 ) {
  VAR_11 = &VAR_24;
  FUNC_2( &VAR_24, 0, sizeof( VAR_24 ) );
 }
 *VAR_12 = *VAR_11;

 if ( VAR_10->bit == 0 ) {
  VAR_18 = VAR_10->readcount * 8 - VAR_3;
 } else {
  VAR_18 = ( VAR_10->readcount - 1 ) * 8 + VAR_10->bit - VAR_3;
 }



 if ( VAR_8 && ( VAR_8->integer >= 2 || VAR_8->integer == -2 ) ) {
  VAR_20 = 1;
  FUNC_3( "%3i: playerstate ", VAR_10->readcount );
 } else {
  VAR_20 = 0;
 }

 VAR_17 = FUNC_0( VAR_9 );
 VAR_14 = FUNC_6(VAR_10);

 if ( VAR_14 > VAR_17 || VAR_14 < 0 ) {
  FUNC_1( VAR_0, "invalid playerState field count" );
 }

 for ( VAR_13 = 0, VAR_16 = VAR_9 ; VAR_13 < VAR_14 ; VAR_13++, VAR_16++ ) {
  VAR_21 = (int *)( (byte *)VAR_11 + VAR_16->offset );
  VAR_22 = (int *)( (byte *)VAR_12 + VAR_16->offset );

  if ( ! FUNC_5( VAR_10, 1 ) ) {

   *VAR_22 = *VAR_21;
  } else {
   if ( VAR_16->bits == 0 ) {

    if ( FUNC_5( VAR_10, 1 ) == 0 ) {

     VAR_23 = FUNC_5( VAR_10, VAR_2 );

     VAR_23 -= VAR_1;
     *(float *)VAR_22 = VAR_23;
     if ( VAR_20 ) {
      FUNC_3( "%s:%i ", VAR_16->name, VAR_23 );
     }
    } else {

     *VAR_22 = FUNC_5( VAR_10, 32 );
     if ( VAR_20 ) {
      FUNC_3( "%s:%f ", VAR_16->name, *(float *)VAR_22 );
     }
    }
   } else {

    *VAR_22 = FUNC_5( VAR_10, VAR_16->bits );
    if ( VAR_20 ) {
     FUNC_3( "%s:%i ", VAR_16->name, *VAR_22 );
    }
   }
  }
 }
 for ( VAR_13=VAR_14,VAR_16 = &VAR_9[VAR_14];VAR_13<VAR_17; VAR_13++, VAR_16++) {
  VAR_21 = (int *)( (byte *)VAR_11 + VAR_16->offset );
  VAR_22 = (int *)( (byte *)VAR_12 + VAR_16->offset );

  *VAR_22 = *VAR_21;
 }



 if (FUNC_5( VAR_10, 1 ) ) {

  if ( FUNC_5( VAR_10, 1 ) ) {
   FUNC_4("PS_STATS");
   VAR_15 = FUNC_5 (VAR_10, VAR_6);
   for (VAR_13=0 ; VAR_13<VAR_6 ; VAR_13++) {
    if (VAR_15 & (1<<VAR_13) ) {
     VAR_12->stats[VAR_13] = FUNC_8(VAR_10);
    }
   }
  }


  if ( FUNC_5( VAR_10, 1 ) ) {
   FUNC_4("PS_PERSISTANT");
   VAR_15 = FUNC_5 (VAR_10, VAR_4);
   for (VAR_13=0 ; VAR_13<VAR_4 ; VAR_13++) {
    if (VAR_15 & (1<<VAR_13) ) {
     VAR_12->persistant[VAR_13] = FUNC_7(VAR_10);
    }
   }
  }


  if ( FUNC_5( VAR_10, 1 ) ) {
   FUNC_4("PS_AMMO");
   VAR_15 = FUNC_5 (VAR_10, VAR_7);
   for (VAR_13=0 ; VAR_13<VAR_7 ; VAR_13++) {
    if (VAR_15 & (1<<VAR_13) ) {
     VAR_12->ammo[VAR_13] = FUNC_8(VAR_10);
    }
   }
  }


  if ( FUNC_5( VAR_10, 1 ) ) {
   FUNC_4("PS_POWERUPS");
   VAR_15 = FUNC_5 (VAR_10, VAR_5);
   for (VAR_13=0 ; VAR_13<VAR_5 ; VAR_13++) {
    if (VAR_15 & (1<<VAR_13) ) {
     VAR_12->powerups[VAR_13] = FUNC_7(VAR_10);
    }
   }
  }
 }

 if ( VAR_20 ) {
  if ( VAR_10->bit == 0 ) {
   VAR_19 = VAR_10->readcount * 8 - VAR_3;
  } else {
   VAR_19 = ( VAR_10->readcount - 1 ) * 8 + VAR_10->bit - VAR_3;
  }
  FUNC_3( " (%i bits)\n", VAR_19 - VAR_18 );
 }
}
