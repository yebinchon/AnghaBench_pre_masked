
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UInt64 ;
typedef int SRes ;
typedef int ILookInStream ;
typedef int Byte ;


 int FUNC_0 (int *,void const**,size_t*) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,void const*,size_t) ;

__attribute__((used)) static SRes FUNC_4(UInt64 VAR_2, ILookInStream *VAR_3, Byte *VAR_4)
{
  while (VAR_2 > 0)
  {
    const void *VAR_5;
    size_t VAR_6 = (1 << 18);
    if (VAR_6 > VAR_2)
      VAR_6 = (size_t)VAR_2;
    FUNC_2(FUNC_0(VAR_3, &VAR_5, &VAR_6));
    if (VAR_6 == 0)
      return VAR_0;
    FUNC_3(VAR_4, VAR_5, VAR_6);
    VAR_4 += VAR_6;
    VAR_2 -= VAR_6;
    FUNC_2(FUNC_1(VAR_3, VAR_6));
  }
  return VAR_1;
}
