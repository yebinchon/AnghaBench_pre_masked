
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle {scalar_t__ phase; scalar_t__ CleaningUp; int links; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct bundle *VAR_1)
{
  return !VAR_1->links || (VAR_1->phase == VAR_0 && VAR_1->CleaningUp);
}
