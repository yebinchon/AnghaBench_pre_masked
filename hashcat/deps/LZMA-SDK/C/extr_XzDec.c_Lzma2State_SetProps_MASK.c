
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int decoder; scalar_t__ outBufMode; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CLzma2Dec_Spec ;
typedef int Byte ;


 int FUNC_0 (int *,int const,int ) ;
 int FUNC_1 (int *,int const,int ) ;
 int VAR_0 ;

__attribute__((used)) static SRes FUNC_2(void *VAR_1, const Byte *VAR_2, size_t VAR_3, ISzAllocPtr VAR_4)
{
  if (VAR_3 != 1)
    return VAR_0;
  {
    CLzma2Dec_Spec *VAR_5 = (CLzma2Dec_Spec *)VAR_1;
    if (VAR_5->outBufMode)
      return FUNC_1(&VAR_5->decoder, VAR_2[0], VAR_4);
    else
      return FUNC_0(&VAR_5->decoder, VAR_2[0], VAR_4);
  }
}
