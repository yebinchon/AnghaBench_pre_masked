
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kernel_param {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,int,scalar_t__*) ;
 int FUNC_1 (char const*,struct kernel_param const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const struct kernel_param *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2, 10, &VAR_5);
 if (VAR_4 != 0 || VAR_5 > VAR_1 || VAR_5 == 0)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_3);
}
