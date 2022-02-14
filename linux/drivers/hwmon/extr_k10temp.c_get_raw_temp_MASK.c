
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct k10temp_data {int temp_adjust_mask; int pdev; int (* read_tempreg ) (int ,int*) ;} ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static unsigned int FUNC_1(struct k10temp_data *VAR_0)
{
 unsigned int VAR_1;
 u32 VAR_2;

 VAR_0->read_tempreg(VAR_0->pdev, &VAR_2);
 VAR_1 = (VAR_2 >> 21) * 125;
 if (VAR_2 & VAR_0->temp_adjust_mask)
  VAR_1 -= 49000;
 return VAR_1;
}
