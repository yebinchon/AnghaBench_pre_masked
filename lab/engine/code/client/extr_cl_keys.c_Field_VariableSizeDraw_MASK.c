
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {int widthInChars; char* buffer; int scroll; int cursor; } ;
typedef TYPE_1__ field_t ;
struct TYPE_5__ {int realtime; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int,char*,double,scalar_t__) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,char*,float*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*) ;

void FUNC_6( field_t *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, qboolean VAR_11,
  qboolean VAR_12 ) {
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 char VAR_17[VAR_1];
 int VAR_18;

 VAR_14 = VAR_6->widthInChars - 1;
 VAR_13 = FUNC_5( VAR_6->buffer );


 if ( VAR_13 <= VAR_14 ) {
  VAR_15 = 0;
 } else {
  if ( VAR_6->scroll + VAR_14 > VAR_13 ) {
   VAR_6->scroll = VAR_13 - VAR_14;
   if ( VAR_6->scroll < 0 ) {
    VAR_6->scroll = 0;
   }
  }
  VAR_15 = VAR_6->scroll;
 }

 if ( VAR_15 + VAR_14 > VAR_13 ) {
  VAR_14 = VAR_13 - VAR_15;
 }


 if ( VAR_14 >= VAR_1 ) {
  FUNC_0( VAR_0, "drawLen >= MAX_STRING_CHARS" );
 }

 FUNC_1( VAR_17, VAR_6->buffer + VAR_15, VAR_14 );
 VAR_17[ VAR_14 ] = 0;


 if ( VAR_10 == VAR_2 ) {
  float VAR_19[4];

  VAR_19[0] = VAR_19[1] = VAR_19[2] = VAR_19[3] = 1.0;
  FUNC_4( VAR_7, VAR_8, VAR_17, VAR_19, VAR_5, VAR_12 );
 } else {

  FUNC_2( VAR_7, VAR_8, VAR_17, 1.0, VAR_12 );
 }


 if ( VAR_11 ) {
  if ( (int)( VAR_3.realtime >> 8 ) & 1 ) {
   return;
  }

  if ( VAR_4 ) {
   VAR_16 = 11;
  } else {
   VAR_16 = 10;
  }

  VAR_18 = VAR_14 - FUNC_5( VAR_17 );

  if ( VAR_10 == VAR_2 ) {
   FUNC_3( VAR_7 + ( VAR_6->cursor - VAR_15 - VAR_18 ) * VAR_10, VAR_8, VAR_16 );
  } else {
   VAR_17[0] = VAR_16;
   VAR_17[1] = 0;
   FUNC_2( VAR_7 + ( VAR_6->cursor - VAR_15 - VAR_18 ) * VAR_10, VAR_8, VAR_17, 1.0, VAR_5 );

  }
 }
}
