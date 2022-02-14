
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_lptim_cnt {scalar_t__ ceiling; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct stm32_lptim_cnt*) ;

__attribute__((used)) static ssize_t FUNC_2(struct stm32_lptim_cnt *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, 0, &VAR_3->ceiling);
 if (VAR_6)
  return VAR_6;

 if (VAR_3->ceiling > VAR_2)
  return -VAR_1;

 return VAR_5;
}
