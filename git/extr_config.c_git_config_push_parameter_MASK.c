
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;

void FUNC_6(const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_1;
 const char *VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 && *VAR_4) {
  FUNC_4(&VAR_3, VAR_4);
  FUNC_3(&VAR_3, ' ');
 }
 FUNC_2(&VAR_3, VAR_2);
 FUNC_1(VAR_0, VAR_3.buf, 1);
 FUNC_5(&VAR_3);
}
