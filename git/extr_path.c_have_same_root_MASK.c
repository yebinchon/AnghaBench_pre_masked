
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 return (VAR_2 && VAR_3 && FUNC_1(VAR_0[0]) == FUNC_1(VAR_1[0])) ||
        (!VAR_2 && !VAR_3);
}
