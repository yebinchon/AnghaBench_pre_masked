
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct strbuf*,char*,char const*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 FUNC_2(&VAR_2, "branch.%s", VAR_1);
 if (FUNC_1(VAR_2.buf, ((void*)0)) < 0)
  FUNC_4(FUNC_0("Update of config-file failed"));
 FUNC_3(&VAR_2);
}
