
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct strbuf*,int ,int ) ;
 scalar_t__ FUNC_4 (struct strbuf*,char const*,int ) ;

__attribute__((used)) static void FUNC_5(struct strbuf *VAR_1, const char *VAR_2)
{
 if (VAR_2) {
  if (FUNC_4(VAR_1, VAR_2, 0) < 0)
   FUNC_1(FUNC_0("could not read input file '%s'"), VAR_2);
 } else {
  if (FUNC_3(VAR_1, FUNC_2(VAR_0), 0) < 0)
   FUNC_1(FUNC_0("could not read from stdin"));
 }
}
