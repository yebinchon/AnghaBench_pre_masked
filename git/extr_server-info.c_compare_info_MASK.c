
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_info {scalar_t__ old_num; scalar_t__ p; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct pack_info *const *VAR_2 = VAR_0;
 struct pack_info *const *VAR_3 = VAR_1;

 if (0 <= (*VAR_2)->old_num && 0 <= (*VAR_3)->old_num)

  return (*VAR_2)->old_num - (*VAR_3)->old_num;
 else if (0 <= (*VAR_2)->old_num)

  return -1;
 else if (0 <= (*VAR_3)->old_num)

  return 1;


 if ((*VAR_2)->p == (*VAR_3)->p)
  return 0;
 else if ((*VAR_2)->p < (*VAR_3)->p)
  return -1;
 else
  return 1;
}
