
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ,char*,char const**) ;
 scalar_t__ FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 const char *VAR_3;
 int VAR_4;

 FUNC_2(&VAR_4);
 if (FUNC_4(&VAR_2, VAR_1) ||
     !FUNC_3(VAR_2.buf, "refs/heads/", &VAR_3))
  FUNC_0("'%s' is not a valid branch name", VAR_1);
 FUNC_1("%s\n", VAR_3);
 FUNC_5(&VAR_2);
 return 0;
}
