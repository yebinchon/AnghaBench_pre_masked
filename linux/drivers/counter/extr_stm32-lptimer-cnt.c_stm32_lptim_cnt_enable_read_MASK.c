
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_lptim_cnt {int dummy; } ;
struct counter_device {struct stm32_lptim_cnt* priv; } ;
struct counter_count {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (struct stm32_lptim_cnt* const) ;

__attribute__((used)) static ssize_t FUNC_2(struct counter_device *VAR_1,
        struct counter_count *VAR_2,
        void *VAR_3, char *VAR_4)
{
 struct stm32_lptim_cnt *const VAR_5 = VAR_1->priv;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_4, VAR_0, "%u\n", VAR_6);
}
