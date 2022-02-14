
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_times {scalar_t__ pt_pctcpu; } ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 return (((const struct p_times *) VAR_0)->pt_pctcpu >
  ((const struct p_times *) VAR_1)->pt_pctcpu)? -1: 1;
}
