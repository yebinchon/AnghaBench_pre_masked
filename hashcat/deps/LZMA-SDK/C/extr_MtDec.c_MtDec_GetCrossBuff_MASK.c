
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * crossBlock; scalar_t__ inBufSize; int alloc; } ;
typedef TYPE_1__ CMtDec ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

Byte *FUNC_2(CMtDec *VAR_1)
{
  Byte *VAR_2 = VAR_1->crossBlock;
  if (!VAR_2)
  {
    VAR_2 = (Byte *)FUNC_0(VAR_1->alloc, VAR_0 + VAR_1->inBufSize);
    if (!VAR_2)
      return ((void*)0);
    VAR_1->crossBlock = VAR_2;
  }
  return FUNC_1(VAR_2);
}
