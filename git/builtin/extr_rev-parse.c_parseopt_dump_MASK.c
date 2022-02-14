
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct option {int * long_name; int * short_name; struct strbuf* value; } ;


 int FUNC_0 (struct strbuf*,char const*) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 struct strbuf *VAR_4 = VAR_1->value;
 if (VAR_3)
  FUNC_2(VAR_4, " --no-%s", VAR_1->long_name);
 else if (VAR_1->short_name && (VAR_1->long_name == ((void*)0) || !VAR_0))
  FUNC_2(VAR_4, " -%c", VAR_1->short_name);
 else
  FUNC_2(VAR_4, " --%s", VAR_1->long_name);
 if (VAR_2) {
  if (!VAR_0)
   FUNC_1(VAR_4, ' ');
  else if (VAR_1->long_name)
   FUNC_1(VAR_4, '=');
  FUNC_0(VAR_4, VAR_2);
 }
 return 0;
}
