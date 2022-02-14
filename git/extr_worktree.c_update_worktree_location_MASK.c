
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; int id; } ;
struct strbuf {int buf; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (struct worktree*) ;
 int FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*,char const*,int) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (int ,char*,int ) ;

void FUNC_9(struct worktree *VAR_1, const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;

 if (FUNC_4(VAR_1))
  FUNC_0("can't relocate main worktree");

 FUNC_6(&VAR_3, VAR_2, 1);
 if (FUNC_2(VAR_1->path, VAR_3.buf)) {
  FUNC_8(FUNC_3("worktrees/%s/gitdir", VAR_1->id),
      "%s/.git", VAR_3.buf);
  FUNC_1(VAR_1->path);
  VAR_1->path = FUNC_5(&VAR_3, ((void*)0));
 }
 FUNC_7(&VAR_3);
}
