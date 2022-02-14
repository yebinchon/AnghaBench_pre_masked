
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char const*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const struct kernel_param *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, 0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3 < 1000)
  return -VAR_0;

 *((unsigned int *)VAR_2->arg) = VAR_3;


 FUNC_0(VAR_3);

 return 0;
}
