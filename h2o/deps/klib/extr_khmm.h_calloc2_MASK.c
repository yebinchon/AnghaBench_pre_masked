
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void **FUNC_2(int VAR_0, int VAR_1, int VAR_2)
{
 char **VAR_3;
 int VAR_4;
 VAR_3 = (char**)FUNC_1(sizeof(char*) * VAR_0);
 for (VAR_4 = 0; VAR_4 != VAR_0; ++VAR_4)
  VAR_3[VAR_4] = (char*)FUNC_0(VAR_1, VAR_2);
 return (void**)VAR_3;
}
