
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32f7_i2c_msg {scalar_t__ count; } ;
struct stm32f7_i2c_dev {scalar_t__ base; scalar_t__ use_dma; struct stm32f7_i2c_msg f7_msg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct stm32f7_i2c_dev *VAR_4)
{
 struct stm32f7_i2c_msg *VAR_5 = &VAR_4->f7_msg;
 u32 VAR_6;

 if (VAR_4->use_dma)
  VAR_5->count -= VAR_3;

 VAR_6 = FUNC_1(VAR_4->base + VAR_0);

 VAR_6 &= ~VAR_1;
 if (VAR_5->count > VAR_3) {
  VAR_6 |= FUNC_0(VAR_3);
 } else {
  VAR_6 &= ~VAR_2;
  VAR_6 |= FUNC_0(VAR_5->count);
 }

 FUNC_2(VAR_6, VAR_4->base + VAR_0);
}
