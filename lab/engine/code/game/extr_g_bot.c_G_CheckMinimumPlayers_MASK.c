
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {int time; scalar_t__ intermissiontime; } ;
struct TYPE_6__ {int integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5( void ) {
 int VAR_11;
 int VAR_12, VAR_13;
 static int VAR_14;

 if (VAR_10.intermissiontime) return;

 if (VAR_14 > VAR_10.time - 10000) {
  return;
 }
 VAR_14 = VAR_10.time;
 FUNC_4(&VAR_7);
 VAR_11 = VAR_7.integer;
 if (VAR_11 <= 0) return;

 if (VAR_8.integer >= VAR_1) {
  if (VAR_11 >= VAR_9.integer / 2) {
   VAR_11 = (VAR_9.integer / 2) -1;
  }

  VAR_12 = FUNC_2( VAR_5 );
  VAR_13 = FUNC_1( VAR_5 );

  if (VAR_12 + VAR_13 < VAR_11) {
   FUNC_0( VAR_5 );
  } else if (VAR_12 + VAR_13 > VAR_11 && VAR_13) {
   FUNC_3( VAR_5 );
  }

  VAR_12 = FUNC_2( VAR_3 );
  VAR_13 = FUNC_1( VAR_3 );

  if (VAR_12 + VAR_13 < VAR_11) {
   FUNC_0( VAR_3 );
  } else if (VAR_12 + VAR_13 > VAR_11 && VAR_13) {
   FUNC_3( VAR_3 );
  }
 }
 else if (VAR_8.integer == VAR_2 ) {
  if (VAR_11 >= VAR_9.integer) {
   VAR_11 = VAR_9.integer-1;
  }
  VAR_12 = FUNC_2( -1 );
  VAR_13 = FUNC_1( -1 );

  if (VAR_12 + VAR_13 < VAR_11) {
   FUNC_0( VAR_4 );
  } else if (VAR_12 + VAR_13 > VAR_11 && VAR_13) {

   if (!FUNC_3( VAR_6 )) {

    FUNC_3( -1 );
   }
  }
 }
 else if (VAR_8.integer == VAR_0) {
  if (VAR_11 >= VAR_9.integer) {
   VAR_11 = VAR_9.integer-1;
  }
  VAR_12 = FUNC_2( VAR_4 );
  VAR_13 = FUNC_1( VAR_4 );

  if (VAR_12 + VAR_13 < VAR_11) {
   FUNC_0( VAR_4 );
  } else if (VAR_12 + VAR_13 > VAR_11 && VAR_13) {
   FUNC_3( VAR_4 );
  }
 }
}
