
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa1100_gpio_chip {int irqrising; int irqmask; int irqfalling; void* membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void*) ;

__attribute__((used)) static void FUNC_1(struct sa1100_gpio_chip *VAR_2)
{
 void *VAR_3 = VAR_2->membase;
 u32 VAR_4, VAR_5;

 VAR_4 = VAR_2->irqrising & VAR_2->irqmask;
 VAR_5 = VAR_2->irqfalling & VAR_2->irqmask;

 FUNC_0(VAR_4, VAR_3 + VAR_1);
 FUNC_0(VAR_5, VAR_3 + VAR_0);
}
