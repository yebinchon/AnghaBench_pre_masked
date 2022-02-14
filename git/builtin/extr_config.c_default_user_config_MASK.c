
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct strbuf*,int ,int ,int ) ;
 char* FUNC_4 (struct strbuf*,int *) ;

__attribute__((used)) static char *FUNC_5(void)
{
 struct strbuf VAR_1 = VAR_0;
 FUNC_3(&VAR_1,
      FUNC_0("# This is Git's per-user configuration file.\n"
        "[user]\n"
        "# Please adapt and uncomment the following lines:\n"
        "#	name = %s\n"
        "#	email = %s\n"),
      FUNC_2(),
      FUNC_1());
 return FUNC_4(&VAR_1, ((void*)0));
}
