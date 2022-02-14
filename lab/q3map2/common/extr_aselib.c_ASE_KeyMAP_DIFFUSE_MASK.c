
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t numMaterials; TYPE_1__* materials; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,char*) ;
 TYPE_2__ VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__* FUNC_5 (char*,char) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;

__attribute__((used)) static void FUNC_10( const char *VAR_6 ){
 char VAR_7[1024];
 char VAR_8[1024];
 int VAR_9 = 0;

 FUNC_7( VAR_8, VAR_3 );

 if ( !FUNC_6( VAR_6, "*BITMAP" ) ) {
  FUNC_0( VAR_4 );




  FUNC_7( VAR_7, VAR_5 + 1 );
  if ( FUNC_5( VAR_7, '"' ) ) {
   *FUNC_5( VAR_7, '"' ) = 0;
  }


  while ( VAR_7[VAR_9] )
  {
   if ( VAR_7[VAR_9] == '\\' ) {
    VAR_7[VAR_9] = '/';
   }
   VAR_9++;
  }


  for ( VAR_9 = FUNC_8( VAR_8 ); VAR_9 > 0; VAR_9-- )
  {
   if ( VAR_8[VAR_9] == '/' ) {
    VAR_8[VAR_9] = '\0';
    break;
   }
  }


  if ( VAR_7[0] == '.' && VAR_7[1] == '.' && VAR_7[2] == '/' ) {
   while ( VAR_7[0] == '.' && VAR_7[1] == '.' && VAR_7[2] == '/' )
   {

    for ( VAR_9 = FUNC_8( VAR_8 ); VAR_9 > 0; VAR_9-- )
    {
     if ( VAR_8[VAR_9] == '/' ) {
      VAR_8[VAR_9] = '\0';
      break;
     }
    }
    FUNC_7( VAR_7, &VAR_7[3] );
   }
   FUNC_4( VAR_8, "/" );
   FUNC_4( VAR_8, VAR_7 );
   FUNC_7( VAR_7, VAR_8 );
  }

  if ( FUNC_9( VAR_7, VAR_2 ) ) {
   FUNC_7( VAR_1.materials[VAR_1.numMaterials].name, FUNC_9( VAR_7, VAR_2 ) + FUNC_8( VAR_2 ) );
   FUNC_2( "material name: \'%s\'\n", FUNC_9( VAR_7, VAR_2 ) + FUNC_8( VAR_2 ) );
  }
  else
  {
   FUNC_3( VAR_1.materials[VAR_1.numMaterials].name, "(not converted: '%s')", VAR_7 );
   FUNC_1( VAR_0, "WARNING: illegal material name '%s'\n", VAR_7 );
  }
 }
 else
 {
 }
}
