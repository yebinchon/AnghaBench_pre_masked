
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2);
 *(int *)VAR_0->value = FUNC_1(VAR_1, ((void*)0), 10);
 return 0;
}
