
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int string; int name; struct TYPE_3__* next; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;

void FUNC_4( void ) {
 cvar_t *VAR_12;
 int VAR_13;
 char *VAR_14;

 if ( FUNC_0() > 1 ) {
  VAR_14 = FUNC_1( 1 );
 } else {
  VAR_14 = ((void*)0);
 }

 VAR_13 = 0;
 for (VAR_12 = VAR_10 ; VAR_12 ; VAR_12 = VAR_12->next, VAR_13++)
 {
  if(!VAR_12->name || (VAR_14 && !FUNC_2(VAR_14, VAR_12->name, VAR_11)))
   continue;

  if (VAR_12->flags & VAR_5) {
   FUNC_3("S");
  } else {
   FUNC_3(" ");
  }
  if (VAR_12->flags & VAR_6) {
   FUNC_3("s");
  } else {
   FUNC_3(" ");
  }
  if (VAR_12->flags & VAR_7) {
   FUNC_3("U");
  } else {
   FUNC_3(" ");
  }
  if (VAR_12->flags & VAR_4) {
   FUNC_3("R");
  } else {
   FUNC_3(" ");
  }
  if (VAR_12->flags & VAR_2) {
   FUNC_3("I");
  } else {
   FUNC_3(" ");
  }
  if (VAR_12->flags & VAR_0) {
   FUNC_3("A");
  } else {
   FUNC_3(" ");
  }
  if (VAR_12->flags & VAR_3) {
   FUNC_3("L");
  } else {
   FUNC_3(" ");
  }
  if (VAR_12->flags & VAR_1) {
   FUNC_3("C");
  } else {
   FUNC_3(" ");
  }
  if (VAR_12->flags & VAR_8) {
   FUNC_3("?");
  } else {
   FUNC_3(" ");
  }

  FUNC_3 (" %s \"%s\"\n", VAR_12->name, VAR_12->string);
 }

 FUNC_3 ("\n%i total cvars\n", VAR_13);
 FUNC_3 ("%i cvar indexes\n", VAR_9);
}
