
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_lptim_cnt {scalar_t__ polarity; int quadrature_mode; } ;
struct counter_device {struct stm32_lptim_cnt* priv; } ;
struct counter_count {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct counter_device *VAR_4,
     struct counter_count *VAR_5,
     size_t *VAR_6)
{
 struct stm32_lptim_cnt *const VAR_7 = VAR_4->priv;

 if (!VAR_7->quadrature_mode) {
  *VAR_6 = VAR_1;
  return 0;
 }

 if (VAR_7->polarity == VAR_3) {
  *VAR_6 = VAR_2;
  return 0;
 }

 return -VAR_0;
}
