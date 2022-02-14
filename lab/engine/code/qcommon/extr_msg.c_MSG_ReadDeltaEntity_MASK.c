
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int offset; int bits; int name; } ;
typedef TYPE_1__ netField_t ;
struct TYPE_14__ {scalar_t__ bit; int readcount; } ;
typedef TYPE_2__ msg_t ;
struct TYPE_15__ {int number; } ;
typedef TYPE_3__ entityState_t ;
typedef int byte ;
struct TYPE_16__ {int integer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_5__* VAR_5 ;
 TYPE_1__* VAR_6 ;

void FUNC_6( msg_t *VAR_7, entityState_t *VAR_8, entityState_t *VAR_9,
       int VAR_10) {
 int VAR_11, VAR_12;
 int VAR_13;
 netField_t *VAR_14;
 int *VAR_15, *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;

 if ( VAR_10 < 0 || VAR_10 >= VAR_4) {
  FUNC_1( VAR_0, "Bad delta entity number: %i", VAR_10 );
 }

 if ( VAR_7->bit == 0 ) {
  VAR_19 = VAR_7->readcount * 8 - VAR_3;
 } else {
  VAR_19 = ( VAR_7->readcount - 1 ) * 8 + VAR_7->bit - VAR_3;
 }


 if ( FUNC_4( VAR_7, 1 ) == 1 ) {
  FUNC_2( VAR_9, 0, sizeof( *VAR_9 ) );
  VAR_9->number = VAR_4 - 1;
  if ( VAR_5 && ( VAR_5->integer >= 2 || VAR_5->integer == -1 ) ) {
   FUNC_3( "%3i: #%-3i remove\n", VAR_7->readcount, VAR_10 );
  }
  return;
 }


 if ( FUNC_4( VAR_7, 1 ) == 0 ) {
  *VAR_9 = *VAR_8;
  VAR_9->number = VAR_10;
  return;
 }

 VAR_13 = FUNC_0( VAR_6 );
 VAR_12 = FUNC_5(VAR_7);

 if ( VAR_12 > VAR_13 || VAR_12 < 0 ) {
  FUNC_1( VAR_0, "invalid entityState field count" );
 }



 if ( VAR_5 && ( VAR_5->integer >= 2 || VAR_5->integer == -1 ) ) {
  VAR_17 = 1;
  FUNC_3( "%3i: #%-3i ", VAR_7->readcount, VAR_9->number );
 } else {
  VAR_17 = 0;
 }

 VAR_9->number = VAR_10;

 for ( VAR_11 = 0, VAR_14 = VAR_6 ; VAR_11 < VAR_12 ; VAR_11++, VAR_14++ ) {
  VAR_15 = (int *)( (byte *)VAR_8 + VAR_14->offset );
  VAR_16 = (int *)( (byte *)VAR_9 + VAR_14->offset );

  if ( ! FUNC_4( VAR_7, 1 ) ) {

   *VAR_16 = *VAR_15;
  } else {
   if ( VAR_14->bits == 0 ) {

    if ( FUNC_4( VAR_7, 1 ) == 0 ) {
      *(float *)VAR_16 = 0.0f;
    } else {
     if ( FUNC_4( VAR_7, 1 ) == 0 ) {

      VAR_18 = FUNC_4( VAR_7, VAR_2 );

      VAR_18 -= VAR_1;
      *(float *)VAR_16 = VAR_18;
      if ( VAR_17 ) {
       FUNC_3( "%s:%i ", VAR_14->name, VAR_18 );
      }
     } else {

      *VAR_16 = FUNC_4( VAR_7, 32 );
      if ( VAR_17 ) {
       FUNC_3( "%s:%f ", VAR_14->name, *(float *)VAR_16 );
      }
     }
    }
   } else {
    if ( FUNC_4( VAR_7, 1 ) == 0 ) {
     *VAR_16 = 0;
    } else {

     *VAR_16 = FUNC_4( VAR_7, VAR_14->bits );
     if ( VAR_17 ) {
      FUNC_3( "%s:%i ", VAR_14->name, *VAR_16 );
     }
    }
   }

  }
 }
 for ( VAR_11 = VAR_12, VAR_14 = &VAR_6[VAR_12] ; VAR_11 < VAR_13 ; VAR_11++, VAR_14++ ) {
  VAR_15 = (int *)( (byte *)VAR_8 + VAR_14->offset );
  VAR_16 = (int *)( (byte *)VAR_9 + VAR_14->offset );

  *VAR_16 = *VAR_15;
 }

 if ( VAR_17 ) {
  if ( VAR_7->bit == 0 ) {
   VAR_20 = VAR_7->readcount * 8 - VAR_3;
  } else {
   VAR_20 = ( VAR_7->readcount - 1 ) * 8 + VAR_7->bit - VAR_3;
  }
  FUNC_3( " (%i bits)\n", VAR_20 - VAR_19 );
 }
}
