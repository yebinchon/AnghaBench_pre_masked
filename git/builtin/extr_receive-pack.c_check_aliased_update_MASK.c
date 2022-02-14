
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int buf; } ;
struct command {int ref_name; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct command*,struct string_list*,char const*,int) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int *,int*) ;
 int FUNC_3 (struct strbuf*,char*,int ,int ) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(struct command *VAR_1, struct string_list *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 const char *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_3, "%s%s", FUNC_1(), VAR_1->ref_name);
 VAR_4 = FUNC_2(VAR_3.buf, 0, ((void*)0), &VAR_5);
 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5);
 FUNC_4(&VAR_3);
}
