
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int dummy; } ;
struct strbuf {int len; char* buf; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char const*,struct object_id*) ;
 scalar_t__ FUNC_1 (char*,char*,char const**) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct strbuf*,struct object_id*,int ) ;
 char* FUNC_4 (struct strbuf*,int *) ;
 scalar_t__ FUNC_5 (struct strbuf*,int ,int ) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,int ,int) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*,int) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (struct worktree const*,char*,char const*) ;

__attribute__((used)) static char *FUNC_12(const struct worktree *VAR_2, const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 struct object_id VAR_5;
 const char *VAR_6;

 if (FUNC_5(&VAR_4, FUNC_11(VAR_2, "%s", VAR_3), 0) <= 0)
  goto got_nothing;

 while (VAR_4.len && VAR_4.buf[VAR_4.len - 1] == '\n')
  FUNC_9(&VAR_4, VAR_4.len - 1);
 if (!VAR_4.len)
  goto got_nothing;
 if (FUNC_1(VAR_4.buf, "refs/heads/", &VAR_6))
  FUNC_7(&VAR_4, 0, VAR_6 - VAR_4.buf);
 else if (FUNC_2(VAR_4.buf, "refs/"))
  ;
 else if (!FUNC_0(VAR_4.buf, &VAR_5)) {
  FUNC_8(&VAR_4);
  FUNC_3(&VAR_4, &VAR_5, VAR_0);
 } else if (!FUNC_10(VAR_4.buf, "detached HEAD"))
  goto got_nothing;
 else
  ;
 return FUNC_4(&VAR_4, ((void*)0));

got_nothing:
 FUNC_6(&VAR_4);
 return ((void*)0);
}
