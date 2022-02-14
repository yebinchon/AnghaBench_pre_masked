
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int SRes ;
typedef int ISeqOutStream ;
typedef int CXzStreamFlags ;
typedef scalar_t__ Byte ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__*,int ,size_t) ;

__attribute__((used)) static SRes FUNC_4(CXzStreamFlags VAR_4, ISeqOutStream *VAR_5)
{
  UInt32 VAR_6;
  Byte VAR_7[VAR_3];
  FUNC_3(VAR_7, VAR_0, VAR_1);
  VAR_7[VAR_1] = (Byte)(VAR_4 >> 8);
  VAR_7[VAR_1 + 1] = (Byte)(VAR_4 & 0xFF);
  VAR_6 = FUNC_0(VAR_7 + VAR_1, VAR_2);
  FUNC_1(VAR_7 + VAR_1 + VAR_2, VAR_6);
  return FUNC_2(VAR_5, VAR_7, VAR_3);
}
