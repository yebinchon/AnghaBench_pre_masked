
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
typedef TYPE_5__ menucommon_s ;
struct TYPE_10__ {int curvalue; } ;
struct TYPE_9__ {int curvalue; } ;
struct TYPE_8__ {int curvalue; } ;
struct TYPE_7__ {int curvalue; } ;
struct TYPE_12__ {int sfxvolume_original; int musicvolume_original; TYPE_4__ soundSystem; int soundSystem_original; TYPE_3__ quality; int quality_original; TYPE_2__ musicvolume; TYPE_1__ sfxvolume; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_6__ VAR_4 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7( void* VAR_5, int VAR_6 ) {
 if( VAR_6 != VAR_2 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_5)->id ) {
 case 130:
  FUNC_4();
  FUNC_2();
  break;

 case 131:
  FUNC_4();
  FUNC_0();
  break;

 case 128:
  break;

 case 129:
  FUNC_4();
  FUNC_3();
  break;
 case 132:
  FUNC_4();
  break;

 case 133:
  FUNC_6( "s_volume", VAR_4.sfxvolume.curvalue / 10 );
  VAR_4.sfxvolume_original = VAR_4.sfxvolume.curvalue;

  FUNC_6( "s_musicvolume", VAR_4.musicvolume.curvalue / 10 );
  VAR_4.musicvolume_original = VAR_4.musicvolume.curvalue;


  if (VAR_4.quality_original != VAR_4.quality.curvalue
   || VAR_4.soundSystem_original != VAR_4.soundSystem.curvalue)
  {
   int VAR_7;

   switch ( VAR_4.quality.curvalue )
   {
    default:
    case 0:
     VAR_7 = 11025;
     break;
    case 1:
     VAR_7 = 22050;
     break;
    case 2:
     VAR_7 = 44100;
     break;
   }

   if (VAR_7 == VAR_0)
    VAR_7 = 0;

   FUNC_6( "s_sdlSpeed", VAR_7 );
   VAR_4.quality_original = VAR_4.quality.curvalue;

   FUNC_6( "s_useOpenAL", (VAR_4.soundSystem.curvalue == VAR_3) );
   VAR_4.soundSystem_original = VAR_4.soundSystem.curvalue;

   FUNC_1();
   FUNC_5( VAR_1, "snd_restart\n" );
  }
  break;
 }
}
