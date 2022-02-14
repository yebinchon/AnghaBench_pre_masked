
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; } ;
struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static int FUNC_5(struct worktree *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 int VAR_3 = 0;

 FUNC_3(&VAR_2, VAR_1->path);
 if (FUNC_2(&VAR_2, 0)) {
  FUNC_1(FUNC_0("failed to delete '%s'"), VAR_2.buf);
  VAR_3 = -1;
 }
 FUNC_4(&VAR_2);
 return VAR_3;
}
