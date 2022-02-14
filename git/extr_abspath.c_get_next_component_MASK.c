
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (struct strbuf*,char*,int) ;
 int FUNC_2 (struct strbuf*,int ,int) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(struct strbuf *VAR_0, struct strbuf *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);

 FUNC_3(VAR_0);



 for (VAR_2 = VAR_1->buf; FUNC_0(*VAR_2); VAR_2++)
  ;

 for (VAR_3 = VAR_2; *VAR_3 && !FUNC_0(*VAR_3); VAR_3++)
  ;

 FUNC_1(VAR_0, VAR_2, VAR_3 - VAR_2);

 FUNC_2(VAR_1, 0, VAR_3 - VAR_1->buf);
}
