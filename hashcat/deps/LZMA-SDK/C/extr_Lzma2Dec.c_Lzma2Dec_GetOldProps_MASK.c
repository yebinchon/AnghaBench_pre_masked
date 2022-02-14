
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int SRes ;
typedef int Byte ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static SRes FUNC_1(Byte VAR_3, Byte *VAR_4)
{
  UInt32 VAR_5;
  if (VAR_3 > 40)
    return VAR_1;
  VAR_5 = (VAR_3 == 40) ? 0xFFFFFFFF : FUNC_0(VAR_3);
  VAR_4[0] = (Byte)VAR_0;
  VAR_4[1] = (Byte)(VAR_5);
  VAR_4[2] = (Byte)(VAR_5 >> 8);
  VAR_4[3] = (Byte)(VAR_5 >> 16);
  VAR_4[4] = (Byte)(VAR_5 >> 24);
  return VAR_2;
}
