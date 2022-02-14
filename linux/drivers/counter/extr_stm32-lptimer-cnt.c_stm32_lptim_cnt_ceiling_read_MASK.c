
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_lptim_cnt {int dummy; } ;
struct counter_device {struct stm32_lptim_cnt* priv; } ;
struct counter_count {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct stm32_lptim_cnt* const,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct counter_device *VAR_0,
         struct counter_count *VAR_1,
         void *VAR_2, char *VAR_3)
{
 struct stm32_lptim_cnt *const VAR_4 = VAR_0->priv;

 return FUNC_0(VAR_4, VAR_3);
}
