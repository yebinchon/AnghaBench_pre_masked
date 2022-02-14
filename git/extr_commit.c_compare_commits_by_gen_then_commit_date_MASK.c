
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit {scalar_t__ generation; scalar_t__ date; } ;



int FUNC_0(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 const struct commit *VAR_3 = VAR_0, *VAR_4 = VAR_1;


 if (VAR_3->generation < VAR_4->generation)
  return 1;
 else if (VAR_3->generation > VAR_4->generation)
  return -1;


 if (VAR_3->date < VAR_4->date)
  return 1;
 else if (VAR_3->date > VAR_4->date)
  return -1;
 return 0;
}
