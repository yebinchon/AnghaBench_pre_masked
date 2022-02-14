
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {size_t avg_num; } ;
struct imx7d_adc {int channel; scalar_t__ regs; TYPE_1__ adc_feature; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct imx7d_adc *VAR_6)
{
 u32 VAR_7 = 0;
 u32 VAR_8;
 u32 VAR_9;

 VAR_9 = VAR_6->channel;


 VAR_7 |= (VAR_3 |
   VAR_4 |
   VAR_2);







 VAR_7 |= FUNC_0(VAR_9);





 VAR_8 = FUNC_1(VAR_6->regs + VAR_0 * VAR_9 +
       VAR_1);

 VAR_8 |= VAR_5[VAR_6->adc_feature.avg_num];





 FUNC_2(VAR_8, VAR_6->regs + VAR_0 * VAR_9 +
        VAR_1);
 FUNC_2(VAR_7, VAR_6->regs + VAR_0 * VAR_9);
}
