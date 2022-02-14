
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int worktree; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,char const*,struct repository const*,int *,int *,int *,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*,char*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, int VAR_2,
         const struct repository *VAR_3)
{
 const char *VAR_4 = "def_repo";
 struct strbuf VAR_5 = VAR_0;

 FUNC_2(&VAR_5, "worktree:");
 FUNC_1(&VAR_5, VAR_3->worktree);

 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_3, ((void*)0), ((void*)0), ((void*)0),
    &VAR_5);
 FUNC_3(&VAR_5);
}
