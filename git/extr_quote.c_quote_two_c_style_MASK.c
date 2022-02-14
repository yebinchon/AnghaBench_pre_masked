
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,struct strbuf*,int *,int) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char const*) ;

void FUNC_3(struct strbuf *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_1, ((void*)0), ((void*)0), 0) ||
     FUNC_0(VAR_2, ((void*)0), ((void*)0), 0)) {
  if (!VAR_3)
   FUNC_1(VAR_0, '"');
  FUNC_0(VAR_1, VAR_0, ((void*)0), 1);
  FUNC_0(VAR_2, VAR_0, ((void*)0), 1);
  if (!VAR_3)
   FUNC_1(VAR_0, '"');
 } else {
  FUNC_2(VAR_0, VAR_1);
  FUNC_2(VAR_0, VAR_2);
 }
}
