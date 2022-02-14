
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,char const*) ;
 int FUNC_2 (char) ;
 unsigned int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, int VAR_1, unsigned int *VAR_2)
{
 char *VAR_3;
 *VAR_2 = FUNC_3(VAR_0, &VAR_3, 8);
 if (VAR_3 == VAR_0 || !FUNC_2(*VAR_3))
  return FUNC_1(FUNC_0("invalid mode on line %d: %s"), VAR_1, VAR_0);
 return 0;
}
