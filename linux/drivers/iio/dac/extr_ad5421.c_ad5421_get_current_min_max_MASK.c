
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5421_state {int current_range; } ;






__attribute__((used)) static void FUNC_0(struct ad5421_state *VAR_0,
 unsigned int *VAR_1, unsigned int *VAR_2)
{


 switch (VAR_0->current_range) {
 case 128:
  *VAR_1 = 4000;
  *VAR_2 = 20000;
  break;
 case 129:
  *VAR_1 = 3800;
  *VAR_2 = 21000;
  break;
 case 130:
  *VAR_1 = 3200;
  *VAR_2 = 24000;
  break;
 default:
  *VAR_1 = 0;
  *VAR_2 = 1;
  break;
 }
}
