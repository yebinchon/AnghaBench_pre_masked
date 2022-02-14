
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*,struct kernel_param const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, const struct kernel_param *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;
 if ((VAR_0 < 0) || (VAR_0 == VAR_1))
  return 0;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0);
 return 0;
}
