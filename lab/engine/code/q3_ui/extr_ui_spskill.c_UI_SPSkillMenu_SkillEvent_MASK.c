
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
typedef TYPE_2__ menucommon_s ;
struct TYPE_4__ {int shader; } ;
struct TYPE_6__ {int silenceSound; int nightmareSound; int * skillpics; TYPE_1__ art_skillPic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4( void *VAR_7, int VAR_8 ) {
 int VAR_9;
 int VAR_10;

 if (VAR_8 != VAR_3)
  return;

 FUNC_0( (int)FUNC_2( "g_spSkill" ), VAR_4 );

 VAR_9 = ((menucommon_s*)VAR_7)->id;
 VAR_10 = VAR_9 - VAR_1 + 1;
 FUNC_1( "g_spSkill", VAR_10 );

 FUNC_0( VAR_10, VAR_5 );
 VAR_6.art_skillPic.shader = VAR_6.skillpics[VAR_10 - 1];

 if( VAR_9 == VAR_2 ) {
  FUNC_3( VAR_6.nightmareSound, VAR_0 );
 }
 else {
  FUNC_3( VAR_6.silenceSound, VAR_0 );
 }
}
