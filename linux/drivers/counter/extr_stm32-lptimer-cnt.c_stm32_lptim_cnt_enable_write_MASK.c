
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_lptim_cnt {int dummy; } ;
struct counter_device {struct stm32_lptim_cnt* priv; } ;
struct counter_count {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (struct stm32_lptim_cnt* const) ;
 int FUNC_2 (struct stm32_lptim_cnt* const,int) ;
 int FUNC_3 (struct stm32_lptim_cnt* const,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct counter_device *VAR_1,
         struct counter_count *VAR_2,
         void *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct stm32_lptim_cnt *const VAR_6 = VAR_1->priv;
 bool VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_1(VAR_6);
 if ((VAR_8 < 0) || (!VAR_8 && !VAR_7))
  return VAR_8;
 if (VAR_7 && VAR_8)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 return VAR_5;
}
