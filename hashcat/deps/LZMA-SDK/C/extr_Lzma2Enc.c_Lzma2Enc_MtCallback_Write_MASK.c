
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t* outBufsDataSizes; size_t outBuf_Rem; size_t outBuf; scalar_t__ outStream; int ** outBufs; } ;
typedef int SRes ;
typedef TYPE_1__ CLzma2Enc ;
typedef int Byte ;


 size_t FUNC_0 (scalar_t__,int const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t,int const*,size_t) ;

__attribute__((used)) static SRes FUNC_2(void *VAR_3, unsigned VAR_4)
{
  CLzma2Enc *VAR_5 = (CLzma2Enc *)VAR_3;
  size_t VAR_6 = VAR_5->outBufsDataSizes[VAR_4];
  const Byte *VAR_7 = VAR_5->outBufs[VAR_4];

  if (VAR_5->outStream)
    return FUNC_0(VAR_5->outStream, VAR_7, VAR_6) == VAR_6 ? VAR_2 : VAR_1;

  if (VAR_6 > VAR_5->outBuf_Rem)
    return VAR_0;
  FUNC_1(VAR_5->outBuf, VAR_7, VAR_6);
  VAR_5->outBuf_Rem -= VAR_6;
  VAR_5->outBuf += VAR_6;
  return VAR_2;
}
