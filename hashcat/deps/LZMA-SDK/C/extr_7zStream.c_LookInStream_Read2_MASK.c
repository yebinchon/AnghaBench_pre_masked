
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SRes ;
typedef int ILookInStream ;
typedef int Byte ;


 int FUNC_0 (int const*,void*,size_t*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

SRes FUNC_2(const ILookInStream *VAR_1, void *VAR_2, size_t VAR_3, SRes VAR_4)
{
  while (VAR_3 != 0)
  {
    size_t VAR_5 = VAR_3;
    FUNC_1(FUNC_0(VAR_1, VAR_2, &VAR_5));
    if (VAR_5 == 0)
      return VAR_4;
    VAR_2 = (void *)((Byte *)VAR_2 + VAR_5);
    VAR_3 -= VAR_5;
  }
  return VAR_0;
}
