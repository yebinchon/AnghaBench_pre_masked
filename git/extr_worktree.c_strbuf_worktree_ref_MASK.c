
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int id; int is_current; } ;
struct strbuf {int dummy; } ;







 int FUNC_0 (struct worktree const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct strbuf*,char*,int ) ;
 int FUNC_3 (struct strbuf*,char const*) ;

void FUNC_4(const struct worktree *VAR_0,
    struct strbuf *VAR_1,
    const char *VAR_2)
{
 switch (FUNC_1(VAR_2)) {
 case 128:
 case 129:
  if (VAR_0 && !VAR_0->is_current) {
   if (FUNC_0(VAR_0))
    FUNC_3(VAR_1, "main-worktree/");
   else
    FUNC_2(VAR_1, "worktrees/%s/", VAR_0->id);
  }
  break;

 case 132:
 case 130:
  break;

 case 131:





  break;
 }
 FUNC_3(VAR_1, VAR_2);
}
