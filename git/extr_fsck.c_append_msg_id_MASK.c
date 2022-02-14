
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char const) ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*,char*) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_0, const char *VAR_1)
{
 for (;;) {
  char VAR_2 = *(VAR_1)++;

  if (!VAR_2)
   break;
  if (VAR_2 != '_')
   FUNC_1(VAR_0, FUNC_3(VAR_2));
  else {
   FUNC_0(*VAR_1);
   FUNC_1(VAR_0, *(VAR_1)++);
  }
 }

 FUNC_2(VAR_0, ": ");
}
