
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_2, const struct kernel_param *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_1) {
 case 129:
  VAR_4 = FUNC_0(VAR_2, "on");
  break;
 case 130:
  VAR_4 = FUNC_0(VAR_2, "off");
  break;
 case 128:
  VAR_4 = FUNC_0(VAR_2, "force");
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
