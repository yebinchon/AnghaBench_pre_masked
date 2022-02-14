
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static inline int FUNC_2(const char *VAR_0, int VAR_1,
     const char **VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  int VAR_5 = FUNC_0(VAR_2[VAR_4]);
  if (VAR_5 <= VAR_1
      && !FUNC_1(VAR_0, VAR_2[VAR_4], VAR_5))
   return VAR_5;
 }
 return 0;
}
