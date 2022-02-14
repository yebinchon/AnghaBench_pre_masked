
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int ,struct strbuf*) ;

void FUNC_2(const char *VAR_1, struct strbuf *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_0, VAR_2))
  FUNC_0("sanitizing refname '%s' check returned error", VAR_1);
}
