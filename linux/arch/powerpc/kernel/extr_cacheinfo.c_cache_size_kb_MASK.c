
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cache const*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(const struct cache *VAR_1, unsigned int *VAR_2)
{
 unsigned int VAR_3;

 if (FUNC_0(VAR_1, &VAR_3))
  return -VAR_0;

 *VAR_2 = VAR_3 / 1024;
 return 0;
}
