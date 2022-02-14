
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UInt16 ;
struct TYPE_11__ {int Size; int OrderFall; int MaxOrder; int RunLength; int InitRL; TYPE_3__** See; scalar_t__** BinSumm; TYPE_2__* FoundState; TYPE_1__* MinContext; scalar_t__ LoUnit; scalar_t__ HiUnit; TYPE_1__* MaxContext; scalar_t__ PrevSuccess; scalar_t__ GlueCount; scalar_t__ UnitsStart; scalar_t__ Text; scalar_t__ AlignOffset; scalar_t__ Base; int FreeList; } ;
struct TYPE_10__ {int Shift; int Count; scalar_t__ Summ; } ;
struct TYPE_9__ {int Freq; scalar_t__ Symbol; } ;
struct TYPE_8__ {int NumStats; int SummFreq; int Stats; scalar_t__ Suffix; } ;
typedef int Int32 ;
typedef TYPE_1__* CTX_PTR ;
typedef TYPE_2__ CPpmd_State ;
typedef TYPE_3__ CPpmd_See ;
typedef TYPE_4__ CPpmd7 ;
typedef scalar_t__ Byte ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 unsigned int* VAR_3 ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(CPpmd7 *VAR_4)
{
  unsigned VAR_5, VAR_6, VAR_7;

  FUNC_3(VAR_4->FreeList, 0, sizeof(VAR_4->FreeList));
  VAR_4->Text = VAR_4->Base + VAR_4->AlignOffset;
  VAR_4->HiUnit = VAR_4->Text + VAR_4->Size;
  VAR_4->LoUnit = VAR_4->UnitsStart = VAR_4->HiUnit - VAR_4->Size / 8 / VAR_2 * 7 * VAR_2;
  VAR_4->GlueCount = 0;

  VAR_4->OrderFall = VAR_4->MaxOrder;
  VAR_4->RunLength = VAR_4->InitRL = -(Int32)((VAR_4->MaxOrder < 12) ? VAR_4->MaxOrder : 12) - 1;
  VAR_4->PrevSuccess = 0;

  VAR_4->MinContext = VAR_4->MaxContext = (CTX_PTR)(VAR_4->HiUnit -= VAR_2);
  VAR_4->MinContext->Suffix = 0;
  VAR_4->MinContext->NumStats = 256;
  VAR_4->MinContext->SummFreq = 256 + 1;
  VAR_4->FoundState = (CPpmd_State *)VAR_4->LoUnit;
  VAR_4->LoUnit += FUNC_2(256 / 2);
  VAR_4->MinContext->Stats = FUNC_0(VAR_4->FoundState);
  for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
  {
    CPpmd_State *VAR_8 = &VAR_4->FoundState[VAR_5];
    VAR_8->Symbol = (Byte)VAR_5;
    VAR_8->Freq = 1;
    FUNC_1(VAR_8, 0);
  }

  for (VAR_5 = 0; VAR_5 < 128; VAR_5++)
    for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
    {
      UInt16 *VAR_9 = VAR_4->BinSumm[VAR_5] + VAR_6;
      UInt16 VAR_10 = (UInt16)(VAR_0 - VAR_3[VAR_6] / (VAR_5 + 2));
      for (VAR_7 = 0; VAR_7 < 64; VAR_7 += 8)
        VAR_9[VAR_7] = VAR_10;
    }

  for (VAR_5 = 0; VAR_5 < 25; VAR_5++)
    for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
    {
      CPpmd_See *VAR_11 = &VAR_4->See[VAR_5][VAR_6];
      VAR_11->Summ = (UInt16)((5 * VAR_5 + 10) << (VAR_11->Shift = VAR_1 - 4));
      VAR_11->Count = 4;
    }
}
