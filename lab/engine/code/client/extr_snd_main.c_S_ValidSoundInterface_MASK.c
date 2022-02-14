
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MasterGain; int StopCapture; int Capture; int AvailableCaptureSamples; int StartCapture; int SoundList; int SoundInfo; int ClearSoundBuffer; int RegisterSound; int BeginRegistration; int DisableSounds; int Update; int UpdateEntityPosition; int Respatialize; int StopLoopingSound; int AddRealLoopingSound; int AddLoopingSound; int ClearLoopingSounds; int StopAllSounds; int RawSamples; int StopBackgroundTrack; int StartBackgroundTrack; int StartLocalSound; int StartSound; int Shutdown; } ;
typedef TYPE_1__ soundInterface_t ;
typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static qboolean FUNC_0( soundInterface_t *VAR_2 )
{
 if( !VAR_2->Shutdown ) return VAR_0;
 if( !VAR_2->StartSound ) return VAR_0;
 if( !VAR_2->StartLocalSound ) return VAR_0;
 if( !VAR_2->StartBackgroundTrack ) return VAR_0;
 if( !VAR_2->StopBackgroundTrack ) return VAR_0;
 if( !VAR_2->RawSamples ) return VAR_0;
 if( !VAR_2->StopAllSounds ) return VAR_0;
 if( !VAR_2->ClearLoopingSounds ) return VAR_0;
 if( !VAR_2->AddLoopingSound ) return VAR_0;
 if( !VAR_2->AddRealLoopingSound ) return VAR_0;
 if( !VAR_2->StopLoopingSound ) return VAR_0;
 if( !VAR_2->Respatialize ) return VAR_0;
 if( !VAR_2->UpdateEntityPosition ) return VAR_0;
 if( !VAR_2->Update ) return VAR_0;
 if( !VAR_2->DisableSounds ) return VAR_0;
 if( !VAR_2->BeginRegistration ) return VAR_0;
 if( !VAR_2->RegisterSound ) return VAR_0;
 if( !VAR_2->ClearSoundBuffer ) return VAR_0;
 if( !VAR_2->SoundInfo ) return VAR_0;
 if( !VAR_2->SoundList ) return VAR_0;
 return VAR_1;
}
