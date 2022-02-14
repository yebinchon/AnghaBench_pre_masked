
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer; scalar_t__ count; } ;
typedef TYPE_1__ CSha256 ;
typedef int Byte ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int const*,size_t) ;

void FUNC_2(CSha256 *VAR_0, const Byte *VAR_1, size_t VAR_2)
{
  if (VAR_2 == 0)
    return;

  {
    unsigned VAR_3 = (unsigned)VAR_0->count & 0x3F;
    unsigned VAR_4;

    VAR_0->count += VAR_2;

    VAR_4 = 64 - VAR_3;
    if (VAR_4 > VAR_2)
    {
      FUNC_1(VAR_0->buffer + VAR_3, VAR_1, VAR_2);
      return;
    }

    VAR_2 -= VAR_4;
    FUNC_1(VAR_0->buffer + VAR_3, VAR_1, VAR_4);
    VAR_1 += VAR_4;
  }

  for (;;)
  {
    FUNC_0(VAR_0);
    if (VAR_2 < 64)
      break;
    VAR_2 -= 64;
    FUNC_1(VAR_0->buffer, VAR_1, 64);
    VAR_1 += 64;
  }

  if (VAR_2 != 0)
    FUNC_1(VAR_0->buffer, VAR_1, VAR_2);
}
