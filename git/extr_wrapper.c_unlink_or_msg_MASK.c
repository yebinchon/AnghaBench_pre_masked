
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct strbuf*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct strbuf*,char*,char const*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*) ;

int FUNC_4(const char *VAR_2, struct strbuf *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_2);

 FUNC_0(VAR_3);

 if (!VAR_4 || VAR_1 == VAR_0)
  return 0;

 FUNC_1(VAR_3, "unable to unlink '%s': %s",
      VAR_2, FUNC_2(VAR_1));
 return -1;
}
