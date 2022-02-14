
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lzma2; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CLzma2WithFilters ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static SRes FUNC_1(CLzma2WithFilters *VAR_2, ISzAllocPtr VAR_3, ISzAllocPtr VAR_4)
{
  if (!VAR_2->lzma2)
  {
    VAR_2->lzma2 = FUNC_0(VAR_3, VAR_4);
    if (!VAR_2->lzma2)
      return VAR_0;
  }
  return VAR_1;
}
