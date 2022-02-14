
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 unsigned long FUNC_0 (char const*,int*) ;
 scalar_t__ FUNC_1 (char const*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,unsigned long) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, struct strbuf *VAR_1)
{
 FUNC_2(VAR_1, '@');

 if (FUNC_1(VAR_0, VAR_1) < 0) {
  int VAR_2 = 0;
  unsigned long VAR_3 = FUNC_0(VAR_0, &VAR_2);
  if (VAR_2)
   return -1;
  FUNC_3(VAR_1, "%lu", VAR_3);
 }

 return 0;
}
