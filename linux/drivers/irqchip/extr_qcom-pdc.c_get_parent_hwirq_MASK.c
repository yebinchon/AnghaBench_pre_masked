
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdc_pin_region {int pin_base; int cnt; unsigned long parent_base; } ;
typedef unsigned long irq_hw_number_t ;


 int FUNC_0 (int) ;
 struct pdc_pin_region* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static irq_hw_number_t FUNC_1(int VAR_2)
{
 int VAR_3;
 struct pdc_pin_region *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = &VAR_0[VAR_3];
  if (VAR_2 >= VAR_4->pin_base &&
      VAR_2 < VAR_4->pin_base + VAR_4->cnt)
   return (VAR_4->parent_base + VAR_2 - VAR_4->pin_base);
 }

 FUNC_0(1);
 return ~0UL;
}
