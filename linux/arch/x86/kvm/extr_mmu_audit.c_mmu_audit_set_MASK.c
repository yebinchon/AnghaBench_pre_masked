
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const struct kernel_param *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_0(VAR_1, 10, &VAR_4);
 if (VAR_3 < 0)
  return -VAR_0;

 switch (VAR_4) {
 case 0:
  FUNC_1();
  break;
 case 1:
  FUNC_2();
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
