
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct worktree {int dummy; } ;
struct strbuf {int len; int * buf; } ;
struct repository {int dummy; } ;


 int FUNC_0 (struct repository const*,struct strbuf*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char const*,int ) ;
 int FUNC_5 (struct strbuf*,struct repository const*,struct worktree const*) ;

__attribute__((used)) static void FUNC_6(const struct repository *VAR_0,
   const struct worktree *VAR_1, struct strbuf *VAR_2,
   const char *VAR_3, va_list VAR_4)
{
 int VAR_5;
 FUNC_5(VAR_2, VAR_0, VAR_1);
 if (VAR_2->len && !FUNC_1(VAR_2->buf[VAR_2->len - 1]))
  FUNC_2(VAR_2, '/');
 VAR_5 = VAR_2->len;
 FUNC_4(VAR_2, VAR_3, VAR_4);
 if (!VAR_1)
  FUNC_0(VAR_0, VAR_2, VAR_5);
 FUNC_3(VAR_2);
}
