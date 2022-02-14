
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int dummy; } ;
struct strbuf {int buf; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int (*) (int ,struct object_id*,int ,int *),int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct worktree**) ;
 int FUNC_4 (int ,struct object_id*,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,char const**,struct object_id*) ;
 int FUNC_6 (struct worktree*) ;
 struct worktree** FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (struct object_id*) ;
 int FUNC_9 (int ,int ,struct worktree*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct worktree*,struct strbuf*,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
 struct worktree **VAR_6, **VAR_7;
 const char *VAR_8;
 struct object_id VAR_9;

 FUNC_1(FUNC_4, ((void*)0));

 VAR_6 = FUNC_7(0);
 for (VAR_7 = VAR_6; *VAR_7; VAR_7++) {
  struct worktree *VAR_10 = *VAR_7;
  struct strbuf VAR_11 = VAR_0;

  FUNC_11(VAR_10, &VAR_11, "HEAD");
  FUNC_5(VAR_11.buf, &VAR_8, &VAR_9);
  if (VAR_8 && !FUNC_8(&VAR_9))
   FUNC_4(VAR_11.buf, &VAR_9, 0, ((void*)0));
  FUNC_10(&VAR_11);

  if (VAR_3)
   FUNC_9(FUNC_6(VAR_10),
          VAR_2, VAR_10);
 }
 FUNC_3(VAR_6);
 if (!VAR_1) {
  FUNC_2(VAR_5, FUNC_0("notice: No default references"));
  VAR_4 = 0;
 }
}
