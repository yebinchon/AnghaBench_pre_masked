
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t dicBufSize; int * dic; } ;
struct TYPE_9__ {TYPE_1__ decoder; } ;
struct TYPE_8__ {TYPE_5__ decoder; int outBufMode; } ;
struct TYPE_7__ {int * Filter; int Code2; int Init; int SetProps; int Free; TYPE_3__* p; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_2__ IStateCoder ;
typedef TYPE_3__ CLzma2Dec_Spec ;
typedef int Byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static SRes FUNC_2(IStateCoder *VAR_8, Byte *VAR_9, size_t VAR_10, ISzAllocPtr VAR_11)
{
  CLzma2Dec_Spec *VAR_12 = (CLzma2Dec_Spec *)VAR_8->p;
  if (!VAR_12)
  {
    VAR_12 = (CLzma2Dec_Spec *)FUNC_0(VAR_11, sizeof(CLzma2Dec_Spec));
    if (!VAR_12)
      return VAR_5;
    VAR_8->p = VAR_12;
    VAR_8->Free = VAR_2;
    VAR_8->SetProps = VAR_4;
    VAR_8->Init = VAR_3;
    VAR_8->Code2 = VAR_1;
    VAR_8->Filter = ((void*)0);
    FUNC_1(&VAR_12->decoder);
  }
  VAR_12->outBufMode = VAR_0;
  if (VAR_9)
  {
    VAR_12->outBufMode = VAR_7;
    VAR_12->decoder.decoder.dic = VAR_9;
    VAR_12->decoder.decoder.dicBufSize = VAR_10;
  }
  return VAR_6;
}
