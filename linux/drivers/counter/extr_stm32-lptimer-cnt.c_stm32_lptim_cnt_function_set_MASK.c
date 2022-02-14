
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_lptim_cnt {int quadrature_mode; int polarity; } ;
struct counter_device {struct stm32_lptim_cnt* priv; } ;
struct counter_count {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ FUNC_0 (struct stm32_lptim_cnt* const) ;

__attribute__((used)) static int FUNC_1(struct counter_device *VAR_3,
     struct counter_count *VAR_4,
     size_t VAR_5)
{
 struct stm32_lptim_cnt *const VAR_6 = VAR_3->priv;

 if (FUNC_0(VAR_6))
  return -VAR_0;

 switch (VAR_5) {
 case 129:
  VAR_6->quadrature_mode = 0;
  return 0;
 case 128:
  VAR_6->quadrature_mode = 1;
  VAR_6->polarity = VAR_2;
  return 0;
 }

 return -VAR_1;
}
