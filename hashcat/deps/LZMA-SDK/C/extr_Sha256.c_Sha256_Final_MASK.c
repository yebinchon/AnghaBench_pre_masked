
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt64 ;
typedef int UInt32 ;
struct TYPE_5__ {int count; int* buffer; int * state; } ;
typedef TYPE_1__ CSha256 ;
typedef int Byte ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(CSha256 *VAR_0, Byte *VAR_1)
{
  unsigned VAR_2 = (unsigned)VAR_0->count & 0x3F;
  unsigned VAR_3;

  VAR_0->buffer[VAR_2++] = 0x80;

  while (VAR_2 != (64 - 8))
  {
    VAR_2 &= 0x3F;
    if (VAR_2 == 0)
      FUNC_2(VAR_0);
    VAR_0->buffer[VAR_2++] = 0;
  }

  {
    UInt64 VAR_4 = (VAR_0->count << 3);
    FUNC_0(VAR_0->buffer + 64 - 8, (UInt32)(VAR_4 >> 32));
    FUNC_0(VAR_0->buffer + 64 - 4, (UInt32)(VAR_4));
  }

  FUNC_2(VAR_0);

  for (VAR_3 = 0; VAR_3 < 8; VAR_3 += 2)
  {
    UInt32 VAR_5 = VAR_0->state[VAR_3];
    UInt32 VAR_6 = VAR_0->state[VAR_3 + 1];
    FUNC_0(VAR_1 , VAR_5);
    FUNC_0(VAR_1 + 4, VAR_6);
    VAR_1 += 8;
  }

  FUNC_1(VAR_0);
}
