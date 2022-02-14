
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t dicBufSize; int * dic; } ;
struct TYPE_7__ {TYPE_1__ decoder; } ;
struct TYPE_9__ {TYPE_2__ decoder; scalar_t__ outBufMode; } ;
struct TYPE_8__ {scalar_t__ p; } ;
typedef int SRes ;
typedef TYPE_3__ IStateCoder ;
typedef TYPE_4__ CLzma2Dec_Spec ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static SRes FUNC_0(IStateCoder *VAR_2, Byte *VAR_3, size_t VAR_4)
{
  CLzma2Dec_Spec *VAR_5 = (CLzma2Dec_Spec *)VAR_2->p;
  if ((VAR_5->outBufMode && !VAR_3) || (!VAR_5->outBufMode && VAR_3))
    return VAR_0;
  if (VAR_3)
  {
    VAR_5->decoder.decoder.dic = VAR_3;
    VAR_5->decoder.decoder.dicBufSize = VAR_4;
  }
  return VAR_1;
}
