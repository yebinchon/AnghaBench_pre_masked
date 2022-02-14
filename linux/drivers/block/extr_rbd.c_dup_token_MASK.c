
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*,size_t,int ) ;
 size_t FUNC_1 (char const**) ;

__attribute__((used)) static inline char *FUNC_2(const char **VAR_1, size_t *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 VAR_3 = FUNC_0(*VAR_1, VAR_4 + 1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 *(VAR_3 + VAR_4) = '\0';
 *VAR_1 += VAR_4;

 if (VAR_2)
  *VAR_2 = VAR_4;

 return VAR_3;
}
