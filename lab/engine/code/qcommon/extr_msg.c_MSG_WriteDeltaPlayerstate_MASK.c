
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct playerState_s {scalar_t__* stats; scalar_t__* persistant; scalar_t__* ammo; scalar_t__* powerups; } ;
typedef struct playerState_s playerState_t ;
struct TYPE_4__ {int offset; int bits; } ;
typedef TYPE_1__ netField_t ;
typedef int msg_t ;
typedef int dummy ;
typedef int byte ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct playerState_s*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

void FUNC_6( msg_t *VAR_8, struct playerState_s *VAR_9, struct playerState_s *VAR_10 ) {
 int VAR_11;
 playerState_t VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 netField_t *VAR_18;
 int *VAR_19, *VAR_20;
 float VAR_21;
 int VAR_22, VAR_23;

 if (!VAR_9) {
  VAR_9 = &VAR_12;
  FUNC_1 (&VAR_12, 0, sizeof(VAR_12));
 }

 VAR_17 = FUNC_0( VAR_7 );

 VAR_23 = 0;
 for ( VAR_11 = 0, VAR_18 = VAR_7 ; VAR_11 < VAR_17 ; VAR_11++, VAR_18++ ) {
  VAR_19 = (int *)( (byte *)VAR_9 + VAR_18->offset );
  VAR_20 = (int *)( (byte *)VAR_10 + VAR_18->offset );
  if ( *VAR_19 != *VAR_20 ) {
   VAR_23 = VAR_11+1;
  }
 }

 FUNC_3( VAR_8, VAR_23 );

 VAR_6 += VAR_17 - VAR_23;

 for ( VAR_11 = 0, VAR_18 = VAR_7 ; VAR_11 < VAR_23 ; VAR_11++, VAR_18++ ) {
  VAR_19 = (int *)( (byte *)VAR_9 + VAR_18->offset );
  VAR_20 = (int *)( (byte *)VAR_10 + VAR_18->offset );

  if ( *VAR_19 == *VAR_20 ) {
   FUNC_2( VAR_8, 0, 1 );
   continue;
  }

  FUNC_2( VAR_8, 1, 1 );


  if ( VAR_18->bits == 0 ) {

   VAR_21 = *(float *)VAR_20;
   VAR_22 = (int)VAR_21;

   if ( VAR_22 == VAR_21 && VAR_22 + VAR_0 >= 0 &&
    VAR_22 + VAR_0 < ( 1 << VAR_1 ) ) {

    FUNC_2( VAR_8, 0, 1 );
    FUNC_2( VAR_8, VAR_22 + VAR_0, VAR_1 );
   } else {

    FUNC_2( VAR_8, 1, 1 );
    FUNC_2( VAR_8, *VAR_20, 32 );
   }
  } else {

   FUNC_2( VAR_8, *VAR_20, VAR_18->bits );
  }
 }





 VAR_13 = 0;
 for (VAR_11=0 ; VAR_11<VAR_4 ; VAR_11++) {
  if (VAR_10->stats[VAR_11] != VAR_9->stats[VAR_11]) {
   VAR_13 |= 1<<VAR_11;
  }
 }
 VAR_14 = 0;
 for (VAR_11=0 ; VAR_11<VAR_2 ; VAR_11++) {
  if (VAR_10->persistant[VAR_11] != VAR_9->persistant[VAR_11]) {
   VAR_14 |= 1<<VAR_11;
  }
 }
 VAR_15 = 0;
 for (VAR_11=0 ; VAR_11<VAR_5 ; VAR_11++) {
  if (VAR_10->ammo[VAR_11] != VAR_9->ammo[VAR_11]) {
   VAR_15 |= 1<<VAR_11;
  }
 }
 VAR_16 = 0;
 for (VAR_11=0 ; VAR_11<VAR_3 ; VAR_11++) {
  if (VAR_10->powerups[VAR_11] != VAR_9->powerups[VAR_11]) {
   VAR_16 |= 1<<VAR_11;
  }
 }

 if (!VAR_13 && !VAR_14 && !VAR_15 && !VAR_16) {
  FUNC_2( VAR_8, 0, 1 );
  VAR_6 += 4;
  return;
 }
 FUNC_2( VAR_8, 1, 1 );

 if ( VAR_13 ) {
  FUNC_2( VAR_8, 1, 1 );
  FUNC_2( VAR_8, VAR_13, VAR_4 );
  for (VAR_11=0 ; VAR_11<VAR_4 ; VAR_11++)
   if (VAR_13 & (1<<VAR_11) )
    FUNC_5 (VAR_8, VAR_10->stats[VAR_11]);
 } else {
  FUNC_2( VAR_8, 0, 1 );
 }


 if ( VAR_14 ) {
  FUNC_2( VAR_8, 1, 1 );
  FUNC_2( VAR_8, VAR_14, VAR_2 );
  for (VAR_11=0 ; VAR_11<VAR_2 ; VAR_11++)
   if (VAR_14 & (1<<VAR_11) )
    FUNC_4 (VAR_8, VAR_10->persistant[VAR_11]);
 } else {
  FUNC_2( VAR_8, 0, 1 );
 }


 if ( VAR_15 ) {
  FUNC_2( VAR_8, 1, 1 );
  FUNC_2( VAR_8, VAR_15, VAR_5 );
  for (VAR_11=0 ; VAR_11<VAR_5 ; VAR_11++)
   if (VAR_15 & (1<<VAR_11) )
    FUNC_5 (VAR_8, VAR_10->ammo[VAR_11]);
 } else {
  FUNC_2( VAR_8, 0, 1 );
 }


 if ( VAR_16 ) {
  FUNC_2( VAR_8, 1, 1 );
  FUNC_2( VAR_8, VAR_16, VAR_3 );
  for (VAR_11=0 ; VAR_11<VAR_3 ; VAR_11++)
   if (VAR_16 & (1<<VAR_11) )
    FUNC_4( VAR_8, VAR_10->powerups[VAR_11] );
 } else {
  FUNC_2( VAR_8, 0, 1 );
 }
}
