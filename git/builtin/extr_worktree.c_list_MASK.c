
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int dummy; } ;
struct option {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int*,int ) ;
 struct option FUNC_2 () ;
 int FUNC_3 (struct worktree**) ;
 struct worktree** FUNC_4 (int ) ;
 int FUNC_5 (struct worktree**,int*,int*) ;
 int FUNC_6 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_7 (struct worktree*,int,int) ;
 int FUNC_8 (struct worktree*) ;
 int FUNC_9 (int ,struct option*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;

 struct option VAR_7[] = {
  FUNC_1(0, "porcelain", &VAR_6, FUNC_0("machine-readable output")),
  FUNC_2()
 };

 VAR_3 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_7, VAR_2, 0);
 if (VAR_3)
  FUNC_9(VAR_2, VAR_7);
 else {
  struct worktree **VAR_8 = FUNC_4(VAR_1);
  int VAR_9 = 0, VAR_10 = VAR_0, VAR_11;

  if (!VAR_6)
   FUNC_5(VAR_8, &VAR_10, &VAR_9);

  for (VAR_11 = 0; VAR_8[VAR_11]; VAR_11++) {
   if (VAR_6)
    FUNC_8(VAR_8[VAR_11]);
   else
    FUNC_7(VAR_8[VAR_11], VAR_9, VAR_10);
  }
  FUNC_3(VAR_8);
 }
 return 0;
}
