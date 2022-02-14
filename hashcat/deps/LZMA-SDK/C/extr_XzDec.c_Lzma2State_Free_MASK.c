
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int decoder; scalar_t__ outBufMode; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CLzma2Dec_Spec ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, ISzAllocPtr VAR_1)
{
  CLzma2Dec_Spec *VAR_2 = (CLzma2Dec_Spec *)VAR_0;
  if (VAR_2->outBufMode)
    FUNC_2(&VAR_2->decoder, VAR_1);
  else
    FUNC_1(&VAR_2->decoder, VAR_1);
  FUNC_0(VAR_1, VAR_0);
}
