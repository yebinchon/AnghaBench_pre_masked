
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncpaddr {scalar_t__ ncpaddr_family; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(const struct ncpaddr *VAR_1)
{
  return VAR_1->ncpaddr_family != VAR_0;
}
