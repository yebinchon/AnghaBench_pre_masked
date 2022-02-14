
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int SRes ;
typedef int ISeqInStream ;
typedef int CXzBlock ;
typedef scalar_t__ Byte ;
typedef int BoolInt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__*,unsigned int) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,scalar_t__*) ;

SRes FUNC_4(CXzBlock *VAR_4, ISeqInStream *VAR_5, BoolInt *VAR_6, UInt32 *VAR_7)
{
  Byte VAR_8[VAR_3];
  unsigned VAR_9;
  *VAR_7 = 0;
  FUNC_0(FUNC_2(VAR_5, &VAR_8[0]));
  VAR_9 = (unsigned)VAR_8[0];
  if (VAR_9 == 0)
  {
    *VAR_7 = 1;
    *VAR_6 = VAR_2;
    return VAR_1;
  }

  *VAR_6 = VAR_0;
  VAR_9 = (VAR_9 << 2) + 4;
  *VAR_7 = VAR_9;
  FUNC_0(FUNC_1(VAR_5, VAR_8 + 1, VAR_9 - 1));
  return FUNC_3(VAR_4, VAR_8);
}
