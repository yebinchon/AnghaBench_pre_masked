
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;
typedef int local64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, const struct kernel_param *VAR_1)
{
 return FUNC_1(VAR_0, "%lu\n", FUNC_0((local64_t *)VAR_1->arg));
}
