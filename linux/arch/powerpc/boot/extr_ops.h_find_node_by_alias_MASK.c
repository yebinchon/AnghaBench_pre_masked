
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*,char const*,char*,int) ;

__attribute__((used)) static inline void *FUNC_2(const char *VAR_1)
{
 void *VAR_2 = FUNC_0("/aliases");

 if (VAR_2) {
  char VAR_3[VAR_0];
  if (FUNC_1(VAR_2, VAR_1, VAR_3, VAR_0) > 0)
   return FUNC_0(VAR_3);
 }

 return ((void*)0);
}
