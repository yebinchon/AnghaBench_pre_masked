
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,int) ;

__attribute__((used)) static const char *FUNC_1(struct strbuf *VAR_0, const char *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 FUNC_0(VAR_0, '(');

 while ((VAR_2 = *VAR_1++) != 0) {
  if (VAR_3 == 1) {
   VAR_3 = 0;
  } else {
   switch (VAR_2) {
   case '\\':
    VAR_3 = 1;
    continue;
   case '(':
    VAR_1 = FUNC_1(VAR_0, VAR_1);
    continue;
   case ')':
    FUNC_0(VAR_0, ')');
    return VAR_1;
   }
  }

  FUNC_0(VAR_0, VAR_2);
 }

 return VAR_1;
}
