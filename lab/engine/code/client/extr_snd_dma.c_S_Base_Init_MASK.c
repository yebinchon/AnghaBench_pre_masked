
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MasterGain; int StopCapture; int Capture; int AvailableCaptureSamples; int StartCapture; int SoundList; int SoundInfo; int ClearSoundBuffer; int RegisterSound; int BeginRegistration; int DisableSounds; int Update; int UpdateEntityPosition; int Respatialize; int StopLoopingSound; int AddRealLoopingSound; int AddLoopingSound; int ClearLoopingSounds; int (* StopAllSounds ) () ;int RawSamples; int StopBackgroundTrack; int StartBackgroundTrack; int StartLocalSound; int StartSound; int Shutdown; } ;
typedef TYPE_1__ soundInterface_t ;
typedef int sfx_t ;
typedef scalar_t__ qboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (char*,char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 () ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 scalar_t__ VAR_31 ;
 void* VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 void* VAR_36 ;
 int VAR_37 ;

qboolean FUNC_4( soundInterface_t *VAR_38 ) {
 qboolean VAR_39;

 if( !VAR_38 ) {
  return VAR_27;
 }

 VAR_30 = FUNC_1 ("s_mixahead", "0.2", VAR_0);
 VAR_29 = FUNC_1 ("s_mixPreStep", "0.05", VAR_0);
 VAR_32 = FUNC_1 ("s_show", "0", VAR_1);
 VAR_36 = FUNC_1 ("s_testsound", "0", VAR_1);

 VAR_39 = FUNC_2();

 if ( VAR_39 ) {
  VAR_34 = 1;
  VAR_33 = 1;


  FUNC_0(VAR_37, 0, sizeof(sfx_t *)*VAR_2);

  VAR_35 = 0;
  VAR_31 = 0;

  FUNC_3( );
 } else {
  return VAR_27;
 }

 VAR_38->Shutdown = VAR_15;
 VAR_38->StartSound = VAR_21;
 VAR_38->StartLocalSound = VAR_20;
 VAR_38->StartBackgroundTrack = VAR_18;
 VAR_38->StopBackgroundTrack = VAR_22;
 VAR_38->RawSamples = VAR_12;
 VAR_38->StopAllSounds = FUNC_3;
 VAR_38->ClearLoopingSounds = VAR_8;
 VAR_38->AddLoopingSound = VAR_3;
 VAR_38->AddRealLoopingSound = VAR_4;
 VAR_38->StopLoopingSound = VAR_24;
 VAR_38->Respatialize = VAR_14;
 VAR_38->UpdateEntityPosition = VAR_26;
 VAR_38->Update = VAR_25;
 VAR_38->DisableSounds = VAR_10;
 VAR_38->BeginRegistration = VAR_6;
 VAR_38->RegisterSound = VAR_13;
 VAR_38->ClearSoundBuffer = VAR_9;
 VAR_38->SoundInfo = VAR_16;
 VAR_38->SoundList = VAR_17;
 return VAR_28;
}
