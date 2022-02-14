
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32f7_i2c_timings {int scll; int sclh; int sdadel; int scldel; int presc; } ;
struct TYPE_2__ {scalar_t__ analog_filter; } ;
struct stm32f7_i2c_dev {scalar_t__ base; TYPE_1__ setup; struct stm32f7_i2c_timings timing; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct stm32f7_i2c_dev *VAR_4)
{
 struct stm32f7_i2c_timings *VAR_5 = &VAR_4->timing;
 u32 VAR_6 = 0;


 VAR_6 |= FUNC_0(VAR_5->presc);
 VAR_6 |= FUNC_1(VAR_5->scldel);
 VAR_6 |= FUNC_4(VAR_5->sdadel);
 VAR_6 |= FUNC_2(VAR_5->sclh);
 VAR_6 |= FUNC_3(VAR_5->scll);
 FUNC_7(VAR_6, VAR_4->base + VAR_3);


 if (VAR_4->setup.analog_filter)
  FUNC_5(VAR_4->base + VAR_0,
         VAR_1);
 else
  FUNC_6(VAR_4->base + VAR_0,
         VAR_1);
 FUNC_6(VAR_4->base + VAR_0,
        VAR_2);
}
