
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char const) ;
 int FUNC_1 (struct strbuf*,int ) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const char *VAR_1,
    struct strbuf *VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_1);

 if (FUNC_3(VAR_0, VAR_1, VAR_3))
  return -1;
 VAR_0 += VAR_3;

 if (*VAR_0 != '=')
  return -1;
 VAR_0++;

 while (*VAR_0 && !FUNC_0(*VAR_0) && *VAR_0 != ';')
  FUNC_1(VAR_2, *VAR_0++);
 return 0;
}
