
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min; int max; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2)
{
 VAR_1 = FUNC_0(VAR_1,
   VAR_0[VAR_2].min,
   VAR_0[VAR_2].max);
 VAR_1 = (VAR_1 - VAR_0[VAR_2].min) /
   ((VAR_0[VAR_2].max -
     VAR_0[VAR_2].min) * 0xFF);
 return VAR_1;
}
