
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hisi_phase {int phase_num; int* phase_degrees; int* phase_regvals; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct clk_hisi_phase *VAR_1,
     int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->phase_num; VAR_3++)
  if (VAR_1->phase_degrees[VAR_3] == VAR_2)
   return VAR_1->phase_regvals[VAR_3];

 return -VAR_0;
}
