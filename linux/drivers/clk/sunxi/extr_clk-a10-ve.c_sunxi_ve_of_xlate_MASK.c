
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct of_phandle_args {scalar_t__ args_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct reset_controller_dev *VAR_1,
        const struct of_phandle_args *VAR_2)
{
 if (FUNC_0(VAR_2->args_count != 0))
  return -VAR_0;

 return 0;
}
