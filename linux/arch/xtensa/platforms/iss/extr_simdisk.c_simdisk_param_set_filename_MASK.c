
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 scalar_t__ FUNC_0 (char const**) ;
 int VAR_0 ;
 char const** VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(const char *VAR_3,
  const struct kernel_param *VAR_4)
{
 if (VAR_2 < FUNC_0(VAR_1))
  VAR_1[VAR_2++] = VAR_3;
 else
  return -VAR_0;
 return 0;
}
