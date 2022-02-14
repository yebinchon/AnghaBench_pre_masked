
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t* FUNC_2 (void*) ;
 int VAR_2 ;
 int FUNC_3 (int ,void*) ;
 scalar_t__ FUNC_4 (int ,void*) ;
 void* FUNC_5 (void*,scalar_t__) ;
 int FUNC_6 (int *,int ,size_t) ;
 void* FUNC_7 (size_t,char const*) ;
 int FUNC_8 (char*,void*) ;

void *FUNC_9(void *VAR_3, size_t VAR_4, const char *VAR_5)
{
 void *VAR_6;
 size_t *VAR_7;

 if (VAR_3 == ((void*)0))
  return FUNC_7(VAR_4, VAR_5);
 VAR_3 = FUNC_0(VAR_3);
 VAR_6 = FUNC_5(VAR_3, VAR_0 + VAR_4);
 VAR_7 = FUNC_2(VAR_6);
 if (VAR_4 > *VAR_7)
  FUNC_6(((uint8_t *) FUNC_1(VAR_6)) + *VAR_7, 0, VAR_4 - *VAR_7);
 *VAR_7 = VAR_4;
 if (FUNC_4(VAR_2, VAR_3) == VAR_1)
  FUNC_8("%p not found in allocations array in uiprivRealloc()", VAR_3);
 FUNC_3(VAR_2, VAR_6);
 return FUNC_1(VAR_6);
}
