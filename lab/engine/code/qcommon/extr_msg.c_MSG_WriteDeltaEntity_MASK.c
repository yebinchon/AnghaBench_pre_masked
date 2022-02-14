
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct entityState_s {int number; } ;
typedef int qboolean ;
struct TYPE_4__ {int offset; int bits; } ;
typedef TYPE_1__ netField_t ;
typedef int msg_t ;
typedef int byte ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

void FUNC_5( msg_t *VAR_7, struct entityState_s *VAR_8, struct entityState_s *VAR_9,
         qboolean VAR_10 ) {
 int VAR_11, VAR_12;
 int VAR_13;
 netField_t *VAR_14;
 int VAR_15;
 float VAR_16;
 int *VAR_17, *VAR_18;

 VAR_13 = FUNC_0( VAR_5 );





 FUNC_4( VAR_13 + 1 == sizeof( *VAR_8 )/4 );


 if ( VAR_9 == ((void*)0) ) {
  if ( VAR_8 == ((void*)0) ) {
   return;
  }
  FUNC_2( VAR_7, VAR_8->number, VAR_3 );
  FUNC_2( VAR_7, 1, 1 );
  return;
 }

 if ( VAR_9->number < 0 || VAR_9->number >= VAR_4 ) {
  FUNC_1 (VAR_0, "MSG_WriteDeltaEntity: Bad entity number: %i", VAR_9->number );
 }

 VAR_12 = 0;

 for ( VAR_11 = 0, VAR_14 = VAR_5 ; VAR_11 < VAR_13 ; VAR_11++, VAR_14++ ) {
  VAR_17 = (int *)( (byte *)VAR_8 + VAR_14->offset );
  VAR_18 = (int *)( (byte *)VAR_9 + VAR_14->offset );
  if ( *VAR_17 != *VAR_18 ) {
   VAR_12 = VAR_11+1;
  }
 }

 if ( VAR_12 == 0 ) {

  if ( !VAR_10 ) {
   return;
  }

  FUNC_2( VAR_7, VAR_9->number, VAR_3 );
  FUNC_2( VAR_7, 0, 1 );
  FUNC_2( VAR_7, 0, 1 );
  return;
 }

 FUNC_2( VAR_7, VAR_9->number, VAR_3 );
 FUNC_2( VAR_7, 0, 1 );
 FUNC_2( VAR_7, 1, 1 );

 FUNC_3( VAR_7, VAR_12 );

 VAR_6 += VAR_13;

 for ( VAR_11 = 0, VAR_14 = VAR_5 ; VAR_11 < VAR_12 ; VAR_11++, VAR_14++ ) {
  VAR_17 = (int *)( (byte *)VAR_8 + VAR_14->offset );
  VAR_18 = (int *)( (byte *)VAR_9 + VAR_14->offset );

  if ( *VAR_17 == *VAR_18 ) {
   FUNC_2( VAR_7, 0, 1 );
   continue;
  }

  FUNC_2( VAR_7, 1, 1 );

  if ( VAR_14->bits == 0 ) {

   VAR_16 = *(float *)VAR_18;
   VAR_15 = (int)VAR_16;

   if (VAR_16 == 0.0f) {
     FUNC_2( VAR_7, 0, 1 );
     VAR_6 += VAR_2;
   } else {
    FUNC_2( VAR_7, 1, 1 );
    if ( VAR_15 == VAR_16 && VAR_15 + VAR_1 >= 0 &&
     VAR_15 + VAR_1 < ( 1 << VAR_2 ) ) {

     FUNC_2( VAR_7, 0, 1 );
     FUNC_2( VAR_7, VAR_15 + VAR_1, VAR_2 );
    } else {

     FUNC_2( VAR_7, 1, 1 );
     FUNC_2( VAR_7, *VAR_18, 32 );
    }
   }
  } else {
   if (*VAR_18 == 0) {
    FUNC_2( VAR_7, 0, 1 );
   } else {
    FUNC_2( VAR_7, 1, 1 );

    FUNC_2( VAR_7, *VAR_18, VAR_14->bits );
   }
  }
 }
}
