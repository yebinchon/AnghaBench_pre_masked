
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int temp ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {char* buffer; void* widthInChars; int cursor; } ;
struct TYPE_9__ {scalar_t__ down; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 () ;
 TYPE_5__ VAR_19 ;
 TYPE_4__* VAR_20 ;
 TYPE_2__ VAR_21 ;
 void* VAR_22 ;
 TYPE_2__* VAR_23 ;
 size_t VAR_24 ;
 TYPE_1__* VAR_25 ;
 size_t VAR_26 ;
 char FUNC_13 (int) ;

void FUNC_14 (int VAR_27) {

 if ( VAR_27 == 'l' && VAR_25[VAR_3].down ) {
  FUNC_1 ("clear\n");
  return;
 }


 if ( VAR_27 == VAR_6 || VAR_27 == VAR_9 ) {

  if ( VAR_19.state != VAR_0 && VAR_20->integer &&
    VAR_21.buffer[0] &&
    VAR_21.buffer[0] != '\\' &&
    VAR_21.buffer[0] != '/' ) {
   char VAR_28[VAR_18-1];

   FUNC_11( VAR_28, VAR_21.buffer, sizeof( VAR_28 ) );
   FUNC_3( VAR_21.buffer, sizeof( VAR_21.buffer ), "\\%s", VAR_28 );
   VAR_21.cursor++;
  }

  FUNC_2 ( "]%s\n", VAR_21.buffer );


  if ( VAR_21.buffer[0] == '\\' || VAR_21.buffer[0] == '/' ) {
   FUNC_1( VAR_21.buffer+1 );
   FUNC_1 ("\n");
  } else {

   if ( !VAR_21.buffer[0] ) {
    return;
   } else {
    if ( VAR_20->integer ) {
     FUNC_1 ("cmd say ");
    }

    FUNC_1( VAR_21.buffer );
    FUNC_1 ("\n");
   }
  }


  VAR_23[VAR_26 % VAR_2] = VAR_21;
  VAR_26++;
  VAR_24 = VAR_26;

  FUNC_9( &VAR_21 );

  VAR_21.widthInChars = VAR_22;

  FUNC_0( );

  if ( VAR_19.state == VAR_1 ) {
   FUNC_12 ();
  }
  return;
 }



 if (VAR_27 == VAR_16) {
  FUNC_8(&VAR_21);
  return;
 }



 if ( (VAR_27 == VAR_12 && VAR_25[VAR_15].down) || ( VAR_27 == VAR_17 ) || ( VAR_27 == VAR_10 ) ||
   ( ( FUNC_13(VAR_27) == 'p' ) && VAR_25[VAR_3].down ) ) {
  if ( VAR_26 - VAR_24 < VAR_2
   && VAR_24 > 0 ) {
   VAR_24--;
  }
  VAR_21 = VAR_23[ VAR_24 % VAR_2 ];
  return;
 }

 if ( (VAR_27 == VAR_11 && VAR_25[VAR_15].down) || ( VAR_27 == VAR_4 ) || ( VAR_27 == VAR_8 ) ||
   ( ( FUNC_13(VAR_27) == 'n' ) && VAR_25[VAR_3].down ) ) {
  VAR_24++;
  if (VAR_24 >= VAR_26) {
   VAR_24 = VAR_26;
   FUNC_9( &VAR_21 );
   VAR_21.widthInChars = VAR_22;
   return;
  }
  VAR_21 = VAR_23[ VAR_24 % VAR_2 ];
  return;
 }


 if ( VAR_27 == VAR_14 ) {
  FUNC_6();
  return;
 }

 if ( VAR_27 == VAR_13) {
  FUNC_5();
  return;
 }

 if ( VAR_27 == VAR_12) {
  FUNC_6();
  if(VAR_25[VAR_3].down) {
   FUNC_6();
   FUNC_6();
  }
  return;
 }

 if ( VAR_27 == VAR_11) {
  FUNC_5();
  if(VAR_25[VAR_3].down) {
   FUNC_5();
   FUNC_5();
  }
  return;
 }


 if ( VAR_27 == VAR_7 && VAR_25[VAR_3].down ) {
  FUNC_7();
  return;
 }


 if ( VAR_27 == VAR_5 && VAR_25[VAR_3].down ) {
  FUNC_4();
  return;
 }


 FUNC_10( &VAR_21, VAR_27 );
}
