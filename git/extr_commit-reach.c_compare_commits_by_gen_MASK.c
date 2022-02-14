
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit {scalar_t__ generation; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct commit *VAR_2 = *(const struct commit * const *)VAR_0;
 const struct commit *VAR_3 = *(const struct commit * const *)VAR_1;

 if (VAR_2->generation < VAR_3->generation)
  return -1;
 if (VAR_2->generation > VAR_3->generation)
  return 1;
 return 0;
}
