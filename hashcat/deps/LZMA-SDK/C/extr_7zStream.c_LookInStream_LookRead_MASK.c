
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SRes ;
typedef int ILookInStream ;


 int FUNC_0 (int const*,void const**,size_t*) ;
 int FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (void*,void const*,size_t) ;

SRes FUNC_4(const ILookInStream *VAR_1, void *VAR_2, size_t *VAR_3)
{
  const void *VAR_4;
  if (*VAR_3 == 0)
    return VAR_0;
  FUNC_2(FUNC_0(VAR_1, &VAR_4, VAR_3));
  FUNC_3(VAR_2, VAR_4, *VAR_3);
  return FUNC_1(VAR_1, *VAR_3);
}
