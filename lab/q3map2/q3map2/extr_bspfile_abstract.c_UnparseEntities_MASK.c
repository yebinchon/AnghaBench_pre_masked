
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int key; struct TYPE_4__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_5__ {TYPE_1__* epairs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (TYPE_2__*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;

void FUNC_8( void ){
 int VAR_6;
 char *VAR_7, *VAR_8;
 epair_t *VAR_9;
 char VAR_10[ 2048 ];
 char VAR_11[ 1024 ], VAR_12[ 1024 ];
 const char *VAR_13;



 VAR_7 = VAR_1;
 VAR_8 = VAR_7;
 *VAR_8 = 0;


 for ( VAR_6 = 0; VAR_6 < VAR_4 && VAR_6 < VAR_5; VAR_6++ )
 {

  VAR_9 = VAR_3[ VAR_6 ].epairs;
  if ( VAR_9 == ((void*)0) ) {
   continue;

  }

  VAR_13 = FUNC_3( &VAR_3[ VAR_6 ], "classname" );
  if ( !FUNC_1( VAR_13, "misc_model" ) ||
    !FUNC_1( VAR_13, "_decal" ) ||
    !FUNC_1( VAR_13, "_skybox" ) ) {
   continue;
  }


  FUNC_5( VAR_8, "{\n" );
  VAR_8 += 2;


  for ( VAR_9 = VAR_3[ VAR_6 ].epairs; VAR_9 != ((void*)0); VAR_9 = VAR_9->next )
  {

   FUNC_6( VAR_11, VAR_9->key );
   FUNC_2( VAR_11 );
   FUNC_6( VAR_12, VAR_9->value );
   FUNC_2( VAR_12 );


   FUNC_4( VAR_10, "\"%s\" \"%s\"\n", VAR_11, VAR_12 );
   FUNC_5( VAR_8, VAR_10 );
   VAR_8 += FUNC_7( VAR_10 );
  }


  FUNC_5( VAR_8,"}\n" );
  VAR_8 += 2;


  if ( VAR_8 > VAR_7 + VAR_0 ) {
   FUNC_0( "Entity text too long" );
  }
 }


 VAR_2 = VAR_8 - VAR_7 + 1;
}
