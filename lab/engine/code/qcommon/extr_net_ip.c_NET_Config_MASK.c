
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_2__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_4( qboolean VAR_9 ) {
 qboolean VAR_10;
 qboolean VAR_11;
 qboolean VAR_12;


 VAR_10 = FUNC_0();

 if( !VAR_4->integer ) {
  VAR_9 = 0;
 }


 if( VAR_9 == VAR_5 && !VAR_10 ) {
  return;
 }

 if( VAR_9 == VAR_5 ) {
  if( VAR_9 ) {
   VAR_11 = VAR_7;
   VAR_12 = VAR_7;
  }
  else {
   VAR_11 = VAR_6;
   VAR_12 = VAR_6;
  }
 }
 else {
  if( VAR_9 ) {
   VAR_11 = VAR_6;
   VAR_12 = VAR_7;
  }
  else {
   VAR_11 = VAR_7;
   VAR_12 = VAR_6;
  }
  VAR_5 = VAR_9;
 }

 if( VAR_11 ) {
  if ( VAR_2 != VAR_0 ) {
   FUNC_3( VAR_2 );
   VAR_2 = VAR_0;
  }

  if(VAR_3 != VAR_0)
  {
   if(VAR_3 != VAR_1)
    FUNC_3(VAR_3);

   VAR_3 = VAR_0;
  }

  if ( VAR_1 != VAR_0 ) {
   FUNC_3( VAR_1 );
   VAR_1 = VAR_0;
  }

  if ( VAR_8 != VAR_0 ) {
   FUNC_3( VAR_8 );
   VAR_8 = VAR_0;
  }

 }

 if( VAR_12 )
 {
  if (VAR_4->integer)
  {
   FUNC_1();
   FUNC_2();
  }
 }
}
