
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref {int name; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 char* FUNC_3 (struct strbuf*,int *) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_2, struct ref *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;

 const char *VAR_5 = FUNC_0(VAR_3->name, VAR_0,
        ((void*)0), ((void*)0));
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_1(VAR_5, "refs/heads/")) {
  FUNC_2(&VAR_4, "refs/heads/");
 } else if (FUNC_1(VAR_5, "refs/tags/")) {
  FUNC_2(&VAR_4, "refs/tags/");
 } else {
  return ((void*)0);
 }

 FUNC_2(&VAR_4, VAR_2);
 return FUNC_3(&VAR_4, ((void*)0));
}
