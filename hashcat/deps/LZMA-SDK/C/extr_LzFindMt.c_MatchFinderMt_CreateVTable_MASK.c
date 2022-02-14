
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* MixMatchesFunc; TYPE_1__* MatchFinder; int GetHeadsFunc; } ;
struct TYPE_7__ {void* Skip; void* GetMatches; scalar_t__ GetPointerToCurrentPos; scalar_t__ GetNumAvailableBytes; scalar_t__ Init; } ;
struct TYPE_6__ {int numHashBytes; int bigHash; } ;
typedef void* Mf_Skip_Func ;
typedef void* Mf_Mix_Matches ;
typedef scalar_t__ Mf_Init_Func ;
typedef scalar_t__ Mf_GetPointerToCurrentPos_Func ;
typedef scalar_t__ Mf_GetNumAvailableBytes_Func ;
typedef void* Mf_GetMatches_Func ;
typedef TYPE_2__ IMatchFinder ;
typedef TYPE_3__ CMatchFinderMt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_0(CMatchFinderMt *VAR_14, IMatchFinder *VAR_15)
{
  VAR_15->Init = (Mf_Init_Func)VAR_11;
  VAR_15->GetNumAvailableBytes = (Mf_GetNumAvailableBytes_Func)VAR_9;
  VAR_15->GetPointerToCurrentPos = (Mf_GetPointerToCurrentPos_Func)VAR_10;
  VAR_15->GetMatches = (Mf_GetMatches_Func)VAR_8;

  switch (VAR_14->MatchFinder->numHashBytes)
  {
    case 2:
      VAR_14->GetHeadsFunc = VAR_0;
      VAR_14->MixMatchesFunc = (Mf_Mix_Matches)((void*)0);
      VAR_15->Skip = (Mf_Skip_Func)VAR_4;
      VAR_15->GetMatches = (Mf_GetMatches_Func)VAR_5;
      break;
    case 3:
      VAR_14->GetHeadsFunc = VAR_1;
      VAR_14->MixMatchesFunc = (Mf_Mix_Matches)VAR_12;
      VAR_15->Skip = (Mf_Skip_Func)VAR_6;
      break;
    default:

      VAR_14->GetHeadsFunc = VAR_14->MatchFinder->bigHash ? VAR_3 : VAR_2;
      VAR_14->MixMatchesFunc = (Mf_Mix_Matches)VAR_13;
      VAR_15->Skip = (Mf_Skip_Func)VAR_7;
      break;







  }
}
