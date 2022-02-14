
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int * data; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CBuf ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,size_t) ;

int FUNC_1(CBuf *VAR_0, size_t VAR_1, ISzAllocPtr VAR_2)
{
  VAR_0->size = 0;
  if (VAR_1 == 0)
  {
    VAR_0->data = 0;
    return 1;
  }
  VAR_0->data = (Byte *)FUNC_0(VAR_2, VAR_1);
  if (VAR_0->data)
  {
    VAR_0->size = VAR_1;
    return 1;
  }
  return 0;
}
