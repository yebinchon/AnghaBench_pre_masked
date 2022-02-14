
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; scalar_t__* fileName; scalar_t__ alterGameState; scalar_t__ iFile; int buf; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static void FUNC_6( void ) {
 const char *VAR_7;

 if (!VAR_4[VAR_6].buf) {
  return;
 }

 if ( VAR_4[VAR_6].status == VAR_3 ) {
  return;
 }
 FUNC_1("finished cinematic\n");
 VAR_4[VAR_6].status = VAR_3;

 if (VAR_4[VAR_6].iFile) {
  FUNC_4( VAR_4[VAR_6].iFile );
  VAR_4[VAR_6].iFile = 0;
 }

 if (VAR_4[VAR_6].alterGameState) {
  VAR_5.state = VAR_0;




  VAR_7 = FUNC_3( "nextmap" );
  if ( VAR_7[0] ) {
   FUNC_0( VAR_2, FUNC_5("%s\n", VAR_7) );
   FUNC_2( "nextmap", "" );
  }
  VAR_1 = -1;
 }
 VAR_4[VAR_6].fileName[0] = 0;
 VAR_6 = -1;
}
