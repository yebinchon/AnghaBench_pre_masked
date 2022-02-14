
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*,int ,char*) ;
 int FUNC_2 (struct strbuf*,char*,char const*,char const*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 FUNC_2(&VAR_4, "%s %s", VAR_2, VAR_3);
 FUNC_1(VAR_0, VAR_0, "-c", VAR_4.buf, (char *)((void*)0));
 FUNC_4(FUNC_0("failed to exec '%s'"), VAR_2);
 FUNC_3(&VAR_4);
}
