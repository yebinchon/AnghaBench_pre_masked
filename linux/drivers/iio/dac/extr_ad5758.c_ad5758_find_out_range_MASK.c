
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min; int max; int reg; } ;
struct ad5758_state {TYPE_1__ out_range; } ;
struct ad5758_range {int min; int max; int reg; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ad5758_state *VAR_1,
     const struct ad5758_range *VAR_2,
     unsigned int VAR_3,
     int VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if ((VAR_4 == VAR_2[VAR_6].min) && (VAR_5 == VAR_2[VAR_6].max)) {
   VAR_1->out_range.reg = VAR_2[VAR_6].reg;
   VAR_1->out_range.min = VAR_2[VAR_6].min;
   VAR_1->out_range.max = VAR_2[VAR_6].max;

   return 0;
  }
 }

 return -VAR_0;
}
