
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {void* util; } ;
struct string_list {int dummy; } ;
struct strbuf {int buf; } ;
struct option {scalar_t__ value; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (struct strbuf*,int *) ;
 char* FUNC_3 (char const*,char) ;
 struct string_list_item* FUNC_4 (struct string_list*,int ) ;

__attribute__((used)) static int FUNC_5(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 struct string_list *VAR_4;
 struct string_list_item *VAR_5;
 struct strbuf VAR_6 = VAR_0;
 const char *VAR_7;

 if (!VAR_2 || VAR_3)
  FUNC_0("malformed --expect option");

 VAR_4 = (struct string_list *)VAR_1->value;
 VAR_7 = FUNC_3(VAR_2, ':');
 if (!VAR_7)
  FUNC_0("malformed --expect option, lacking a colon");
 FUNC_1(&VAR_6, VAR_2, VAR_7 - VAR_2);
 VAR_5 = FUNC_4(VAR_4, FUNC_2(&VAR_6, ((void*)0)));
 if (VAR_5->util)
  FUNC_0("malformed --expect option, duplicate %s", VAR_6.buf);
 VAR_5->util = (void *)VAR_2;
 return 0;
}
