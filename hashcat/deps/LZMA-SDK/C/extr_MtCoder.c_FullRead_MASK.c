
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SRes ;
typedef int ISeqInStream ;
typedef int Byte ;


 int FUNC_0 (int *,int *,size_t*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static SRes FUNC_2(ISeqInStream *VAR_1, Byte *VAR_2, size_t *VAR_3)
{
  size_t VAR_4 = *VAR_3;
  *VAR_3 = 0;
  while (VAR_4 != 0)
  {
    size_t VAR_5 = VAR_4;
    SRes VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5);
    *VAR_3 += VAR_5;
    VAR_2 += VAR_5;
    VAR_4 -= VAR_5;
    FUNC_1(VAR_6);
    if (VAR_5 == 0)
      return VAR_0;
  }
  return VAR_0;
}
