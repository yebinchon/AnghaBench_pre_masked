
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,void const*,size_t) ;
 void* FUNC_1 (void*,void const*,size_t) ;
 int FUNC_2 (char*) ;

void *FUNC_3(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (VAR_0 > VAR_1 && VAR_0 - VAR_1 < VAR_2) {
  FUNC_2("Avoiding potentially unsafe overlapping memcpy()!");
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 }
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
