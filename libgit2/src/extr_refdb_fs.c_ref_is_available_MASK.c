
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_3(
 const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (VAR_0 == ((void*)0) || FUNC_0(VAR_0, VAR_2)) {
  size_t VAR_3 = FUNC_1(VAR_2);
  size_t VAR_4 = FUNC_1(VAR_1);
  size_t VAR_5 = VAR_3 < VAR_4 ? VAR_3 : VAR_4;
  const char *VAR_6 = VAR_3 < VAR_4 ? VAR_1 : VAR_2;

  if (!FUNC_2(VAR_1, VAR_2, VAR_5) && VAR_6[VAR_5] == '/') {
   return 0;
  }
 }

 return 1;
}
