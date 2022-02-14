
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 char** VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char const*,struct object_id const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_5(const char *VAR_5, const struct object_id *VAR_6,
      int VAR_7, void *VAR_8)
{
 if (VAR_3 && !FUNC_3(VAR_5, "HEAD"))
  goto match;

 if (VAR_4 || VAR_1) {
  int VAR_9;

  VAR_9 = VAR_1 && FUNC_2(VAR_5, "refs/heads/");
  VAR_9 |= VAR_4 && FUNC_2(VAR_5, "refs/tags/");
  if (!VAR_9)
   return 0;
 }
 if (VAR_2) {
  int VAR_10 = FUNC_4(VAR_5);
  const char **VAR_11 = VAR_2, *VAR_12;
  while ((VAR_12 = *VAR_11++) != ((void*)0)) {
   int VAR_13 = FUNC_4(VAR_12);
   if (VAR_13 > VAR_10)
    continue;
   if (FUNC_0(VAR_12, VAR_5 + VAR_10 - VAR_13, VAR_13))
    continue;
   if (VAR_13 == VAR_10)
    goto match;
   if (VAR_5[VAR_10 - VAR_13 - 1] == '/')
    goto match;
  }
  return 0;
 }

match:
 VAR_0++;

 FUNC_1(VAR_5, VAR_6);

 return 0;
}
