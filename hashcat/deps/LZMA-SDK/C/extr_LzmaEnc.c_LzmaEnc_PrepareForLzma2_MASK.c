
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int * stream; } ;
struct TYPE_5__ {int needInit; TYPE_1__ matchFinderBase; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef int ISeqInStream ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_2__ CLzmaEnc ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;

SRes FUNC_1(CLzmaEncHandle VAR_0,
    ISeqInStream *VAR_1, UInt32 VAR_2,
    ISzAllocPtr VAR_3, ISzAllocPtr VAR_4)
{
  CLzmaEnc *VAR_5 = (CLzmaEnc *)VAR_0;
  VAR_5->matchFinderBase.stream = VAR_1;
  VAR_5->needInit = 1;
  return FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
}
