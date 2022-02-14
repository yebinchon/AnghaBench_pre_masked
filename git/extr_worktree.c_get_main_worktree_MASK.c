
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int is_bare; int path; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct worktree*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*,char*,int ) ;
 int FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,char*) ;
 struct worktree* FUNC_8 (int,int) ;

__attribute__((used)) static struct worktree *FUNC_9(void)
{
 struct worktree *VAR_2 = ((void*)0);
 struct strbuf VAR_3 = VAR_0;
 struct strbuf VAR_4 = VAR_0;

 FUNC_3(&VAR_4, FUNC_1());
 if (!FUNC_7(&VAR_4, "/.git"))
  FUNC_7(&VAR_4, "/.");

 FUNC_4(&VAR_3, "%s/HEAD", FUNC_1());

 VAR_2 = FUNC_8(1, sizeof(*VAR_2));
 VAR_2->path = FUNC_5(&VAR_4, ((void*)0));







 VAR_2->is_bare = (VAR_1 == 1) ||
  FUNC_2();
 FUNC_0(VAR_2);

 FUNC_6(&VAR_3);
 FUNC_6(&VAR_4);
 return VAR_2;
}
