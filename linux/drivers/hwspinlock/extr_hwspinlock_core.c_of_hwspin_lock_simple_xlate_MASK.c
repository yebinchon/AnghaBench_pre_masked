
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; int* args; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(const struct of_phandle_args *VAR_1)
{
 if (FUNC_0(VAR_1->args_count != 1))
  return -VAR_0;

 return VAR_1->args[0];
}
