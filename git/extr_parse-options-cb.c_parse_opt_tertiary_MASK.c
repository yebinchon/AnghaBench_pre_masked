
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int* value; } ;


 int FUNC_0 (char const*) ;

int FUNC_1(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 int *VAR_3 = VAR_0->value;

 FUNC_0(VAR_1);

 *VAR_3 = VAR_2 ? 2 : 1;
 return 0;
}
