
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  const char *VAR_5 = VAR_1[VAR_4];
  if (FUNC_1(VAR_5) == VAR_3 && !FUNC_2(VAR_5, VAR_2, VAR_3))
   return VAR_4;
 }

 return VAR_0;
}
