
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int id; int path; } ;
struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct worktree*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct strbuf*,char*) ;
 int FUNC_4 (struct strbuf*,char*,int ,char const*) ;
 int FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*,int ,char*,char const*) ;
 scalar_t__ FUNC_7 (struct strbuf*,int ,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct strbuf*,char*) ;
 int VAR_1 ;
 struct worktree* FUNC_12 (int,int) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static struct worktree *FUNC_14(const char *VAR_2)
{
 struct worktree *VAR_3 = ((void*)0);
 struct strbuf VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_0;

 if (!VAR_2)
  FUNC_1("Missing linked worktree name");

 FUNC_6(&VAR_4, VAR_1, "worktrees/%s/gitdir", VAR_2);
 if (FUNC_7(&VAR_5, VAR_4.buf, 0) <= 0)

  goto done;

 FUNC_10(&VAR_5);
 if (!FUNC_11(&VAR_5, "/.git")) {
  FUNC_9(&VAR_5);
  FUNC_3(&VAR_5, ".");
  FUNC_11(&VAR_5, "/.");
 }

 FUNC_9(&VAR_4);
 FUNC_4(&VAR_4, "%s/worktrees/%s/HEAD", FUNC_2(), VAR_2);

 VAR_3 = FUNC_12(1, sizeof(*VAR_3));
 VAR_3->path = FUNC_5(&VAR_5, ((void*)0));
 VAR_3->id = FUNC_13(VAR_2);
 FUNC_0(VAR_3);

done:
 FUNC_8(&VAR_4);
 FUNC_8(&VAR_5);
 return VAR_3;
}
