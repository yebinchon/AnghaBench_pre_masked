
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,int*,...) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3, const struct kernel_param *VAR_4)
{
 int VAR_5, VAR_6 = 1;



 if (FUNC_0(VAR_3, "%d:%d", &VAR_5, &VAR_6) != 2 && FUNC_0(VAR_3, "%d", &VAR_5) != 1)
  return -VAR_0;

 if (VAR_5 >= VAR_1 || VAR_6 < 0 || VAR_6 > 1)
  return -VAR_0;

 if (VAR_6)
  VAR_2 |= (1 << VAR_5);
 else
  VAR_2 &= ~(1 << VAR_5);

 return 0;
}
