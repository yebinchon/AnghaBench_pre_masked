
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int id; } ;
struct strbuf {int dummy; } ;
struct repository {int commondir; int gitdir; } ;


 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (struct strbuf*,struct repository const*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0,
       const struct repository *VAR_1,
       const struct worktree *VAR_2)
{
 if (!VAR_2)
  FUNC_0(VAR_0, VAR_1->gitdir);
 else if (!VAR_2->id)
  FUNC_0(VAR_0, VAR_1->commondir);
 else
  FUNC_1(VAR_0, VAR_1, "worktrees/%s", VAR_2->id);
}
