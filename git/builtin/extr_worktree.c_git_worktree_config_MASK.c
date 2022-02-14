
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*,void*) ;
 int VAR_0 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 if (!FUNC_2(VAR_1, "worktree.guessremote")) {
  VAR_0 = FUNC_0(VAR_1, VAR_2);
  return 0;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
