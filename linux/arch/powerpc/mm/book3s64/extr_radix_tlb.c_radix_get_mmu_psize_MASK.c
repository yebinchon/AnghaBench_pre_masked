
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long shift; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_0(int VAR_4)
{
 int VAR_5;

 if (VAR_4 == (1UL << VAR_2[VAR_3].shift))
  VAR_5 = VAR_3;
 else if (VAR_4 == (1UL << VAR_2[VAR_1].shift))
  VAR_5 = VAR_1;
 else if (VAR_4 == (1UL << VAR_2[VAR_0].shift))
  VAR_5 = VAR_0;
 else
  return -1;
 return VAR_5;
}
