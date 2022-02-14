
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ version; } ;


 size_t FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool FUNC_1(int VAR_3)
{
 if (!(VAR_1 & (1 << VAR_3)))
  return 0;
 if (VAR_2[FUNC_0(VAR_3)].version == VAR_0)
  return 0;
 return 1;
}
