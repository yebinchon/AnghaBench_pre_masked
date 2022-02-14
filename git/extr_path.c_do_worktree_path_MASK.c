
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct strbuf {int len; int * buf; } ;
struct repository {int worktree; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,int ) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char const*,int ) ;

__attribute__((used)) static void FUNC_5(const struct repository *VAR_0,
        struct strbuf *VAR_1,
        const char *VAR_2, va_list VAR_3)
{
 FUNC_2(VAR_1, VAR_0->worktree);
 if(VAR_1->len && !FUNC_0(VAR_1->buf[VAR_1->len - 1]))
  FUNC_1(VAR_1, '/');

 FUNC_4(VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_1);
}
