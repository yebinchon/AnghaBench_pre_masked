
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,void const*,size_t) ;

void *FUNC_1(void *VAR_0, __const void *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3 = VAR_0;
 const unsigned char *VAR_4 = VAR_1;

 if (VAR_0 == VAR_1)
  return VAR_0;

 if (VAR_0 < VAR_1)
  return FUNC_0(VAR_0, VAR_1, VAR_2);

 while (VAR_2--)
  VAR_3[VAR_2] = VAR_4[VAR_2];
 return VAR_0;
}
