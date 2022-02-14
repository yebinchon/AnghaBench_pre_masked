
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char const*) ;
 int FUNC_1 (struct strbuf*,char*,int,char const*) ;
 int FUNC_2 (struct strbuf*,char const*) ;

void FUNC_3(struct strbuf *VAR_0, const char *VAR_1,
         const char *VAR_2,
         int VAR_3)
{
 FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, "objects/%.*s/", 2, VAR_2);
 if (!VAR_3)
  FUNC_2(VAR_0, VAR_2 + 2);
}
