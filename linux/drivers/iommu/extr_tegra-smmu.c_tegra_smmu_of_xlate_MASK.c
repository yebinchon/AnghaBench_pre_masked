
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_phandle_args {int * args; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0,
          struct of_phandle_args *VAR_1)
{
 u32 VAR_2 = VAR_1->args[0];

 return FUNC_0(VAR_0, &VAR_2, 1);
}
