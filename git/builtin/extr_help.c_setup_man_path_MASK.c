
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct strbuf VAR_2 = VAR_1;
 const char *VAR_3 = FUNC_1("MANPATH");
 char *VAR_4 = FUNC_6(VAR_0);





 FUNC_4(&VAR_2, VAR_4);
 FUNC_3(&VAR_2, ':');
 if (VAR_3)
  FUNC_4(&VAR_2, VAR_3);

 FUNC_0(VAR_4);
 FUNC_2("MANPATH", VAR_2.buf, 1);

 FUNC_5(&VAR_2);
}
