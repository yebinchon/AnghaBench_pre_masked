
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int FUNC_0 (char const*,int ,char*,int ) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,char const*,char const*,...) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, const char *VAR_1,
         const char *VAR_2, int VAR_3, struct strbuf *VAR_4)
{
 FUNC_3(VAR_4);
 FUNC_1(VAR_4, '+');
 if (VAR_3)
  FUNC_2(VAR_4, "refs/%s:refs/%s",
    VAR_1, VAR_1);
 else
  FUNC_2(VAR_4, "refs/heads/%s:refs/remotes/%s/%s",
    VAR_1, VAR_2, VAR_1);
 FUNC_0(VAR_0, VAR_4->buf, "^$", 0);
}
