
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adc {int pcsel; int difsel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stm32_adc*,int ,int ) ;
 int FUNC_1 (struct stm32_adc*) ;
 int FUNC_2 (struct stm32_adc*) ;
 int FUNC_3 (struct stm32_adc*) ;
 int FUNC_4 (struct stm32_adc*) ;
 int FUNC_5 (struct stm32_adc*) ;
 int FUNC_6 (struct stm32_adc*) ;
 int FUNC_7 (struct stm32_adc*) ;

__attribute__((used)) static int FUNC_8(struct stm32_adc *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4 < 0)
  goto pwr_dwn;
 VAR_3 = VAR_4;

 FUNC_0(VAR_2, VAR_0, VAR_2->difsel);

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  goto pwr_dwn;


 if (VAR_3)
  VAR_4 = FUNC_6(VAR_2);
 else
  VAR_4 = FUNC_5(VAR_2);
 if (VAR_4)
  goto disable;

 FUNC_0(VAR_2, VAR_1, VAR_2->pcsel);

 return 0;

disable:
 FUNC_1(VAR_2);
pwr_dwn:
 FUNC_3(VAR_2);

 return VAR_4;
}
