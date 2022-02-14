
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int usercmd_t ;
typedef int cmd ;
struct TYPE_9__ {scalar_t__* viewangles; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_6__ {int (* issue_console_commands ) (int ) ;} ;
struct TYPE_7__ {int userdata; TYPE_1__ hooks; } ;
typedef TYPE_2__ DeepmindContext ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 size_t VAR_0 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__*,scalar_t__*) ;
 size_t VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_2__* FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;

usercmd_t FUNC_12( void ) {
 usercmd_t VAR_4;
 vec3_t VAR_5;
 DeepmindContext* VAR_6 = FUNC_9();

 FUNC_8( VAR_2.viewangles, VAR_5 );


 FUNC_0 ();

 FUNC_6( &VAR_4, 0, sizeof( VAR_4 ) );

 FUNC_1( &VAR_4 );


 FUNC_4( &VAR_4 );


 FUNC_5( &VAR_4 );


 FUNC_3( &VAR_4 );


 FUNC_2( VAR_5, &VAR_4 );

 VAR_6->hooks.issue_console_commands( VAR_6->userdata );


 if ( VAR_3->integer ) {
  if ( VAR_3->integer == 1 ) {
   FUNC_7( FUNC_10(VAR_2.viewangles[VAR_1] - VAR_5[VAR_1]) );
  }
  if ( VAR_3->integer == 2 ) {
   FUNC_7( FUNC_10(VAR_2.viewangles[VAR_0] - VAR_5[VAR_0]) );
  }
 }

 return VAR_4;
}
