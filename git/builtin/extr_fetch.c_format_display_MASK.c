
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct strbuf*,char const*,char const*) ;
 int FUNC_2 (struct strbuf*,char const*,char const*) ;
 int FUNC_3 (struct strbuf*,char*,...) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(struct strbuf *VAR_1, char VAR_2,
      const char *VAR_3, const char *VAR_4,
      const char *VAR_5, const char *VAR_6,
      int VAR_7)
{
 int VAR_8 = (VAR_7 + FUNC_4(VAR_3) - FUNC_0(VAR_3));

 FUNC_3(VAR_1, "%c %-*s ", VAR_2, VAR_8, VAR_3);
 if (!VAR_0)
  FUNC_2(VAR_1, VAR_5, VAR_6);
 else
  FUNC_1(VAR_1, VAR_5, VAR_6);
 if (VAR_4)
  FUNC_3(VAR_1, "  (%s)", VAR_4);
}
