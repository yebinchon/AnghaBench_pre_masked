
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,struct strbuf*,char const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_4, const char *VAR_5)
{
 if (VAR_1) {
  struct strbuf VAR_6 = VAR_0;
  FUNC_4(&VAR_6, VAR_4);
  FUNC_5(&VAR_6, "/objects");
  FUNC_1(VAR_6.buf);
  FUNC_6(&VAR_6);
 } else {
  struct strbuf VAR_7 = VAR_0;
  struct strbuf VAR_8 = VAR_0;
  FUNC_4(&VAR_7, VAR_4);
  FUNC_4(&VAR_8, VAR_5);
  FUNC_5(&VAR_7, "/objects");
  FUNC_5(&VAR_8, "/objects");
  FUNC_2(&VAR_7, &VAR_8, VAR_4);
  FUNC_6(&VAR_7);
  FUNC_6(&VAR_8);
 }

 if (0 <= VAR_2)
  FUNC_3(VAR_3, "%s", FUNC_0("done.\n"));
}
