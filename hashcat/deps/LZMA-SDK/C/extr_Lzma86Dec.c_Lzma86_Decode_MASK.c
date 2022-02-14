
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef scalar_t__ SizeT ;
typedef scalar_t__ SRes ;
typedef int ELzmaStatus ;
typedef int Byte ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*,scalar_t__*,int const*,scalar_t__*,int const*,int ,int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,scalar_t__,int ,int *,int ) ;
 int FUNC_2 (int ) ;

SRes FUNC_3(Byte *VAR_7, SizeT *VAR_8, const Byte *VAR_9, SizeT *VAR_10)
{
  SRes VAR_11;
  int VAR_12;
  SizeT VAR_13;
  ELzmaStatus VAR_14;

  if (*VAR_10 < VAR_0)
    return VAR_3;

  VAR_12 = VAR_9[0];

  if (VAR_12 > 1)
  {
    *VAR_8 = 0;
    return VAR_4;
  }

  VAR_13 = *VAR_10 - VAR_0;
  VAR_11 = FUNC_0(VAR_7, VAR_8, VAR_9 + VAR_0, &VAR_13,
      VAR_9 + 1, VAR_2, VAR_1, &VAR_14, &VAR_6);
  *VAR_10 = VAR_13 + VAR_0;
  if (VAR_11 != VAR_5)
    return VAR_11;
  if (VAR_12 == 1)
  {
    UInt32 VAR_15;
    FUNC_2(VAR_15);
    FUNC_1(VAR_7, *VAR_8, 0, &VAR_15, 0);
  }
  return VAR_5;
}
