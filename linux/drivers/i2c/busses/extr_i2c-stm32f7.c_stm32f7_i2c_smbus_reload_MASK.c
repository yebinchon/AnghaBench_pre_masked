
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stm32f7_i2c_msg {int count; int * buf; } ;
struct stm32f7_i2c_dev {scalar_t__ base; struct stm32f7_i2c_msg f7_msg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct stm32f7_i2c_dev*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct stm32f7_i2c_dev *VAR_3)
{
 struct stm32f7_i2c_msg *VAR_4 = &VAR_3->f7_msg;
 u32 VAR_5;
 u8 *VAR_6;





 FUNC_2(VAR_3);




 VAR_6 = VAR_4->buf - sizeof(u8);
 VAR_4->count = *VAR_6;
 VAR_5 = FUNC_1(VAR_3->base + VAR_0);
 VAR_5 &= ~(VAR_1 | VAR_2);
 VAR_5 |= FUNC_0(VAR_4->count);
 FUNC_3(VAR_5, VAR_3->base + VAR_0);
}
