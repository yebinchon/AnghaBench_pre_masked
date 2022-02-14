
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char) ;
 unsigned long FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static unsigned long FUNC_3(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 unsigned long VAR_3 = FUNC_2(VAR_1, &VAR_2, 0);
 if (FUNC_1(VAR_1, '-') || VAR_2 == VAR_1 || *VAR_2)
  FUNC_0("%s: argument must be a non-negative integer", VAR_0);
 return VAR_3;
}
