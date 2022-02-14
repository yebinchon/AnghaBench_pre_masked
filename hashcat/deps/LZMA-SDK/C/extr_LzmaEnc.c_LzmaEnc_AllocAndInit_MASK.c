
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int UInt32 ;
struct TYPE_6__ {unsigned int dictSize; unsigned int distTableSize; scalar_t__ nowPos64; int result; int finished; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CLzmaEnc ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned int,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static SRes FUNC_4(CLzmaEnc *VAR_4, UInt32 VAR_5, ISzAllocPtr VAR_6, ISzAllocPtr VAR_7)
{
  unsigned VAR_8;
  for (VAR_8 = VAR_3 / 2; VAR_8 < VAR_2; VAR_8++)
    if (VAR_4->dictSize <= ((UInt32)1 << VAR_8))
      break;
  VAR_4->distTableSize = VAR_8 * 2;

  VAR_4->finished = VAR_0;
  VAR_4->result = VAR_1;
  FUNC_3(FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7));
  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
  VAR_4->nowPos64 = 0;
  return VAR_1;
}
