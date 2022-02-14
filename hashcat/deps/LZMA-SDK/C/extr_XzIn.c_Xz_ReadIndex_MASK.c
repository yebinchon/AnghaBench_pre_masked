
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef int UInt32 ;
typedef scalar_t__ SRes ;
typedef int ISzAllocPtr ;
typedef int ILookInStream ;
typedef int CXzStream ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int *,size_t,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *,int *,size_t,int ) ;

__attribute__((used)) static SRes FUNC_4(CXzStream *VAR_3, ILookInStream *VAR_4, UInt64 VAR_5, ISzAllocPtr VAR_6)
{
  SRes VAR_7;
  size_t VAR_8;
  Byte *VAR_9;
  if (VAR_5 > ((UInt32)1 << 31))
    return VAR_1;
  VAR_8 = (size_t)VAR_5;
  if (VAR_8 != VAR_5)
    return VAR_1;
  VAR_9 = (Byte *)FUNC_0(VAR_6, VAR_8);
  if (!VAR_9)
    return VAR_0;
  VAR_7 = FUNC_2(VAR_4, VAR_9, VAR_8, VAR_1);
  if (VAR_7 == VAR_2)
    VAR_7 = FUNC_3(VAR_3, VAR_9, VAR_8, VAR_6);
  FUNC_1(VAR_6, VAR_9);
  return VAR_7;
}
