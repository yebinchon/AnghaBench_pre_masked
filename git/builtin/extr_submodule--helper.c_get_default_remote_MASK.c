
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int ,char**) ;
 char* FUNC_3 (char*,int ,int *,int *) ;
 int FUNC_4 (char const*,char*,char const**) ;
 int FUNC_5 (struct strbuf*,char*,char const*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (char const*,char*) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static char *FUNC_9(void)
{
 char *VAR_1 = ((void*)0), *VAR_2;
 struct strbuf VAR_3 = VAR_0;
 const char *VAR_4 = FUNC_3("HEAD", 0, ((void*)0), ((void*)0));

 if (!VAR_4)
  FUNC_1(FUNC_0("No such ref: %s"), "HEAD");


 if (!FUNC_7(VAR_4, "HEAD"))
  return FUNC_8("origin");

 if (!FUNC_4(VAR_4, "refs/heads/", &VAR_4))
  FUNC_1(FUNC_0("Expecting a full ref name, got %s"), VAR_4);

 FUNC_5(&VAR_3, "branch.%s.remote", VAR_4);
 if (FUNC_2(VAR_3.buf, &VAR_1))
  VAR_2 = FUNC_8("origin");
 else
  VAR_2 = VAR_1;

 FUNC_6(&VAR_3);
 return VAR_2;
}
