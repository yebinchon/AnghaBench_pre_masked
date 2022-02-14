
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (struct strbuf*,char const*,size_t) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*) ;
 char* FUNC_5 (struct strbuf*,int *) ;
 size_t FUNC_6 (char const*,char*) ;

void FUNC_7(struct strbuf *VAR_0, const char *VAR_1)
{
 char *VAR_2 = ((void*)0);

 if (VAR_0->buf == VAR_1)
  VAR_2 = FUNC_5(VAR_0, ((void*)0));

 FUNC_3(VAR_0, '\'');
 while (*VAR_1) {
  size_t VAR_3 = FUNC_6(VAR_1, "'!");
  FUNC_2(VAR_0, VAR_1, VAR_3);
  VAR_1 += VAR_3;
  while (FUNC_1(*VAR_1)) {
   FUNC_4(VAR_0, "'\\");
   FUNC_3(VAR_0, *VAR_1++);
   FUNC_3(VAR_0, '\'');
  }
 }
 FUNC_3(VAR_0, '\'');
 FUNC_0(VAR_2);
}
