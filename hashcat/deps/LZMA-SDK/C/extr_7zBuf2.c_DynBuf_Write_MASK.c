
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; size_t pos; int const* data; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CDynBuf ;
typedef int const Byte ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int const*,int const*,size_t) ;

int FUNC_3(CDynBuf *VAR_0, const Byte *VAR_1, size_t VAR_2, ISzAllocPtr VAR_3)
{
  if (VAR_2 > VAR_0->size - VAR_0->pos)
  {
    size_t VAR_4 = VAR_0->pos + VAR_2;
    Byte *VAR_5;
    VAR_4 += VAR_4 / 4;
    VAR_5 = (Byte *)FUNC_0(VAR_3, VAR_4);
    if (!VAR_5)
      return 0;
    VAR_0->size = VAR_4;
    if (VAR_0->pos != 0)
      FUNC_2(VAR_5, VAR_0->data, VAR_0->pos);
    FUNC_1(VAR_3, VAR_0->data);
    VAR_0->data = VAR_5;
  }
  if (VAR_2 != 0)
  {
    FUNC_2(VAR_0->data + VAR_0->pos, VAR_1, VAR_2);
    VAR_0->pos += VAR_2;
  }
  return 1;
}
