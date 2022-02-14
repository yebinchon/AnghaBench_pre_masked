
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char**,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, const struct kernel_param *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 if (!VAR_3)
  return -VAR_0;
 VAR_6 = FUNC_1(VAR_3, &VAR_5, 0);
 if (VAR_5 == VAR_3)
  return -VAR_0;

 *((int *)VAR_4->arg) = VAR_6;
 if (VAR_2)
  VAR_7 = FUNC_0(VAR_1);

 return VAR_7;
}
