
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int * string; int * util; } ;
struct strbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int * FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,char*) ;

void FUNC_7(struct string_list_item *VAR_1, const char *VAR_2,
   const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;

 if (*VAR_3 == '/')
  FUNC_0("pattern must not start with '/'");

 if (VAR_2) {
  FUNC_3(&VAR_4, VAR_2);
 }
 else if (!FUNC_2(VAR_3, "refs/"))
  FUNC_3(&VAR_4, "refs/");
 FUNC_3(&VAR_4, VAR_3);
 FUNC_6(&VAR_4, "/");

 VAR_1->string = FUNC_4(&VAR_4, ((void*)0));
 VAR_1->util = FUNC_1(VAR_3) ? ((void*)0) : VAR_1->string;
 FUNC_5(&VAR_4);
}
