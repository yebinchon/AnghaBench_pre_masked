
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int missingfiles ;
struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {char* downloadList; scalar_t__* downloadName; scalar_t__* downloadTempName; int state; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char*,int,int ) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_5(void) {
  char VAR_6[1024];

  if ( !(VAR_2->integer & VAR_1) )
  {


    if (FUNC_4( VAR_6, sizeof( VAR_6 ), VAR_4 ) )
    {


      FUNC_2( "\nWARNING: You are missing some files referenced by the server:\n%s"
                  "You might not be able to join the game\n"
                  "Go to the setting menu to turn on autodownload, or get the file elsewhere\n\n", VAR_6 );
    }
  }
  else if ( FUNC_4( VAR_3.downloadList, sizeof( VAR_3.downloadList ) , VAR_5 ) ) {

    FUNC_2("Need paks: %s\n", VAR_3.downloadList );

  if ( *VAR_3.downloadList ) {

   VAR_3.state = VAR_0;

   *VAR_3.downloadTempName = *VAR_3.downloadName = 0;
   FUNC_3( "cl_downloadName", "" );

   FUNC_1();
   return;
  }

 }

 FUNC_0();
}
