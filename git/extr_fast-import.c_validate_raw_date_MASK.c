
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, struct strbuf *VAR_2)
{
 const char *VAR_3 = VAR_1;
 char *VAR_4;
 unsigned long VAR_5;

 VAR_0 = 0;

 VAR_5 = FUNC_1(VAR_1, &VAR_4, 10);

 if (VAR_0 || VAR_4 == VAR_1 || *VAR_4 != ' ')
  return -1;

 VAR_1 = VAR_4 + 1;
 if (*VAR_1 != '-' && *VAR_1 != '+')
  return -1;

 VAR_5 = FUNC_1(VAR_1 + 1, &VAR_4, 10);
 if (VAR_0 || VAR_4 == VAR_1 + 1 || *VAR_4 || 1400 < VAR_5)
  return -1;

 FUNC_0(VAR_2, VAR_3);
 return 0;
}
