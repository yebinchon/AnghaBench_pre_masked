
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct of_phandle_args {int* args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct reset_controller_dev *VAR_3,
   const struct of_phandle_args *VAR_4)
{
 u32 VAR_5;
 u8 VAR_6;

 VAR_5 = (VAR_4->args[0] << VAR_2)
  & VAR_1;
 VAR_6 = VAR_4->args[1] & VAR_0;

 return (VAR_5 | VAR_6);
}
