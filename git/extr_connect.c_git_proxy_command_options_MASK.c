
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char const*,int) ;
 char* FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,int) ;

__attribute__((used)) static int FUNC_8(const char *VAR_1, const char *VAR_2,
  void *VAR_3)
{
 if (!FUNC_3(VAR_1, "core.gitproxy")) {
  const char *VAR_4;
  int VAR_5 = -1;
  int VAR_6;
  const char *VAR_7 = VAR_3;
  int VAR_8 = FUNC_4(VAR_7);

  if (VAR_0)
   return 0;
  if (!VAR_2)
   return FUNC_0(VAR_1);






  VAR_4 = FUNC_6(VAR_2, " for ");
  if (!VAR_4)

   VAR_5 = FUNC_4(VAR_2);
  else {
   VAR_6 = FUNC_4(VAR_4 + 5);
   if (VAR_8 < VAR_6)
    VAR_5 = -1;
   else if (!FUNC_5(VAR_4 + 5,
       VAR_7 + VAR_8 - VAR_6,
       VAR_6) &&
     ((VAR_8 == VAR_6) ||
      VAR_7[VAR_8 - VAR_6 -1] == '.'))
    VAR_5 = VAR_4 - VAR_2;
   else
    VAR_5 = -1;
  }
  if (0 <= VAR_5) {

   if (VAR_5 == 4 &&
       !FUNC_2(VAR_2, "none", 4))
    VAR_5 = 0;
   VAR_0 = FUNC_7(VAR_2, VAR_5);
  }
  return 0;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
