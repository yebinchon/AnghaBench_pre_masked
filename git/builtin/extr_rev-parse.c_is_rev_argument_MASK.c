
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0)
{
 static const char *VAR_1[] = {
  "--all",
  "--bisect",
  "--dense",
  "--branches=",
  "--branches",
  "--header",
  "--ignore-missing",
  "--max-age=",
  "--max-count=",
  "--min-age=",
  "--no-merges",
  "--min-parents=",
  "--no-min-parents",
  "--max-parents=",
  "--no-max-parents",
  "--objects",
  "--objects-edge",
  "--parents",
  "--pretty",
  "--remotes=",
  "--remotes",
  "--glob=",
  "--sparse",
  "--tags=",
  "--tags",
  "--topo-order",
  "--date-order",
  "--unpacked",
  ((void*)0)
 };
 const char **VAR_2 = VAR_1;


 if ((*VAR_0 == '-') && FUNC_0(VAR_0[1]))
  return 1;

 for (;;) {
  const char *VAR_3 = *VAR_2++;
  int VAR_4;
  if (!VAR_3)
   return 0;
  VAR_4 = FUNC_2(VAR_3);
  if (!FUNC_1(VAR_0, VAR_3) ||
      (VAR_3[VAR_4-1] == '=' && !FUNC_3(VAR_0, VAR_3, VAR_4)))
   return 1;
 }
}
