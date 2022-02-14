
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct strbuf*,char const*,int,void*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static size_t FUNC_3(struct strbuf *VAR_0, const char *VAR_1, void *VAR_2)
{
 const char *VAR_3;

 if (*VAR_1 != '(')
  return 0;
 VAR_3 = FUNC_2(VAR_1 + 1, ')');
 if (!VAR_3)
  FUNC_0("format element '%s' does not end in ')'", VAR_1);

 FUNC_1(VAR_0, VAR_1 + 1, VAR_3 - VAR_1 - 1, VAR_2);

 return VAR_3 - VAR_1 + 1;
}
