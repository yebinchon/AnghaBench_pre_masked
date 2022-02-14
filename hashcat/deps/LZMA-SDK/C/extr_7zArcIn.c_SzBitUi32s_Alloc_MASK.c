
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Vals; int * Defs; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CSzBitUi32s ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static SRes FUNC_1(CSzBitUi32s *VAR_3, size_t VAR_4, ISzAllocPtr VAR_5)
{
  if (VAR_4 == 0)
  {
    VAR_3->Defs = ((void*)0);
    VAR_3->Vals = ((void*)0);
  }
  else
  {
    FUNC_0(VAR_0, VAR_3->Defs, (VAR_4 + 7) >> 3, VAR_5);
    FUNC_0(VAR_2, VAR_3->Vals, VAR_4, VAR_5);
  }
  return VAR_1;
}
