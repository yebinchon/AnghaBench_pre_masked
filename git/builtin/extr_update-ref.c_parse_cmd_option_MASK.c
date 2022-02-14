
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 char const VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 int VAR_2 ;

__attribute__((used)) static const char *FUNC_2(struct strbuf *VAR_3, const char *VAR_4)
{
 const char *VAR_5;
 if (FUNC_1(VAR_4, "no-deref", &VAR_5) && *VAR_5 == VAR_1)
  VAR_2 |= VAR_0;
 else
  FUNC_0("option unknown: %s", VAR_4);
 return VAR_5;
}
