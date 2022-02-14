
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char const) ;
 int FUNC_1 (struct strbuf*,int) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3;


 FUNC_1(VAR_0, VAR_2 + 2);

 FUNC_0(VAR_0, '"');
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  switch (VAR_1[VAR_3]) {
  case '"':
  case '\\':
   FUNC_0(VAR_0, '\\');

  default:
   FUNC_0(VAR_0, VAR_1[VAR_3]);
  }
 }
 FUNC_0(VAR_0, '"');
}
