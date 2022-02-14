
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,long*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, const char *VAR_1, const char *VAR_2, long VAR_3,
    long *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_4);
 if (VAR_5 >= 0)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_4);
 if (VAR_5 >= 0)
  return VAR_5;
 *VAR_4 = VAR_3;
 return 0;
}
