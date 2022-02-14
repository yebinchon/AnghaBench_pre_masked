
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gitdiff_data {char* linenr; int p_value; int root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int ,char const*,int *,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct gitdiff_data *VAR_2,
          const char *VAR_3,
          int VAR_4,
          char **VAR_5,
          int VAR_6)
{
 if (!*VAR_5 && !VAR_4) {
  *VAR_5 = FUNC_2(VAR_2->root, VAR_3, ((void*)0), VAR_2->p_value, VAR_1);
  return 0;
 }

 if (*VAR_5) {
  char *VAR_7;
  if (VAR_4)
   return FUNC_1(FUNC_0("git apply: bad git-diff - expected /dev/null, got %s on line %d"),
         *VAR_5, VAR_2->linenr);
  VAR_7 = FUNC_2(VAR_2->root, VAR_3, ((void*)0), VAR_2->p_value, VAR_1);
  if (!VAR_7 || FUNC_5(VAR_7, *VAR_5)) {
   FUNC_3(VAR_7);
   return FUNC_1((VAR_6 == VAR_0) ?
       FUNC_0("git apply: bad git-diff - inconsistent new filename on line %d") :
       FUNC_0("git apply: bad git-diff - inconsistent old filename on line %d"), VAR_2->linenr);
  }
  FUNC_3(VAR_7);
 } else {
  if (!FUNC_4(VAR_3))
   return FUNC_1(FUNC_0("git apply: bad git-diff - expected /dev/null on line %d"), VAR_2->linenr);
 }

 return 0;
}
