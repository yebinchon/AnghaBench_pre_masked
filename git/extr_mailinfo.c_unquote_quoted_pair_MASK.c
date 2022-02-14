
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 int FUNC_0 (struct strbuf*,int) ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,struct strbuf*) ;
 char* FUNC_4 (struct strbuf*,char const*) ;
 char* FUNC_5 (struct strbuf*,char const*) ;

__attribute__((used)) static void FUNC_6(struct strbuf *VAR_0)
{
 struct strbuf VAR_1;
 const char *VAR_2 = VAR_0->buf;
 int VAR_3;

 FUNC_1(&VAR_1, VAR_0->len);

 while ((VAR_3 = *VAR_2++) != 0) {
  switch (VAR_3) {
  case '"':
   VAR_2 = FUNC_5(&VAR_1, VAR_2);
   continue;
  case '(':
   VAR_2 = FUNC_4(&VAR_1, VAR_2);
   continue;
  }

  FUNC_0(&VAR_1, VAR_3);
 }

 FUNC_3(&VAR_1, VAR_0);
 FUNC_2(&VAR_1);

}
