
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return 0;


 return !!(VAR_0[VAR_1].type & VAR_3);
}
