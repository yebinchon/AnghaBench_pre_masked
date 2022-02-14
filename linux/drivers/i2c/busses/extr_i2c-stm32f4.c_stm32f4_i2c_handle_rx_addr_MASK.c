
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32f4_i2c_msg {int count; int stop; } ;
struct stm32f4_i2c_dev {scalar_t__ base; struct stm32f4_i2c_msg msg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct stm32f4_i2c_dev*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct stm32f4_i2c_dev *VAR_6)
{
 struct stm32f4_i2c_msg *VAR_7 = &VAR_6->msg;
 u32 VAR_8;

 switch (VAR_7->count) {
 case 0:
  FUNC_1(VAR_6);


  FUNC_0(VAR_6->base + VAR_5);
  break;
 case 1:







  VAR_8 = FUNC_0(VAR_6->base + VAR_0);
  VAR_8 &= ~(VAR_1 | VAR_2);
  FUNC_2(VAR_8, VAR_6->base + VAR_0);

  FUNC_0(VAR_6->base + VAR_5);

  if (VAR_7->stop)
   VAR_8 |= VAR_4;
  else
   VAR_8 |= VAR_3;
  FUNC_2(VAR_8, VAR_6->base + VAR_0);
  break;
 case 2:







  VAR_8 = FUNC_0(VAR_6->base + VAR_0);
  VAR_8 &= ~VAR_1;
  VAR_8 |= VAR_2;
  FUNC_2(VAR_8, VAR_6->base + VAR_0);

  FUNC_0(VAR_6->base + VAR_5);
  break;

 default:






  VAR_8 = FUNC_0(VAR_6->base + VAR_0);
  VAR_8 |= VAR_1;
  VAR_8 &= ~VAR_2;
  FUNC_2(VAR_8, VAR_6->base + VAR_0);

  FUNC_0(VAR_6->base + VAR_5);
  break;
 }
}
