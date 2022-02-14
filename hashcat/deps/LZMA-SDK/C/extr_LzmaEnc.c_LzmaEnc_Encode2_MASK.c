
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rc; int nowPos64; scalar_t__ finished; } ;
typedef scalar_t__ SRes ;
typedef int ICompressProgress ;
typedef TYPE_1__ CLzmaEnc ;
typedef scalar_t__ Byte ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static SRes FUNC_4(CLzmaEnc *VAR_2, ICompressProgress *VAR_3)
{
  SRes VAR_4 = VAR_1;


  Byte VAR_5[0x300];
  VAR_5[0] = 0;
  VAR_5[1] = VAR_5[0];


  for (;;)
  {
    VAR_4 = FUNC_1(VAR_2, 0, 0);
    if (VAR_4 != VAR_1 || VAR_2->finished)
      break;
    if (VAR_3)
    {
      VAR_4 = FUNC_0(VAR_3, VAR_2->nowPos64, FUNC_3(&VAR_2->rc));
      if (VAR_4 != VAR_1)
      {
        VAR_4 = VAR_0;
        break;
      }
    }
  }

  FUNC_2(VAR_2);







  return VAR_4;
}
