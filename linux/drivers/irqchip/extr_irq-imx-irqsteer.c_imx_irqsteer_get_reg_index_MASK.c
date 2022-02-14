
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqsteer_data {unsigned long reg_num; } ;



__attribute__((used)) static int FUNC_0(struct irqsteer_data *VAR_0,
          unsigned long VAR_1)
{
 return (VAR_0->reg_num - VAR_1 / 32 - 1);
}
