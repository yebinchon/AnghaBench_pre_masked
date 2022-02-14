
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (struct strbuf*,int ) ;
 scalar_t__ FUNC_3 (struct strbuf*,char const*,char const**) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0, struct strbuf *VAR_1)
{
 if (*VAR_0 == '"') {
  const char *VAR_2 = VAR_0;

  if (FUNC_3(VAR_1, VAR_0, &VAR_0))
   FUNC_0("badly quoted argument: %s", VAR_2);
  if (*VAR_0 && !FUNC_1(*VAR_0))
   FUNC_0("unexpected character after quoted argument: %s", VAR_2);
 } else {
  while (*VAR_0 && !FUNC_1(*VAR_0))
   FUNC_2(VAR_1, *VAR_0++);
 }

 return VAR_0;
}
