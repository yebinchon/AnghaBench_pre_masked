
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dicPos; } ;
struct TYPE_7__ {TYPE_1__ decoder; } ;
struct TYPE_6__ {TYPE_3__ decoder; scalar_t__ outBufMode; } ;
typedef scalar_t__ SizeT ;
typedef int SRes ;
typedef scalar_t__ ELzmaStatus ;
typedef int ELzmaFinishMode ;
typedef scalar_t__ ECoderStatus ;
typedef scalar_t__ ECoderFinishMode ;
typedef TYPE_2__ CLzma2Dec_Spec ;
typedef int Byte ;


 int FUNC_0 (TYPE_3__*,int *,scalar_t__*,int const*,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int const*,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static SRes FUNC_3(void *VAR_0, Byte *VAR_1, SizeT *VAR_2, const Byte *VAR_3, SizeT *VAR_4,
    int VAR_5, ECoderFinishMode VAR_6,

    ECoderStatus *VAR_7)
{
  CLzma2Dec_Spec *VAR_8 = (CLzma2Dec_Spec *)VAR_0;
  ELzmaStatus VAR_9;

  SRes VAR_10;
  FUNC_2(VAR_5);
  if (VAR_8->outBufMode)
  {
    SizeT VAR_11 = VAR_8->decoder.decoder.dicPos;
    SizeT VAR_12 = VAR_11 + *VAR_2;
    VAR_10 = FUNC_1(&VAR_8->decoder, VAR_12, VAR_3, VAR_4, (ELzmaFinishMode)VAR_6, &VAR_9);
    *VAR_2 = VAR_8->decoder.decoder.dicPos - VAR_11;
  }
  else
    VAR_10 = FUNC_0(&VAR_8->decoder, VAR_1, VAR_2, VAR_3, VAR_4, (ELzmaFinishMode)VAR_6, &VAR_9);


  *VAR_7 = (ECoderStatus)VAR_9;
  return VAR_10;
}
