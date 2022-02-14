
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,char const*) ;
 long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 long VAR_5;

 VAR_1 = 0;
 VAR_5 = FUNC_1(VAR_2, &VAR_4, 10);
 if (VAR_1 != 0 || VAR_4 == VAR_2 || *VAR_4 != '\0')
  FUNC_0(1, "%s must be a number", VAR_3);
 if (VAR_5 >= VAR_0)
  FUNC_0(1, "Integer overflow parsing %s", VAR_3);
 return (VAR_5);
}
