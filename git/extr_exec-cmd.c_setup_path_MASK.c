
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct strbuf*,char const*) ;
 int FUNC_6 (struct strbuf*) ;

void FUNC_7(void)
{
 const char *VAR_2 = FUNC_2();
 const char *VAR_3 = FUNC_1("PATH");
 struct strbuf VAR_4 = VAR_0;

 FUNC_3(VAR_2);
 FUNC_0(&VAR_4, VAR_2);

 if (VAR_3)
  FUNC_5(&VAR_4, VAR_3);
 else
  FUNC_5(&VAR_4, VAR_1);

 FUNC_4("PATH", VAR_4.buf, 1);

 FUNC_6(&VAR_4);
}
