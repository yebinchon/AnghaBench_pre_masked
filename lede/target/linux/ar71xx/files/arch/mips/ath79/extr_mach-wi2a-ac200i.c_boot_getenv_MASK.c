
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (char const*,int) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0)
{
 const char *VAR_1 = (const char *) FUNC_0(0x1f070000);
 const char *VAR_2 = VAR_1 + 0x20000;
 const char *VAR_3;

 for (VAR_3 = VAR_1 + 4;
      *VAR_3 && *VAR_3 != 0xff && VAR_3 < VAR_2 &&
      FUNC_3(VAR_3, VAR_2 - VAR_3) < VAR_2 - VAR_3;
      VAR_3 += FUNC_3(VAR_3, VAR_2 - VAR_3) + 1) {
  const char *VAR_4;

  VAR_4 = FUNC_1(VAR_3, '=');
  if (!VAR_4)
   continue;

  if (FUNC_2(VAR_3, VAR_0, VAR_4 - VAR_3))
   continue;

  return VAR_4 + 1;
 }
 return ((void*)0);
}
