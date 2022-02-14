
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int dummy; } ;
struct argv_array {int argc; int argv; } ;


 struct argv_array VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct strbuf VAR_1 ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char const**) ;
 int FUNC_3 (struct string_list*,struct strbuf*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(struct string_list *VAR_3,
      const char **VAR_4)
{
 struct argv_array VAR_5 = VAR_0;
 struct strbuf VAR_6 = VAR_1;

 FUNC_2(&VAR_5, VAR_4);
 FUNC_0(VAR_5.argv, VAR_5.argc, VAR_2);

 FUNC_3(VAR_3, &VAR_6, VAR_5.argv, VAR_5.argc);

 FUNC_1(&VAR_5);
 FUNC_4(&VAR_6);
}
