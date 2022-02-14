
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {scalar_t__ cpuvendor; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

bool FUNC_0(struct mce *VAR_4)
{
 if (VAR_4->cpuvendor == VAR_2 && VAR_4->status & VAR_0)
  return 0;

 if (VAR_4->cpuvendor == VAR_3 && VAR_4->status & VAR_0)
  return 0;

 if (VAR_4->status & VAR_1)
  return 0;

 return 1;
}
