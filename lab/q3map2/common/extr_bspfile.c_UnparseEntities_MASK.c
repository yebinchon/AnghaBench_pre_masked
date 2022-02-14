
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int key; struct TYPE_3__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_4__ {TYPE_1__* epairs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;

void FUNC_6( void ) {
 char *VAR_5, *VAR_6;
 epair_t *VAR_7;
 char VAR_8[2048];
 int VAR_9;
 char VAR_10[1024], VAR_11[1024];

 VAR_5 = VAR_1;
 VAR_6 = VAR_5;
 *VAR_6 = 0;

 for ( VAR_9 = 0 ; VAR_9 < VAR_4 ; VAR_9++ ) {
  VAR_7 = VAR_3[VAR_9].epairs;
  if ( !VAR_7 ) {
   continue;
  }

  FUNC_3( VAR_6,"{\n" );
  VAR_6 += 2;

  for ( VAR_7 = VAR_3[VAR_9].epairs ; VAR_7 ; VAR_7 = VAR_7->next ) {
   FUNC_4( VAR_10, VAR_7->key );
   FUNC_1( VAR_10 );
   FUNC_4( VAR_11, VAR_7->value );
   FUNC_1( VAR_11 );

   FUNC_2( VAR_8, "\"%s\" \"%s\"\n", VAR_10, VAR_11 );
   FUNC_3( VAR_6, VAR_8 );
   VAR_6 += FUNC_5( VAR_8 );
  }
  FUNC_3( VAR_6,"}\n" );
  VAR_6 += 2;

  if ( VAR_6 > VAR_5 + VAR_0 ) {
   FUNC_0( "Entity text too long" );
  }
 }
 VAR_2 = VAR_6 - VAR_5 + 1;
}
