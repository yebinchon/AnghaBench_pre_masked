
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int* arg; } ;
typedef enum i8042_controller_reset_mode { ____Placeholder_i8042_controller_reset_mode } i8042_controller_reset_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, const struct kernel_param *VAR_3)
{
 enum i8042_controller_reset_mode *VAR_4 = VAR_3->arg;
 int VAR_5;
 bool VAR_6;

 if (VAR_2) {
  VAR_5 = FUNC_0(VAR_2, &VAR_6);
  if (VAR_5)
   return VAR_5;
 } else {
  VAR_6 = 1;
 }

 *VAR_4 = VAR_6 ? VAR_0 : VAR_1;
 return 0;
}
