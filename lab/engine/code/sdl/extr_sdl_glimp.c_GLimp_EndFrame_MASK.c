
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int string; } ;
struct TYPE_5__ {void* modified; scalar_t__ integer; } ;
struct TYPE_4__ {int (* IN_Restart ) () ;int (* Cmd_ExecuteText ) (int ,char*) ;int (* Cvar_Set ) (char*,char*) ;int (* Printf ) (int ,char*) ;scalar_t__ (* Cvar_VariableIntegerValue ) (char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 () ;

void FUNC_9( void )
{

 if ( FUNC_0( VAR_5->string, "GL_FRONT" ) != 0 )
 {
  FUNC_1( VAR_3 );
 }

 if( VAR_6->modified )
 {
  int VAR_8;
  qboolean VAR_9;
  qboolean VAR_10 = VAR_4;


  VAR_8 = !!( FUNC_2( VAR_3 ) & VAR_2 );

  if( VAR_6->integer && VAR_7.Cvar_VariableIntegerValue( "in_nograb" ) )
  {
   VAR_7.Printf( VAR_1, "Fullscreen not allowed with in_nograb 1\n");
   VAR_7.Cvar_Set( "r_fullscreen", "0" );
   VAR_6->modified = VAR_4;
  }


  VAR_9 = !!VAR_6->integer != VAR_8;

  if( VAR_9 )
  {
   VAR_10 = FUNC_3( VAR_3, VAR_6->integer ) >= 0;


   if( !VAR_10 )
    VAR_7.Cmd_ExecuteText(VAR_0, "vid_restart\n");

   VAR_7.IN_Restart( );
  }

  VAR_6->modified = VAR_4;
 }
}
