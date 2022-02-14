
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynq_gpio {TYPE_1__* p_data; } ;
struct TYPE_2__ {int max_bank; unsigned int* bank_min; unsigned int* bank_max; } ;


 int FUNC_0 (int,char*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_0,
       unsigned int *VAR_1,
       unsigned int *VAR_2,
       struct zynq_gpio *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->p_data->max_bank; VAR_4++) {
  if ((VAR_0 >= VAR_3->p_data->bank_min[VAR_4]) &&
      (VAR_0 <= VAR_3->p_data->bank_max[VAR_4])) {
   *VAR_1 = VAR_4;
   *VAR_2 = VAR_0 -
     VAR_3->p_data->bank_min[VAR_4];
   return;
  }
 }


 FUNC_0(1, "invalid GPIO pin number: %u", VAR_0);
 *VAR_1 = 0;
 *VAR_2 = 0;
}
