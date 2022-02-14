
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int configured_in_repo; int origin; } ;



int FUNC_0(struct remote *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return 0;
 if (VAR_1)
  return VAR_0->configured_in_repo;
 return !!VAR_0->origin;
}
