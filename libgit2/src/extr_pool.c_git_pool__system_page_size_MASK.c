
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_pool_page ;


 scalar_t__ FUNC_0 (size_t*) ;

size_t FUNC_1(void)
{
 static size_t VAR_0 = 0;

 if (!VAR_0) {
  size_t VAR_1;
  if (FUNC_0(&VAR_1) < 0)
   VAR_1 = 4096;

  VAR_0 = (VAR_1 - (2 * sizeof(void *)) - sizeof(git_pool_page));
 }

 return VAR_0;
}
