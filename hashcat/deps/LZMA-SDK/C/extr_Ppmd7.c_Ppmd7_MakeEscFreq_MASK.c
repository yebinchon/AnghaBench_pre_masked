
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UInt32 ;
typedef unsigned int UInt16 ;
struct TYPE_10__ {unsigned int NumStats; int SummFreq; } ;
struct TYPE_9__ {scalar_t__ NumStats; } ;
struct TYPE_7__ {unsigned int Summ; unsigned int Shift; } ;
struct TYPE_8__ {int HiBitsFlag; TYPE_1__ DummySee; TYPE_4__* MinContext; scalar_t__* NS2Indx; TYPE_1__** See; } ;
typedef TYPE_1__ CPpmd_See ;
typedef TYPE_2__ CPpmd7 ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;

CPpmd_See *FUNC_1(CPpmd7 *VAR_0, unsigned VAR_1, UInt32 *VAR_2)
{
  CPpmd_See *VAR_3;
  unsigned VAR_4 = VAR_0->MinContext->NumStats - VAR_1;
  if (VAR_0->MinContext->NumStats != 256)
  {
    VAR_3 = VAR_0->See[(unsigned)VAR_0->NS2Indx[(size_t)VAR_4 - 1]] +
        (VAR_4 < (unsigned)FUNC_0(VAR_0->MinContext)->NumStats - VAR_0->MinContext->NumStats) +
        2 * (unsigned)(VAR_0->MinContext->SummFreq < 11 * VAR_0->MinContext->NumStats) +
        4 * (unsigned)(VAR_1 > VAR_4) +
        VAR_0->HiBitsFlag;
    {
      unsigned VAR_5 = (VAR_3->Summ >> VAR_3->Shift);
      VAR_3->Summ = (UInt16)(VAR_3->Summ - VAR_5);
      *VAR_2 = VAR_5 + (VAR_5 == 0);
    }
  }
  else
  {
    VAR_3 = &VAR_0->DummySee;
    *VAR_2 = 1;
  }
  return VAR_3;
}
