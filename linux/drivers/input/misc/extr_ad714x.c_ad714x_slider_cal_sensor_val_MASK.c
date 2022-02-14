
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad714x_slider_plat {size_t start_stage; int end_stage; } ;
struct ad714x_chip {scalar_t__* amb_reg; scalar_t__* adc_reg; int * sensor_val; int (* read ) (struct ad714x_chip*,scalar_t__,scalar_t__*,int) ;TYPE_1__* hw; } ;
struct TYPE_2__ {struct ad714x_slider_plat* slider; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ad714x_chip*,scalar_t__,scalar_t__*,int) ;
 int FUNC_2 (struct ad714x_chip*,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(struct ad714x_chip *VAR_3, int VAR_4)
{
 struct ad714x_slider_plat *VAR_5 = &VAR_3->hw->slider[VAR_4];
 int VAR_6;

 VAR_3->read(VAR_3, VAR_0 + VAR_5->start_stage,
   &VAR_3->adc_reg[VAR_5->start_stage],
   VAR_5->end_stage - VAR_5->start_stage + 1);

 for (VAR_6 = VAR_5->start_stage; VAR_6 <= VAR_5->end_stage; VAR_6++) {
  VAR_3->read(VAR_3, VAR_2 + VAR_6 * VAR_1,
    &VAR_3->amb_reg[VAR_6], 1);

  VAR_3->sensor_val[VAR_6] =
   FUNC_0(VAR_3->adc_reg[VAR_6] - VAR_3->amb_reg[VAR_6]);
 }
}
