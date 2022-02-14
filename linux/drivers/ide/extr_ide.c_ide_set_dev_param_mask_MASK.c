
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char const*,char*,unsigned int*,unsigned int*,...) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3, const struct kernel_param *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8 = 1;
 unsigned int *VAR_9 = (unsigned int *)VAR_4->arg;


 if (FUNC_0(VAR_3, "%u.%u:%u", &VAR_5, &VAR_6, &VAR_8) != 3 &&
     FUNC_0(VAR_3, "%u.%u", &VAR_5, &VAR_6) != 2)
  return -VAR_0;

 VAR_7 = VAR_5 * VAR_1 + VAR_6;

 if (VAR_7 >= VAR_2 * VAR_1 || VAR_8 > 1)
  return -VAR_0;

 if (VAR_8)
  *VAR_9 |= (1 << VAR_7);
 else
  *VAR_9 &= ~(1 << VAR_7);

 return 0;
}
