
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SizeT ;
typedef scalar_t__ SRes ;
typedef int ISzAllocPtr ;
typedef int ICompressProgress ;
typedef int CLzmaEncProps ;
typedef int CLzmaEnc ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int const*,int ,int,int *,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int const*) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

SRes FUNC_5(Byte *VAR_2, SizeT *VAR_3, const Byte *VAR_4, SizeT VAR_5,
    const CLzmaEncProps *VAR_6, Byte *VAR_7, SizeT *VAR_8, int VAR_9,
    ICompressProgress *VAR_10, ISzAllocPtr VAR_11, ISzAllocPtr VAR_12)
{
  CLzmaEnc *VAR_13 = (CLzmaEnc *)FUNC_0(VAR_11);
  SRes VAR_14;
  if (!VAR_13)
    return VAR_0;

  VAR_14 = FUNC_3(VAR_13, VAR_6);
  if (VAR_14 == VAR_1)
  {
    VAR_14 = FUNC_4(VAR_13, VAR_7, VAR_8);
    if (VAR_14 == VAR_1)
      VAR_14 = FUNC_2(VAR_13, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_9, VAR_10, VAR_11, VAR_12);
  }

  FUNC_1(VAR_13, VAR_11, VAR_12);
  return VAR_14;
}
