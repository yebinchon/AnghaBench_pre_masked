
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct pretty_print_context {int member_0; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_1 (int *,char*,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (struct strbuf*) ;
 char* FUNC_5 (char*,char const*) ;

__attribute__((used)) static void FUNC_6(FILE *VAR_1, char *VAR_2, const char *VAR_3,
         struct commit *VAR_4)
{
 struct pretty_print_context VAR_5 = {0};
 struct strbuf VAR_6 = VAR_0;
 char *VAR_7 = FUNC_5(VAR_2, VAR_3);

 FUNC_0(VAR_4, "%s", &VAR_6, &VAR_5);

 FUNC_1(VAR_1, "# %s: [%s] %s\n", VAR_7, FUNC_3(&VAR_4->object.oid),
  VAR_6.buf);

 FUNC_4(&VAR_6);
 FUNC_2(VAR_7);
}
