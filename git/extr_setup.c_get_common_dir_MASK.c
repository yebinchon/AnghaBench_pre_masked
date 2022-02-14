
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,char const*) ;

int FUNC_3(struct strbuf *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_0);
 if (VAR_3) {
  FUNC_2(VAR_1, VAR_3);
  return 1;
 } else {
  return FUNC_0(VAR_1, VAR_2);
 }
}
