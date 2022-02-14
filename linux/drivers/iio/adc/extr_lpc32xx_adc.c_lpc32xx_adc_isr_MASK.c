
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_adc_state {int value; int completion; int adc_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct lpc32xx_adc_state *VAR_4 = VAR_3;


 VAR_4->value = FUNC_1(FUNC_0(VAR_4->adc_base)) &
  VAR_1;
 FUNC_2(&VAR_4->completion);

 return VAR_0;
}
